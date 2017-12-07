#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    float n, prob;
    int i, conta =0;
    printf("entre com uma probabilidade: ");
    scanf("%f", &prob);
    for(i=0;i<100;i++){
        n=rand()/(float)RAND_MAX;
        if(n<prob)
            conta++;
    printf("%f\n",n);
    }
    printf("são %d vezes.", conta);

return 0;
}