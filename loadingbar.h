#ifndef LOADINGBAR_H_INCLUDED
#define LOADINGBAR_H_INCLUDED
#include <windows.h> // For Sleep function (Windows)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void print_upper_shape();
 void sleep_ms(int milliseconds) ;
void run_progress_bar();
void print_lower_shape();
#endif // LOADINGBAR_H_INCLUDED
