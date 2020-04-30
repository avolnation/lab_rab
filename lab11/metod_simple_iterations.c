#define i 3
#define j 4
#define e 0.001
#include <stdio.h>
#include <math.h>
 
    float matrix[i][j] = {{0.12, -0.43, 0.14, -0.17},
                          {-0.07, 0.34, 0.72, 0.62},
                          {1.18, -0.08, -0.25, 1.12}};
    float buffMatrix[i][j] = {0};
    float matrixX[i] = {0};
	float buffMatrixX[i] = {0};
	float buff=0;
	void printMatrix(void);
	
void printMatrixX(void) {
    int l;
	static num = 1;
    printf("[%d] ", num++);
    for (l = 0; l < i; ++l) {
        printf("%f ", matrixX[l]);
    }
    puts("");
}
//приведение матрицы к виду в котором все диагональные элементы максимальные в строке
void MaximumInRow(){
     int k,l;
    for(k=0;k<j;k++){
        buffMatrix[0][k] = matrix[2][k];
        buffMatrix[1][k] = matrix[0][k];
        buffMatrix[2][k] = matrix[1][k];       
    }
    printMatrix();
       /*for(k=0;k<i;k++){
           for(l=0;l<j;l++){
        printf("%5.2f ",buffMatrix[k][l]);
        }
printf("\n");
    }*/
       
       
}
//вывод матрицы
void printMatrix(void){
    int k,l;
     for(k=0;k<i;k++){
         for(l=0;l<j;l++){
              printf("%5.4f ",buffMatrix[k][l]);
         }
         printf("\n");
     }
 }
 //переход к итерационному виду
 void iterativeTransition(void){
     int k,l;
     for(k=0;k<i;k++){
        buff = buffMatrix[k][k];
        buffMatrix[k][3] = buffMatrix[k][3] / buff;
        //printf("%f",buff);
         for(l=0;l<i;l++){	 
		  buffMatrix[k][l] = ((-buffMatrix[k][l])/buff);
        }
        buffMatrix[k][k] = 0;
    }
    printMatrix();
 }
//проверка условия сходимости
void convergence(void){
    int k,l;
    float sum,rootFromSum;
    sum = 0;
    rootFromSum = 0;
    for(k=0;k<i;k++){
        for(l=0;l<i;l++){
            sum += pow(buffMatrix[k][l],2);
        }
    }
    rootFromSum = sqrt(sum);
    	puts("");
    printf("%f\n",sum);
    	puts("");
    printf("%f\n",rootFromSum);
    /*if(rootFromSum<1){
        printf("Successful");}
    else{
        printf("Root From Sum !< 1");
    }
 */
}
//метод простых итераций
 void iterativeX(void){
 	int k,l,m,n;
 	int counter;
	for(k=0;k<i;k++){
 		buffMatrixX[k] = buffMatrix[k][i];
 		
 		printf("%8.4f", buffMatrixX[k]);
	 }
	 puts("");
	 while(counter < i){
	 	counter = 0;
	 for(m = 0;m < i; ++m){
	 	float beta = 0;
	 	for(n=0;n<i;++n){
	 		beta += buffMatrix[m][n] * buffMatrixX[n];
	 		matrixX[m] = beta + buffMatrixX[m];
		if (fabsf(matrixX[m] - buffMatrixX[m]) <= e) {
                counter++;
                continue;}
        }
        for (l = 0; l < i; ++l) {
            buffMatrixX[l] = matrixX[l];
        }
        printMatrixX();
		}
	 }
	 
}
 
 int main (){
     MaximumInRow();
     puts("");
     iterativeTransition();
     convergence();
     puts("");
     iterativeX();
     //printMatrix();
     return 0;
}
