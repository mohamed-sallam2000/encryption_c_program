#include"file_make.h"
 FILE *original_file;
 char * pass="123456";
 char filename[256];  // Maximum file name length of 255 characters
 char key[256];  // Maximum key length of 255 characters
int key_length;
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
}

int get_key_length (void)
{
    return strlen(key);
}

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


void take_choise_from_user()
{

    int choice=0;
    int algorithm_type=0;
    printf("**choose one of the following \n**1-encrypt file\n**2-decrypt file\n**3-change password\n**4-close the program\n");
    scanf(" %d", &choice);
    switch(choice)
    {
    case 1:
        printf("Enter the file name: ");
        get_filename();
        printf("Enter key: ");
        get_key();
        open_file(original_file);

        encrypt_file(original_file);

        printf("file is encrypted successfully \n");
        take_choise_from_user();
        break;
    case 2:
        printf("Enter the file name: ");
        get_filename();
        printf("Enter key: ");
        get_key();
        open_file(original_file);
        decrypt_file(original_file);
        printf("file is  decrypted successfully \n");
        take_choise_from_user();

        break;
        case 3:
             printf("**enter new password \n");


        scanf(" %7[^\n]", pass);



    case 4:
        exit(0);
        break;
    default:
        printf("**wrong choice try again ");
        take_choise_from_user();
        break;


    }
}


void save_file (FILE *file)
{
    fclose(file);
}
