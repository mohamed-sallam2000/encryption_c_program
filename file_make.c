#include"file_make.h"
 FILE *original_file;
 char filename[256];  // Maximum file name length of 255 characters
 char key[256];  // Maximum key length of 255 characters
int key_length;


/**
*function name : open_file
*description:open the file  to read  or  write  it
*arguments: function pointer to file
*return: void
**/
void open_file (FILE *file)
{
    if (access(filename, F_OK) != -1)  // Return -1 in case of it  exist
    {

        file = fopen(filename, "r");  // Open the user-specified file

        if (file == NULL)
        {
            perror("Error opening the file");
        }
    }

    else{

        printf("cant find the file \n");
                    take_choise_from_user();


    }
}
/**
*function name : get_key_length
*description:return the length of the key
*arguments: void
*return: integer the length
**/
int get_key_length (void)
{
    return strlen(key);
}
/**
*function name : get_key
*description:sore  key in array from user
*arguments: void
*return: void
**/
void get_key (void)
{
    if (scanf("%255s", key) != 1)
    {
        printf("Invalid input.\n");
    }
    else
    {
        key_length=get_key_length();
    }
}

/**
*function name : get_filename
*description:take name  of  file from user
*arguments: void
*return: void
**/
void get_filename (void)
{
    if (scanf("%255s", filename) != 1)
    {
        printf("Invalid input.\n");
    }
    else
        {
        }
}

/**
*function name : take_choise_from_user
*description:take choice  from user  and  call the  corresponding function
*arguments: /void
*return:void
**/
void take_choise_from_user()
{

    int choice=0;

    //printf("\t\t\t**choose one of the following**\t\t\t\t      **\n**1-encrypt file\t\t\t\t\t\t\t\t      **\n**2-decrypt file\t\t\t\t\t\t\t\t      **\n**3-close the program \t\t\t\t\t\t\t\t      **\n");
     //   printf("****************************************************************************************\n");
    printf("+===========================================================================================+\n")   ;
    printf("|                                    encryption program                                     |\n")   ;
    printf("+===========================================================================================+\n")   ;
    printf("| 1 | Encrypt File                                                                          |\n")   ;
    printf("|---|---------------------------------------------------------------------------------------|\n")   ;
    printf("| 2 | Decrypt File                                                                          |\n")   ;
    printf("|---|---------------------------------------------------------------------------------------|\n")   ;
    printf("| 0 | Exit                                                                                  |\n")   ;
    printf("+===========================================================================================+\n")   ;
    scanf(" %d", &choice);
    switch(choice)
    {
    case 1:
        printf("**Enter the file name: \t\t\t\n");
        get_filename();
        printf("**Enter key: \t\t\t\n");
        get_key();
        open_file(original_file);

        encrypt_file(original_file);

        printf("**file is encrypted successfully \t\t\t\n");
        take_choise_from_user();
        break;
    case 2:
        printf("**Enter the file name: \t\t\t\n");
        get_filename();
        printf("**Enter key: \t\t\t\n");
        get_key();
        open_file(original_file);
        decrypt_file(original_file);
        printf("**file is  decrypted successfully \t\t\t\n");
        take_choise_from_user();

        break;



    case 0:
        exit(0);
        break;
    default:
        printf("**wrong choice try again ");
        take_choise_from_user();
        break;


    }
}

/**
*function name : save_file
*description:save file after  using it
*arguments: pointer to file
*return: void
**/
void save_file (FILE *file)
{
    fclose(file);
}
