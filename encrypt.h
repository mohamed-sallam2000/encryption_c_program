#ifndef ENCRYPT_H_INCLUDED
#define ENCRYPT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char Encryption(char ob,char *key);
void encrypt_file (FILE *file);
#endif // ENCRYPT_H_INCLUDED
