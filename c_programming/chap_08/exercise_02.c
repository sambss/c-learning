#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int f_date(int year, int month);
int g_date(int month);
float calculate_num_days(struct date date_x);

int main(void)
{
    struct date N1 = {2004, 8, 8};
    struct date N2 = {2005, 2, 22};

    float ndays_1, ndays_2;
    int result;

    ndays_1 = calculate_num_days(N1);
    ndays_2 = calculate_num_days(N2);

    result = ndays_2 - ndays_1;

    printf("There is %d days between the two dates.\n", result);
    
    
    return 0;
}

int f_date(int year, int month)
{
    if(month <= 2){
        --year;
    }

    return year;
}

int g_date(int month)
{
    if(month <= 2){
        month += 13;
    }
    else {
        ++month;
    }

    return month;
}

float calculate_num_days(struct date date_x)
{
    float N;

    N = (1461 * f_date(date_x.year, date_x.month))/4;
    N += (153 * g_date(date_x.month))/5;
    N += date_x.day;

    return N;
}