#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int main() {
    int day, month, year;
    int totalDays = 0;

    // Reference date: 1 Jan 1970 (Thursday)
    char *days[] = {
        "Thursday", "Friday", "Saturday",
        "Sunday", "Monday", "Tuesday", "Wednesday"
    };

    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Count days for years
    for (int y = 1970; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    // Count days for months
    for (int m = 1; m < month; m++) {
        if (m == 2 && isLeapYear(year))
            totalDays += 29;
        else
            totalDays += monthDays[m - 1];
    }

    // Add days of current month
    totalDays += (day - 1);

    // Find day of week
    int dayIndex = totalDays % 7;

    printf("Day of the week: %s\n", days[dayIndex]);

    return 0;
}
