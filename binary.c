//十进制联想 eg：628 % 10 = 8，因此8为最后一位，而628 / 10 = 62，62 % 10 = 2,2为第二位，以此类推； 
#include <stdio.h>

void to_binary(unsigned long n)
{
    int temp;

    temp = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(temp == 0 ? '0' : '1');
}

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent:");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):");
    }
    printf("Done.\n");
    
    return 0;
}
