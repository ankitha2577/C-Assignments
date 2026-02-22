/*string functions using do while and switch case,copy,comparision,concatination*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    
    int choice;
    do
    {
        printf("\nMenu:\n1.Copy\n2.Compare\n3.Concatenate\n4.length\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                
                printf("Enter string: ");
                scanf(" %[^\n]s", str1);
                strcpy(str2,str1);
                printf("String copied successfully. str2: %s",str2);
                break;
            case 2:
                printf("Enter first string: ");
                scanf(" %[^\n]s", str1);
                printf("Enter second string: ");
                scanf(" %[^\n]s", str2);
                if(strcmp(str1,str2)==0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]s", str1);
                printf("Enter second string: ");
                scanf(" %[^\n]s", str2);
                strcat(str1,str2);
                printf("Strings concatenated successfully. str1: %s",str1);
                break;
            case 4:
                printf("Enter firststring: ");
                scanf(" %[^\n]s", str1);
                printf("Enter second string: ");
                scanf(" %[^\n]s", str2);
                int len1=strlen(str1);
                int len2=strlen(str2);
                printf("Length of str1: %d\n",len1);
                printf("Length of str2: %d\n",len2);
                break;
                printf("Exiting...\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);
    
    return 0;
}