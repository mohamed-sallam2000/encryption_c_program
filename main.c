#include <stdio.h>
#include <stdlib.h>
#define KEY 65//A in ascii = 65
void encrypt_CBC_from_file();
void encrypt_CBC_from_text(char *);

void store_data_to_file(char * data,FILE * file);

void encrypt_ECB_from_file(FILE * file_input,FILE * file_output);
void encrypt_ECB_from_text(char *  );


void decrypt_CBC_from_file(FILE * file_input,FILE * file_output);
void decrypt_CBC_from_text();

void read_data_from_file(char * data,FILE * file);

void decrypt_ECB_from_file(FILE * file_input,FILE * file_output);
void decrypt_ECB_from_text(char * data_input,char * data_output );

void take_choise_from_user();

void take_algorithm_type_from_user(int * choise_p);
void ask_for_save_result();
int main()
{
    int iterator=3;
    char * pass="123456";
    printf("****************************************************************************************\n");
    printf("*****************************encryption program ****************************************\n");
    while (iterator--)
    {
        printf("**enter password to contiune\n");
        char inputpass[7];

        scanf(" %7[^\n]", inputpass);
        // printf("%s",inputpass);
        if(!strcmp((char *)inputpass,pass))
        {
            printf("**password is correct\n");

            take_choise_from_user();

        }




        else
        {

            printf("**pass word is wrong you still have  %d tries\n",iterator);

        }
    }
    printf("**program will close!!\n");
    return 0;
}


void take_choise_from_user()
{

    int choice=0;
    int algorithm_type=0;
    printf("**choose one of the following \n**1-encrypt masseage\n**2-encrypt file\n**3-decrypt masseage\n**4-decrypt file\n**5-close the program\n");
    scanf(" %d", &choice);
    switch(choice)
    {
    case 1:
        take_algorithm_type_from_user(&algorithm_type);
        switch(algorithm_type)
        {
        case 1:

   encrypt_CBC_from_text("AB");

            break;
        case 2:
             encrypt_ECB_from_text("AB");
            break;
        case 3:
            take_choise_from_user();
            break;
        default:

            take_choise_from_user();

            break;



        }
        break;
    case 2:
        take_algorithm_type_from_user(&algorithm_type);
        switch(algorithm_type)
        {
        case 1:
//   encrypt_CBC_from_file();
            break;
        case 2:
            //  encrypt_ECB_from_file();
            break;
        case 3:
            take_choise_from_user();
            break;
        default:

            take_choise_from_user();

            break;



        }
        break;


    case 3:
        take_algorithm_type_from_user(&algorithm_type);
        switch(algorithm_type)
        {
        case 1:
//   decrypt_CBC_from_text();
            break;
        case 2:
            //  decrypt_ECB_from_text();
            break;
        case 3:
            take_choise_from_user();
            break;
        default:

            take_choise_from_user();

            break;



        }
        break;
    case 4:
        take_algorithm_type_from_user(&algorithm_type);
        switch(algorithm_type)
        {
        case 1:
//   decrypt_CBC_from_file();
            break;
        case 2:
            //  decrypt_ECB_from_file();
            break;
        case 3:
            take_choise_from_user();
            break;
        default:

            break;



        }
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("**wrong choice try again ");
        take_choise_from_user();
        break;


    }
}
void take_algorithm_type_from_user(int * choise_p)
{
    int res=0;
     system("cls");
    printf("**choose one of the following algorithms  \n**1-CBC algorithm\n**2-ECB algorithm\n**3-return to main  options\n");
    scanf("%d",&res);
    if (res==1||res==2||res==3)
    {
        *choise_p=res;
    }
    else
    {
        printf("**wrong choice please try again\n");
        take_algorithm_type_from_user( choise_p);
    }

}
void encrypt_CBC_from_text(char * input){
char res[10];
int i =0;
for(i=0;i<strlen(input);i++)
{
    if (i==0){
    res[i]=input[i]^KEY;
    printf("%d\n",res[i]);
    continue;
    }
    else{

      res[i]=input[i]^res[i-1];
printf("%d\n",res[i]);
    }
}
}

void encrypt_ECB_from_text(char * data_input ){

char res[10];
int i =0;
for(i=0;i<strlen(data_input);i++)
{

    res[i]=data_input[i]^KEY;
    printf("%d\n",res[i]);

    }
}

void decrypt_CBC_from_text( ){



}
void ask_for_save_result();
