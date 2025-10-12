#include<stdlib.h>
#include<stdio.h>
int main(int argc, char** argv){
    if(argc!=2){
        return 1;
    }
    double array[10];
    int k = atoi(argv[1]);
    for(int i = 0 ; i<10 ; i++ ){
        scanf("%lf",&array[i]);
    }
    for(int i = 0 ; i<10 ; i++){
        if(i!=9){
            printf("%g ", array[(i-k+10)%10]);
        }
        else{
            printf("%g\n", array[(i-k+10)%10]);
        }
    }
    return 0;
}
