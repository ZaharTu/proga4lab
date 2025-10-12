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
    double avg=sum/10;
    if(avg >= 0){
        avg = (int)(avg*100 + 0.5001)/100.0;
    }
    else{
        avg = (int)(avg*100 - 0.5001)/100.0;
    }
    printf("%.2f\n",avg);

}
