//include section
#include <stdio.h>

//procedures declaration

int max_of_four(int a, int b, int c, int d)
{

//if, to  know  the  max number 

  if (a>b){
  b=a;
  }

    if (b>c){
    c=b;
    }

      if (c>d){
      d=c;
      }

  return d;
}
//main implementation

int main() {

//variable declaration

	int a, b, c, d;

//input values from the user

	scanf("%d %d %d %d", &a, &b, &c, &d);

//variable declaration and inicialization

	int ans = max_of_four(a, b, c, d);

//printing the max value

	printf("%d", ans);
    
    return 0;
}