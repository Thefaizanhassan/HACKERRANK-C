#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  int n, sum;
    sum=0;
    scanf("%d",&n);
    int list[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&list[i]);
        sum=sum+list[i];
    }
    printf("%d\n",sum);
  
    return 0;
}