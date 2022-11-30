#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void StringChallenge(char * str) {
  
  // code goes here
  //int x = 0;  
  for (int x = 0; x < strlen(str); x++)
	{
		if (x == 0)
		{
			str[x] = str[x] + 32;

		}

		if (str[x] >= 32 && str[x] <= 47)
		{
			str = str[x] - 32;
			x--;

		}
		else
		{
			str[x] = str[x] + 32;

		}
	}
  printf("%s", str);

}

int main(void) { 
   
  // keep this function call here
  StringChallenge("cats AND*Dogs-are Awesome");
  return 0;
    
}























/*
bool solution(const char *string, const char *ending);

int main()
{
    
    if(solution("ails", "fails"))  printf("true\n");
    else printf("false\n");
}

bool solution(const char *string, const char *ending)
{
    int x = 0, y = 0;
    while(ending[x] != '\0')
    {
        x++;
    }
    if(x == 0) return true;
    while (string[y] != 0)
    {
        y++;
    }
    if(y == 0) return false;
    if(y >= x)
    {
        y =y - x;
        x =0;
        while(string[y] != '\0')
        {
            if (string[y] != ending[x])  return false;
            y++;
            x++;
        }
    }
    else{
        y = x-y;
        x = 0;
        while (ending[x] != '\0')
        {
            if(ending[x] != string[x]) return false;
          //  y++;
            x++;
        }
        
    }
    
    return true;
}    
*/

