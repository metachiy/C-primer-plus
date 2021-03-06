//输入验证
#include <stdio.h>
#include <stdbool.h>

//验证输入为整数
long get_long(void);

//验证输入范围有效
bool bad_limits(long begin, long end, long low, long high);

//计算平方和
double sum_squares(long a, long b);

int main(void)
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start, stop;
    double answer;

    printf("this program computes the sum of the squares of "
    "integers in a range.\nThe lower bound should not "
    "be less than -10000000 and the upper bound should not "
    "be more than +10000000.\nEnter the limits(enter 0 for both "
    "limits to quit):\nlower limit: ");

    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers "
            "from %ld to %ld is %g\n", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both limits to quit):\n");
        printf("lower limit: ");
        start = get_long();
        printf("upper limit: ");
        stop = get_long();
    }
    printf("Done.\n");

    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar() != '\n'))
            putchar(ch);
        printf(" is not an integer.\nPlease enter an "
        "integer value, such as 25, -178, or 3: \n");
    }
    return input;
}

double sum_squares(long a, long b)
{
    double total = 0;

    for (long i = a; i <= b; i++)
        total += i * i;
    
    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end)
    {
        printf("%ld is not smaller than %ld.\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low)
    {
        printf("Values must be %ld or greater.\n", low);
        not_good = true;
    }
        if (begin > high || end > high)
    {
        printf("Values must be %ld or lower.\n", high);
        not_good = true;
    }

    return not_good;
}

