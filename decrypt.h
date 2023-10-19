#ifndef DECRYPT_H_INCLUDED
#define DECRYPT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//FILE *original_file;




char decryption(char ob,char *key);
void decrypt_file (FILE *file);



#endif // DECRYPT_H_INCLUDED
