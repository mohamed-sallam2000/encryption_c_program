#ifndef FILE_MAKE_H_INCLUDED//header gard
#define FILE_MAKE_H_INCLUDED
/*include section*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include"encrypt.h"
#include"decrypt.h"

/**
*function name : open_file
*description:open the file  to read  or  write  it
*arguments: function pointer to file
*return: void
**/
void open_file (FILE *file);
/**
*function name : get_key_length
*description:return the length of the key
*arguments: void
*return: integer the length
**/
int get_key_length (void);
/**
*function name : get_key
*description:sore  key in array from user
*arguments: void
*return: void
**/
void get_key (void);
/**
*function name : get_filename
*description:take name  of  file from user
*arguments: void
*return: void
**/
void get_filename (void);
/**
*function name : save_file
*description:save file after  using it
*arguments: pointer to file
*return: void
**/
void save_file (FILE *file);
/**
*function name : take_choise_from_user
*description:take choice  from user  and  call the  corresponding function
*arguments: /void
*return:void
**/
void take_choise_from_user();
#endif // FILE_MAKE_H_INCLUDED
