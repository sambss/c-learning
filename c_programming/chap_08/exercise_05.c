#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct date_time
{
    struct date date_dt;
    struct time time_t;
};

const int num_days_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

struct date update_date(struct date date_dt);
struct date_time date_time_update (struct date_time dt);

int main(void)
{
    struct date_time datetime_1 = {{2025, 2, 8}, {11, 34, 23}};
    struct date_time datetime_2 = {{2023, 12, 31}, {23, 59, 59}};

    datetime_1 = date_time_update(datetime_1);
    datetime_2 = date_time_update(datetime_2);

    printf("Datetime 1 update: %.2d-%.2d-%.2dT%.2d:%.2d:%.2d\n", 
        datetime_1.date_dt.year, datetime_1.date_dt.month, datetime_1.date_dt.day, 
        datetime_1.time_t.hour, datetime_1.time_t.minutes, datetime_1.time_t.seconds);

    printf("Datetime 2 update: %.2d-%.2d-%.2dT%.2d:%.2d:%.2d\n", 
        datetime_2.date_dt.year, datetime_2.date_dt.month, datetime_2.date_dt.day, 
        datetime_2.time_t.hour, datetime_2.time_t.minutes, datetime_2.time_t.seconds);


    return 0;
}


struct date update_date(struct date date_dt)
{
    ++date_dt.day;

    if (date_dt.day > num_days_month[date_dt.month - 1]){
        date_dt.day = 1;
        date_dt.month++;

        if (date_dt.month > 12){
            date_dt.month = 1;
            date_dt.year++;
        }
    }

    return date_dt;
}

struct date_time date_time_update (struct date_time dt)
{
    ++dt.time_t.seconds;

    if ( dt.time_t.seconds == 60 ) {
        dt.time_t.seconds = 0;
        ++dt.time_t.minutes;

        if ( dt.time_t.minutes == 60 ) {
            dt.time_t.minutes = 0;
            ++dt.time_t.hour;

            if ( dt.time_t.hour == 24 )
                dt.time_t.hour = 0;
                dt.date_dt = update_date(dt.date_dt);
        }
    }

    return dt;
};