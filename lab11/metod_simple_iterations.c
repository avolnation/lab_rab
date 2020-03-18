#define i 3
#define j 4
#include <stdio.h>
#include <math.h>

    float matrix[i][j] = {{2.5,-3.12,-4.03,-7.5},
                           {0.61,0.71,-0.05,0.44},
                            {-1.03,-2.05,0.87,-1.16}};


void printMatrix(void){
    int k,l;
     for(k=0;k<i;k++){
         for(l=0;l<j;l++){
              printf("%f ",matrix[k][l]);
         }
         printf("\n");
     }
 }
 void iterativeTransition(void){
     int k,l;
     for(k=0;k<i;k++){
         for(l=0;l<j;l++){
              matrix[k][l] = ((-matrix[k][l])/matrix[k][k]);
         }
     }
     printMatrix();
 }
 void convergence(void){
     int k,l;
     float sum,rootFromSum;
     for(k=0;k<i;k++){
         for(l=0;l<j-1;l++){
             sum += matrix[k][l];
         }
     }
    rootFromSum = sqrt(sum);
    if(rootFromSum<1){
        printf("Successful");}
    else{ 
        printf("Root From Sum !< 1");
 }
 }
 int main (){
     iterativeTransition();
     return 0;
}
