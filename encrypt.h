#ifndef ENCRYPT_H_INCLUDED//header gard
#define ENCRYPT_H_INCLUDED
/*include section*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include"file_make.h"
/**
*function name : Encryption
*description:function take  character and  key  then make  encryption and  return the output
*arguments: char ob ( character to be encrypted)&&char *key (pointer to char is a key for encryption )
*return: char (the encrypted output)
**/
char Encryption(char ob,char *key);
/**
*function name : encrypt file
*description:function take   file and  encrypt it
*arguments: pointer to file that  will be encrypted
*return: void
**/
void encrypt_file (FILE *file);
#endif // ENCRYPT_H_INCLUDED
