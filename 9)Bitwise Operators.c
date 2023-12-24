#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int and, max1, or, max2, xor, max3;
    max1=max2=max3=0;
    for (int i = 1; i < n; i++){
       for (int j = i+1; j <=n; j++){

        and=i&j;
        if (and>max1 && and<k){
            max1=and;
        }
        or=i|j;
        if (or>max2 && or<k){
            max2=or;
        }
        xor=i^j;
        if (xor>max3 && xor<k){
            max3=xor;
        }
       }  
    }
    printf("%d\n",max1);
    printf("%d\n",max2);
    printf("%d\n",max3);
}
int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
