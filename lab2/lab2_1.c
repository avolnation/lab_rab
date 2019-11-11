#include <iostream>
#include <math.h>

// r = a/koren iz 2
int main() {

	int b,r,diag,diam; // декларируем переменные
	
	
	printf("Vvedite radius kruga "); //получаем значение радиуса круга с клавиатуры
	scanf("%d", &r); //считываем значение радиуса круга с клавиатуры
	diam = 2*r; //находим диаметр окружности
	
	printf("Vvedite storony kvadrata b ");
	scanf("%d", &b); //считываем значение стороны квадрата
	diag = ((2*b)/pow(2,1/2)); //находим диагональ квадрата
	
	if (diag<=diam) 
	   printf("It is possible");
	else 
	   printf("It's impossible");
	
	return 0;
}
