#ifndef FILE_MAKE_H_INCLUDED
#define FILE_MAKE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


void open_file (FILE *file);
int get_key_length (void);
void get_key (void);
void get_filename (void);
void save_file (FILE *file);
void take_choise_from_user();
#endif // FILE_MAKE_H_INCLUDED
