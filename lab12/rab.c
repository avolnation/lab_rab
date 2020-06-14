#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
	//объявляем структуру(таблицу хешей)
	struct HashTable 
	{
		int key;
		int hash;
	};
	//хэш-функция, возвращающая хэш по ключу
	int hashfunc(int x){
		x = (x+25)+13; //((((x*37+13)<<3)*1000/7)>>2)%1000;;
		return x;	
	}

	int main(){
		system("chcp 1251");
		unsigned int i,n;
		float sum = 0, averageValue;
		printf("Введите число ключей: \n");
		scanf("%d", &n);
		//объявляем массив таблиц структуры
		struct HashTable table[n];
		srand(time(NULL));
		for(i=0;i<n;i++){
			table[i].key = (int)rand() % ((100 - (-100))+1) + (-100) ;
			table[i].hash = hashfunc(table[i].key);
			sum += table[i].hash;
			printf("Key[%d] = %d ",table[i].key, table[i].hash );
			puts("");		
	}
		puts("");
		averageValue = sum / n;
		printf("Среднее значение суммы хэшей равно: %f",averageValue);
		puts("");
	
	unsigned int count = 0;
	
	for(i=0;i<n;i++){
		if(table[i].hash > averageValue){
			count++;
		}
	}

		printf("Количество элементов, превышающих среднее значение от всех ключей = %d", count);
	
		return 0;
	}
