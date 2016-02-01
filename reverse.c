#include <stdio.h>
#include <conio.h>

int string_length(char*);
char reverse_string(char* str,int length);

main()
{
    char string[10];
    printf("Enter a string\n");
    gets(string);
    int length=string_length(string);
    if(length<=0)
        {
        printf("Not enough characters\n");
        }
    else
    if(length>10)
        {   
        printf("Too many characters\n");
        }
    else
        {
        reverse_string(string, length);
        printf("REverse of entered string is %s \n", string);
        return 0;
        }
    }
    char reverse_string(char* str,int length)
    {
    int c;
    char *i, *j, temp;
    i=str;
    j=str;
    for(c=0; c<=length - 2; c++)
    j++;
    for(c=0; c<length/2; c++)
        {
        temp = *j;
        *j = *i;
        *i=temp;
        i++;
        j--;
        } 
    }
    int string_length(char *pointer)
    {
    int c = 0;
    while( *(pointer + c) != '\0' )
    c++;
    return c;
    } 
