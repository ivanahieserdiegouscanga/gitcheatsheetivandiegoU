//include section
#include <stdio.h>

//string operation

void var(int *a, int *b){
  int c = *a;
    *a = *a+*b;
    *b = c-*b;
    if(*b < 0)
      {*b *= -1;}
}

//main implementation

int main() {

//variable declaration

  int a, b;
  int *sa = &a, *sb = &b;

//input values from the user

  scanf("%d %d", &a, &b);
  var(sa, sb);

//printing resoult of the operations

  printf("%d\n%d", a, b);
  return 0;
}