#include <stdio.h>
#include "hotel.h"

int menu(void)
{
   int code, status;

   printf("\n%s%s\n", STARS, STARS);
   printf("Please enter the number of the desired hotel:\n");
   printf("1) Fairfield Arms        2)Hotel Olympic\n");
   printf("3) Chertworthy Plaza     4)The Stockton\n");
   printf("5) Quit\n");
   printf("%s%s\n", STARS, STARS);

   while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
   {
      if (status != 1)
         scanf("%*s"); //跳转至下一个空白字符
      printf("Enter an integer from 1 to 5, please.\n");
   }
   
   return code;
}

int getnights(void)
{
   int nights;

   printf("How many nights are needed?\n");

   while (scanf("%d", &nights) != 1)
   {
      scanf("%*s"); //跳转至下一个空白字符
      printf("Enter an integer please.\n");
   }

   return nights;
}

void showprice(double rate, int nights)
{
   double total = 0.0, factor = 1.0;

   for (int i = 1; i <= nights; i++, factor *= DISCOUNT)
      total += rate * factor;
   printf("The total cost will be $%0.2f.\n", total);
}