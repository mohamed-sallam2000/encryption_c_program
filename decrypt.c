#include"decrypt.h"

char filename[256];  // Maximum file name length of 255 characters
char key[256];  // Maximum key length of 255 characters
int key_length;

/**
*function name : decryption
*description:function take  character and  key  then make  decryption and  return the output
*arguments: char ob ( character to be decrypted)&&char *key (pointer to char is a key for decryption )
*return: char (the decrypted output)
**/
char decryption(char ob,char *key)
{
    static char j = 0;
    unsigned char ret = 0;
    ret = (ob) ^ (key[(int)j]);
    j++;
    if(j==key_length)
    {
        j=0;
    }
    return ret;
}

/**
*function name : decrypt file
*description:function take  encrypted file and  decrypt it
*arguments: pointer to file that  will be decrypted
*return: void
**/
void decrypt_file (FILE *file)
{
    char ch=0;
    char decrypted_ch=0;;
    FILE *generated=NULL;


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
        if (((decrypted_ch<32||decrypted_ch>126))&&decrypted_ch!=10)
        {
            fputc(ch, generated);
        }
        else
        {
            fputc(decrypted_ch, generated);
        }
    }


    save_file (file);
    save_file(generated);
}
