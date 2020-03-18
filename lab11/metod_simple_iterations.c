#define i 3
#define j 3
#include <stdio.h>
#include <math.h>

    float matrix[i][j] = {{2.5,-3.12,-4.03},
                           {0.61,0.71,-0.05},
                            {-1.03,-2.05,0.87}};
    float freeMatrix[i][1] = {{-7,5},
                              {0.44},
                              {-1,16}};
    float matrixIterative[i][j] = {{},{},{}};

 void iterativeTransition(void){
     int k,l;
     for(k=i;k<i;k++){
         for(l=j;l<j;l++){
              matrixIterative[k][l] = ((-matrix[k][l])/matrix[k][k]);
         }
     }
 }
 void convergence(void){
     int k,l;
     float sum,rootFromSum;
     for(k=i;k<i;k++){
         for(l=j;l<j;l++){
             sum += matrixIterative[k][l];
         }
     }
    rootFromSum = sqrt(sum);
    if(rootFromSum<1){
        printf("Successful");}
    else{ 
        printf("Root From Sum !< 1");
 }
 }
 void printMatrix(void){
    int k,l;
     for(k=i;k<i;k++){
         for(l=j;l<j;l++){
              printf("%8.4f",matrixIterative[k][l]);
         }
         printf("\n");
     }
 }
 int main (){
     
     iterativeTransition();
     printMatrix();




    return 0;
}
