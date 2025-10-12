#include<stdlib.h>
#include<stdio.h>
int main(int argc, char** argv){
    if(argc!=3){
        return 1;
    }
    double array[10];
    double x = atof(argv[1]);
    int k = atoi(argv[2]);
    double last1;
    double last2;
    for(int i = 0 ; i<10 ; i++ ){
        scanf("%lf",&array[i]);
    }
    for(int i = 0 ; i<10 ; i++){
        if(i==k){
            last1=array[i];
            array[i]=x;
        }else if(i>k){
            last2=array[i];
            array[i]=last1;
            last1=last2;
        }
        if(i<9){
            printf("%g ", array[i]);
        }
        else{
            printf("%g\n", array[i]);
        }
    }
    return 0;
}
