#include <stdio.h>
#include <stdlib.h>

void get_month(int m)
{
    switch(m){
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
    }
}
int get_start_day(int y)
{
    int t;
    t = 365 * y + y / 4 - y / 100 + y / 400;
    return t % 7;
}
void printline1()
{
    printf(" S \tM \tT \tW \tT \tF \tS\n");
}
int mday(int i, int y)
{
    switch (i)
    {
    case 2:
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            return 29;
        return 28;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    }
}

int main()
{
    int y = 0, startDay = 0;
    printf("Enter the year : ");
    scanf("%d", &y);
    startDay = get_start_day(y);

    for (int i = 1; i <= 12; i++)
    {
        printf("\n");
        get_month(i);
        printf("\n");
        printline1();
        int k = 0;
        for (k = 0; k < startDay; k++)
            printf("  \t");

        for (int j = 1; j <= mday(i, y); j++)
        {
            printf("%2d\t", j);

            if (++k > 6)
            {
                k = 0;
                printf("\n");
            }
        }

        printf("\n");

        startDay = k;
    }
    return 0;
}
