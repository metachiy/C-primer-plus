#include <stdio.h>
#define SIZE 4

int main(void)
{
    short daates[SIZE];
    double bills[SIZE];
    short *pti = daates;
    double *ptf = bills;

    printf("%23s %15s\n", "short", "double");
    for (int i = 0; i < SIZE; i++)
    {
        printf("pointers + %d: %10p %10p\n", i, pti + i, ptf + i);
    }
    return 0;
}

//指针+1指增加一个存储单元，即下一个元素的地址，而非下一个字节的地址
/* 
                  short          double        
pointers + 0: 000000000061FE00 000000000061FDE0
pointers + 1: 000000000061FE02 000000000061FDE8
pointers + 2: 000000000061FE04 000000000061FDF0
pointers + 3: 000000000061FE06 000000000061FDF8
 */

