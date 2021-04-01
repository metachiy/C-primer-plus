# include <stdio.h>

int main(void)
{
    int val = 5;
    printf("Please enter the floor:");
    while (1)
    {
        //scanf("%d", &val);
        switch (val)
        {
        case 1:
            printf("1 floor arrived!\n");
            break;  //跳出switch
        case 2:
            printf("2 floor arrived!\n");
            break;  //跳出switch
        case 3:
            printf("3 floor arrived!\n");
            break;  //跳出switch
        default:
            printf("the floor is not exist, please re-enter:");
            continue;  //结束本次while循环
        }
        break;  //跳出while
    }
    return 0;
}

