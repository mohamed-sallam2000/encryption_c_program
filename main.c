#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


#include "encrypt.h"
#include "decrypt.h"
#include "file_make.h"
#include"loadingbar.h"


int main()
{   system("color  01 ");

print_upper_shape();

 run_progress_bar();
print_lower_shape();

system("color  03 ");


            take_choise_from_user();






    return 0;
}

