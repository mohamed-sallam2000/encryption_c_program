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



    printf("********************************************************************************\n");
    printf("    ************************************************************************\n");
    printf("        ****************************************************************\n");
    printf("            ********************************************************\n");

 int total = 50; // Total number of iterations for the loading bar
    int delay_ms = 100; // Delay between each iteration in milliseconds

    for (int i = 0; i <= total; i++) {
        printf("\t    [");
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        for (int j = i; j < total; j++) {
            printf(" ");
        }
        printf("] %d%%", i*2 );
if(i*2==10){system("color  06 ");}
if(i*2==20){system("color  02 ");}
if(i*2==30){system("color  03 ");}
if(i*2==40){system("color  04 ");}
if(i*2==50){system("color  05 ");}
if(i*2==60){system("color  06 ");}
if(i*2==70){system("color  07 ");}
if(i*2==80){system("color  03 ");}
if(i*2==90){system("color  04 ");}
        fflush(stdout); // Flush the output to the console

        if (i < total) {
            printf("\r"); // Move the cursor back to the beginning of the line
            sleep_ms(delay_ms);
        }
    }
printf("\n");
    printf("            ********************************************************\n");
    printf("        ****************************************************************\n");
    printf("    ************************************************************************\n");
    printf("********************************************************************************\n");

printf("\n");


   // printf("****************************************************************************************\n");
    //printf("*****************************encryption program ****************************************\n");


system("color  03 ");


            take_choise_from_user();






    return 0;
}

