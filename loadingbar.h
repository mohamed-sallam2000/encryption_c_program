#ifndef LOADINGBAR_H_INCLUDED
#define LOADINGBAR_H_INCLUDED
/*include part*/
#include <windows.h> // For Sleep function (Windows)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
*function name : print_upper_shape
*description:print upper shape
*arguments: void
*return: void
**/
void print_upper_shape();

/**
*@breif sleep for  milli seconds
*function name : sleep_ms
*arguments: int number of  milliseconds
*return: void
**/
 void sleep_ms(int milliseconds) ;


/**
*@breif activate the progress bar
*function name : run_progress_bar
*@parm : void
*return: void
**/
void run_progress_bar();

/**
*@breif print upper shape
*function name : print_lower_shape
*@parm : void
*return: void
**/
void print_lower_shape();
#endif // LOADINGBAR_H_INCLUDED
