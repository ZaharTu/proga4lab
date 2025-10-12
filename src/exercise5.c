#include<stdio.h>
int main(int argc, char** argv){
    double a[10][3];
    double b[3][10];
    double c[10][10];
    for(int i = 0; i <10; i++){
        for(int j = 0; j<3 ; j++){
            a[i][j]=i+1;
            printf("%g ", a[i][j]);
        }

    }
    printf("\n\n");
    for(int i = 0; i <3; i++){
        for(int j = 0; j<10 ; j++){
            b[i][j]=j+1;
            printf("%g ", b[i][j]);
        }
    }
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10 ; j++){
            c[i][j]=0;
            for(int k=0; k<3; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%g ", c[i][j]);
        }
    }
}
