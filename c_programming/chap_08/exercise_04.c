#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

const char *week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int f_date(int year, int month);
int g_date(int month);
float calculate_num_days(struct date date_x);

int main(void)
{
    struct date N1 = {2025, 2, 2};

    int ndays_1;
    int weekday;

    ndays_1 = calculate_num_days(N1);
    weekday = (ndays_1 - 621049)%7;

    printf("Weekday of %d-%.2d-%.2d is %s\n", N1.year, N1.month, N1.day, week[weekday]);
    
    
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