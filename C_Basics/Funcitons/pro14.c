/*Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid*/

#include <stdio.h>

int is_valid_date(int year, int month, int day) 
{
    if(year<1||month<1||month>12||day<1)
    {
        return 0;
    }
    int days_in_month;
    switch (month) 
    {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days_in_month = 29;
            else
                days_in_month = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days_in_month = 30;
            break;
        default:
            days_in_month = 31;
            break;
    }
    if (day > days_in_month)
        return 0;
    return 1;
}
int main() {
    int year, month, day;
    printf("Enter a date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &year, &month, &day);
    int valid = is_valid_date(year, month, day);
    if (valid)
        printf("The date is valid.\n");
    else
        printf("The date is invalid.\n");
    return 0;
}

