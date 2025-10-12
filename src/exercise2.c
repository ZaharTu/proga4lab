#include<stdio.h>
int main(int argc, char** argv){
    double array[10];
    for(int i = 0 ; i<10 ; i++ ){
        scanf("%lf",&array[i]);
    }
    for(int i = 9 ; i>=0; i --){
        if(i!=0){
            printf("%g ", array[i]);
        }
        else{
            printf("%g\n", array[i]);
        }
    }
}
