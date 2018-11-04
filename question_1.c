
#include <stdio.h>
#define SEC_DAY 86400
#define SEC_HOUR 3600
#define SEC_MINUTE 60

int main()
{
    int input=0;
    
    puts("enter number of seconds\n");
    
    scanf("%d" , &input);
    
    int day = input / SEC_DAY;
    input = input - (day*SEC_DAY);
    
    int hour = input / SEC_HOUR;
    input = input - (hour*SEC_HOUR);
    
    int minute = input/SEC_MINUTE;  
    input = input - (minute*SEC_MINUTE);
    
    int second = input;
    
    printf("day--> %d, hour--> %d  , minute--> %d  , second--> %d", day, hour, minute, second);


    return 0;
}