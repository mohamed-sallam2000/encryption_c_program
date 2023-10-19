#include"decrypt.h"

char filename[256];  // Maximum file name length of 255 characters
char key[256];  // Maximum key length of 255 characters
int key_length;
char decryption(char ob,char *key)
{
    static char j = 0;
    unsigned char ret = 0;
    ret = (unsigned char )((unsigned char)ob ^ (unsigned char)key[j++]);
  if(j==key_length)
    {
        j=0;
    }
    return ret;
}


void decrypt_file (FILE *file)
{
    char ch,decrypted_ch;
    FILE *generated;


    if (access(filename, F_OK) != -1)  // Return -1 in case of
    {

        file = fopen(filename, "r");  // Open the user-specified file

        if (file == NULL)
        {
            perror("Error opening the file");
        }
    }
    generated = fopen("decrypted.txt", "w");

    while ((ch = (unsigned char)fgetc(file)) != EOF)
    {

        decrypted_ch=decryption(ch,key);
   if (((decrypted_ch<32||decrypted_ch>126))&&decrypted_ch!=10){ fputc(ch, generated);}
        else{
        fputc(decrypted_ch, generated);
    }}

 printf(" char= %d %c",ch,ch);
    save_file (file);
    fclose(generated);
}
