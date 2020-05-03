//include section

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//main implementation

int main(){

//variable declaration

float fl1,fl2;
int in1,in2;

//input values form the user

scanf("%d %d\n", &in1 ,&in2);
scanf("%f %f\n", &fl1 ,&fl2);

//printing  variable values

printf("%d %d\n",in1+in2,in1-in2);
printf("%2.1f %2.1f\n",fl1+fl2,fl1-fl2);

return 0;
}