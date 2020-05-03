//include section
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//main implementation
int main() {
    //variable declaration
    int n, sum=0;
    scanf("%d", &n);
    while(0<n){
    sum=sum+n%10;
    n=n/10;
    }
//printing resoult
    printf("%d",sum);
    return 0;
}