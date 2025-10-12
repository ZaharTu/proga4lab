#include<stdio.h>


int main(int argc,char** argv ){
    double array[10];
    double sum=0;
    for(int i=0; i<10; i++){
        scanf("%lf",&array[i]);
    }
    for(int i=0; i<10; i++){
        sum += array[i];
    }
    printf("%.2f\n", (sum+0.005)/10);
}
