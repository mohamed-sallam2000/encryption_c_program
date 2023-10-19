#include"encrypt.h"


char filename[256];  // Maximum file name length of 255 characters
char key[256];  // Maximum key length of 255 characters
int  key_length;
char Encryption(char ob,char *key)
{
    static char i = 0;
    char ret = 0;
       ret = (unsigned char )((unsigned char)ob ^ (unsigned char)key[i++]);
    if(i==key_length)
    {
        i=0;
    }
    return ret;
}
void encrypt_file (FILE *file)
{
    char ch,encrypted_ch;
    FILE *generated;


    if (access(filename, F_OK) != -1)  // Return -1 in case of exist
    {

        file = fopen(filename, "r");  // Open the user-specified file

        if (file == NULL)
        {
            perror("Error opening the file");
        }
    }
    generated = fopen("en.txt", "w");

    while ((ch = (unsigned char)fgetc(file)) != EOF)
    {
     encrypted_ch=  Encryption(ch,key);
     if (((encrypted_ch<32||encrypted_ch>126))&&encrypted_ch!=10){ fputc(ch, generated);}
        else{
        fputc(encrypted_ch, generated);
    }}

    //printf(" the char =%d\n the decrypted =%d",ch,decrypted_ch);
    save_file (file);
    save_file(generated);
}
