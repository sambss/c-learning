/* Author solution: http://knking.com/books/c2/answers/c9.html */

#include <stdio.h>

int day_of_year(int year, int month, int day)
{
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day_count = 0, i;

  for (i = 1; i < month; i++)
    day_count += num_days[i-1];

  /* adjust for leap years, assuming they are divisible by 4 */
  if (year % 4 == 0 && month > 2)
    day_count++;

  return day_count + day;
}

int main(void)
{
    int year, month, day, days_calc;

    printf("Enter year month and day: ");
    scanf("%i%i%i", &year, &month, &day);

    days_calc = day_of_year(year, month, day);

    printf("Result: %i\n", days_calc);
    
    return 0;
}