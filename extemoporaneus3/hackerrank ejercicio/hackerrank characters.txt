//include section

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//main implementation 

int main() 
{

//variable declaration

int MAX_LEN=256;
char ch;
char s[MAX_LEN];
char sen[MAX_LEN];

//input values from the user

  scanf(" %c \n",&ch);
  scanf("%s \n",s);  
  scanf("%[^\n]%*c",sen);

//printing variable values

    printf("%c \n",ch);
    printf("%s \n",s);
    printf("%s \n",sen);

return 0;
}