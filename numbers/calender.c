#include <stdio.h>

int main() {
    int year, days = 0, i;
    char *week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Enter a year: ");
    scanf("%d", &year);

    // Count days from year 1 to year-1
    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366;   // Leap year
        else
            days += 365;   // Normal year
    }

    // Find day index
    int dayIndex = days % 7;

    printf("1st January %d is %s\n", year, week[dayIndex]);

    return 0;
}
