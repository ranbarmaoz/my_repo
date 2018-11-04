******************************************************************************

 cat2dog CODE

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void turn_cat_to_dog(char str[], int max);

int main()
{
    const int max=81;
    
    char str[81];
    
    printf("Enter sentence:\n");
    
    gets(str);
    
    turn_cat_to_dog(str, strlen(str));

    return 0;
}

void turn_cat_to_dog(char str[], int max)
{
    int i;
    int size = strlen(str);
    for(i=0 ; i<size-2 ; i++)  //since I want to check till the first letter of cat
    {
        if(str[i]=='c' && str[i+1]=='a' && str[i+2]=='t')
        {
            str[i]='d'; 
            str[i+1]='o'; 
            str[i+2]='g';
            i+=2;  //skip to the end of the cat, so later on the loop we'll continue the letter after t
        }
    }
    
    puts(str);
}

