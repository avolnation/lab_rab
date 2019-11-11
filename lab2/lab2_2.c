#include <iostream>
#include <stdio.h>
int main() {
	
	int a,b,c,count; //deklariruem peremennie
	
	printf("Vvedite 3 chisla (a,b,c) \n"); 
	scanf("%d %d %d", &a, &b, &c); //poluchaem znacheniya peremennih a,b,c
	count = 0; //prisvaem schetchiky polozhitelnih chisel znachenie 0
	
	if(a>0){	
	    count++;  //proveryaem a,b,c na polozhitelnost
		}
	
	if(b>0){
		count++;	
	}
	
	if(c>0){
		count++;
	}
	
	printf("Chislo polozhitelnih chisel = %d", count);   //vivodim chislo polozhitelnih peremennih
	
	return 0;
}
