//include section
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//procedures declaration
void swcf(int a, int b){
  //variable declaration
  int i;
//for loop

  for(i=a;i<=b;i++){
    switch(i){

    case(1):printf("one\n");
    break;

    case(2):printf("two\n");
    break;

    case(3):printf("three\n");
    break;

    case(4):printf("four\n");
    break;

    case(5):printf("five\n");
    break;

    case(6):printf("six\n");
    break;

    case(7):printf("seven\n");
    break;

    case(8):printf("eigth\n");
    break;

    case(9):printf("nine\n");
    break;

    default: if(i%2==0){
      printf("even\n");
    }

      else{
        printf("odd\n");
      }
    
    }
  }
}
//main implementation
int main() 
{
//variable declaration
    int a, b;
//input values from the user
    scanf("%d\n%d", &a, &b);
// call to the function swcf 
  	swcf(a,b);
    return 0;
}

