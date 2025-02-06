#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};

struct time elapsed_time(struct time time1, struct time time2);

int main(void)
{
    struct time time1 = {10, 20, 3};
    struct time time2 = {7, 20, 5};

    struct time elapsed = elapsed_time(time2, time1);

    printf("The time diff between time2 and time1 is: %d hours %d minutes %d seconds.\n", elapsed.hour, elapsed.minute, elapsed.second);

    return 0;
}

struct time elapsed_time(struct time time1, struct time time2)
{
    struct time elapsed;

    elapsed.second = time2.second - time1.second;
    if (elapsed.second < 0){
        elapsed.second += 60;
        time2.minute--;
    }

    elapsed.minute = time2.minute - time1.minute;
    if (elapsed.minute < 0){
        elapsed.minute += 60;
        time2.hour--;
    }

    elapsed.hour = time2.hour - time1.hour;

    return elapsed;
}