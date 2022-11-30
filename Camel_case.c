/*===============================================
 * probem solving string challenge 
 *           Camel case 
 * string challenge (str) take the str prametar being pass and return 
 * it in proper camel case format where the first letter of each word 
 * is capitalized (excluding the first letter) 
 * the string will only contain letter and some 
 * compination of delimiter punctuation characters separeating each word 
  */
#include <stdio.h>
#include <string.h>
void stringchallenge(char * str)
{
  char *ptr = str;
  char *ptr2 = str; 
  char  *temp = NULL;
   while (*ptr != '\0')
   {
      if (*ptr >= 65 && *ptr <=  90)
      {
        *ptr += 32;
         ptr++;
         ptr2++;
      }
      else if (*ptr >= 32 && *ptr <= 64)
      {
        temp = ptr;
        ptr2++;
        while(*ptr != '\0') 
        {
          *ptr = *ptr2;
           ptr++;
           ptr2++;
        }
        ptr = temp;
        ptr2 = temp;
        if(*ptr >= 97 && *ptr <= 122)
        {
          *ptr -= 32;
        }   
         ptr++;
         ptr2++;
      } 
      else
      {
        ptr++; ptr++;
        ptr2++;
      }
   }
  
  printf("%s\n", str);
}
int main()
{
  char x[] = "BOB loves-coding"; 
  char y[] = "cats AND-Dogs-are Awesome";
  stringchallenge(x);
  stringchallenge(y);

}

