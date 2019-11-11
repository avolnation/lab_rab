#include <iostream>
#include <stdio.h>

int main(){
	
	int a; //декларируем переменные 
	
	printf("Write down a number of month ");
	scanf("%d", &a); //считываем с клавиатуры значение переменной a
	
	if(a == 1 || a == 2 || a == 12)  //проверяем a на соответствование условиям
	   printf("Winter");
	else if(a>2 && a<=5)
	   printf("Spring");
	else if(a>5 && a<=8)
	   printf("Summer");
	else if( a == 0)
	   printf("Wrong number");
	else 
	   printf("Autumn");
     
	return 0;
}
