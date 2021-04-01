#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
   char c, prev;
   long n_chars = 0;
   int n_lines = 0, n_words = 0, p_lines = 0;
   bool inword = false;

   printf("Enter text to be analyzed ( | to termivate):\n");

   while ((c = getchar()) != STOP)
   {
      n_chars++; //统计字符
      if ( c == '\n')
      {
         n_lines++; //统计行
      }
      //每个单词开头将inword设置为TRUE，当遇到空白字符且inword为TRUE，将inword设为FALSE
      if (!isspace(c) && !inword)
      {
         inword = true;
         n_words++;
      }
      if (isspace(c) && inword)
      {
         inword = false;
      }
      prev = c;
   }
   if (prev != '\n')
   {
      p_lines = 1;
   }

   printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
   printf("partial lines = %d\n", p_lines);

   return 0;
}
 