#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(void) {
	
	float x,y,z,a,b,c,s; //декларируем переменные
	
	printf("Vvedite zmachenija peremennix x, y, z ");
	scanf("%f \n %f \n %f", &x, &y, &z); //считываем значения переменных с клавиатуры
	a = pow(9+(pow((x-y),2)),1.0/3.0); 
	b = (pow(x,2.0)+pow(y,2.0))+2;
	c = exp(fabs(x-y))*pow(tan(z),3.0);
	s = (a/b)-c; //рассчитываем результат
	

    printf("Result = %f \n",s); //выводим результат на экран
	
	
	
	
	return 0;
}
