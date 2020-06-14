#include <stdio.h>

int main()
{
   float firstElement0,firstElement1,firstElement2,firstElement3,firstElement4,element,x1,x2,x3,stroka1,stroka2,stroka3;
   float matrixFull[3][4]={{2.5,-3.12,-4.03,-7.5},
                           {0.61,0.71,-0.05,0.44},
                           {-1.03,-2.05,0.87,-1.16}};
   float matrixNew[3][4]={{0,0,0,0},
                          {0,0,0,0},
                          {0,0,0,0}};
   int i,j;

   firstElement0 = matrixFull[0][0];
	printf("Delenie pevoj stroki na ee pervij element\n");
		for(j=0;j<4;j++){
   			matrixNew[0][j] = matrixFull[0][j]/firstElement0;
   			printf("a[0][%d]=%.2f ",j,matrixNew[0][j]);
		}
	printf("\n\n");
	

	printf("Vtoraya stroka posle preobrazovanij\n");
	firstElement1 = matrixFull[1][0];
		for(j=0;j<4;j++){
   			matrixNew[1][j] = matrixNew[0][j]*(-firstElement1)+matrixFull[1][j];
   			printf("a[1][%d]=%.2f ",j,matrixNew[1][j]);
   		}
	printf("\n");
	firstElement2 = matrixFull[2][0];
   
	printf("Tretya stroka posle preobrazovanij\n");
		for(j=0;j<4;j++){
   			matrixNew[2][j] = matrixNew[0][j]*(-firstElement2)+matrixFull[2][j];
   			printf("a[2][%d]=%.2f ",j,matrixNew[2][j]);
   		}
   	printf("\n\n");
   	
   	printf("Preobrazovannaya matrica\n");
   		for(i=0;i<3;i++){
   			for(j=0;j<4;j++){
   				printf("a[%d][%d] = %.2f ", i,j,matrixNew[i][j]);
	   		}
	   		printf("\n");
   		}
  	printf("\n\n");
   	firstElement3 = matrixNew[1][1];
  	printf("Delim vtoruju stroky na ee vtoroj element\n");
   		for(j=0;j<4;j++){
   			matrixNew[1][j] = matrixNew[1][j]/firstElement3;
   			printf("a[1][%d]=%.2f ",j,matrixNew[1][j]);
		}
	printf("\n\n");
	
	printf("Tretya stroka posle privedenia k treugolnomy vidy\n");
	firstElement4 = matrixNew[2][1];
	for(j=0;j<4;j++){
   		matrixNew[2][j] = matrixNew[1][j]*(-firstElement4)+matrixNew[2][j];
   		printf("a[2][%d]=%.2f ",j,matrixNew[2][j]);
   		}
   		printf("\n\n");
   		
	printf("Razdelim tretju stroku ee tretij element\n");
   	element = matrixNew[2][2];
		for(j=0;j<4;j++){
   			matrixNew[2][j] = matrixNew[2][j]/element;
   			printf("a[2][%d]=%.2f ",j,matrixNew[2][j]);
		}
	printf("\n\n"); 

	printf("Matrica treygolnogo vida s diagonalnimi elementami ravnimi 1:\n"); 
   		for(i=0;i<3;i++){
   			for(j=0;j<4;j++){
   				printf("a[%d][%d] = %.2f ", i,j,matrixNew[i][j]);
	   		}
	   	printf("\n");
		}
	printf("\n\n"); 

	x3 = matrixNew[2][3];
		printf("Koren3 = %4.2f\n",x3); 
	
	x2 = matrixNew[1][3]-matrixNew[1][2]*x3;
		printf("Koren2 = %4.2f\n",x2); 
	
	x1 = matrixNew[0][3]-matrixNew[0][1]*x2-matrixNew[0][2]*x3;
		printf("Koren1 = %4.2f\n\n",x1); 
		printf("Podstavlaem korni v ishodnoe yravnenie(proverka):\n");

	stroka1 = (matrixFull[0][0]*x1)+(matrixFull[0][1]*x2)+(matrixFull[0][2]*x3);
		printf("%8.2f = %5.2f\n", stroka1,matrixFull[0][3]);

	stroka2 = (matrixFull[1][0]*x1)+(matrixFull[1][1]*x2)+(matrixFull[1][2]*x3);
		printf("%8.2f = %5.2f\n", stroka2,matrixFull[1][3]);

	stroka3 = (matrixFull[2][0]*x1)+(matrixFull[2][1]*x2)+(matrixFull[2][2]*x3);
		printf("%8.2f = %5.2f\n", stroka3,matrixFull[2][3]);
   
    return 0;
}
