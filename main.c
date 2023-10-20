
/*file include*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "encrypt.h"
#include "decrypt.h"
#include "file_make.h"
#include"loadingbar.h"
/*main function*/

int main()
{
    system("color  01 ");//change the terminal color
    print_upper_shape();//draw upper shape
    run_progress_bar();//run the progress bar from 0 to100
    print_lower_shape();//draw lower shape
    system("color  03 ");//change the terminal color
    take_choise_from_user();//print available choices to user and  wait for  user input
    return 0;
}

