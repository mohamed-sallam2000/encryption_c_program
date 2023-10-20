#ifndef DECRYPT_H_INCLUDED//header Gard
#define DECRYPT_H_INCLUDED
/*include section*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include"file_make.h"



/**
*function name : decryption
*description:function take  character and  key  then make  decryption and  return the output
*arguments: char ob ( character to be decrypted)&&char *key (pointer to char is a key for decryption )
*return: char (the decrypted output)
**/
char decryption(char ob,char *key);

/**
*function name : decrypt file
*description:function take  encrypted file and  decrypt it
*arguments: pointer to file that  will be decrypted
*return: void
**/

void decrypt_file (FILE *file);



#endif // DECRYPT_H_INCLUDED
