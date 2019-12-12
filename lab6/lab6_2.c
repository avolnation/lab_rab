#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
 
int main()
{
    int  min, min2, max, max2, k, k2;
    int i, j;
    
    int mas[10][12] = { { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, { 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}  };
    int minj,mini;
    int maxi,maxj;
    
    printf("Massiv:\n");
    for (i = 0; i < 10; ++i) 			/*выводим элементы массива на экран*/
    {
        for (j = 0; j < 12; ++j)
        {
            printf(" %d", *(mas+i+j));
        }
        printf("\n\n");
    }
 
 
    for (i = 0; i<10; i++)
    {
        for (j = 0; j<12; j++)
        {
            minj = 0;			/*ищем  минимальный элемент по столбцу*/
            for (k = 1; k<12; k++)
            {
                if (mas[i][k]<mas[i][minj]) 
                    minj = k;
            }
         
            maxi = 0;		/*ищем  максимальный элемент по строке*/
            for (k = 1; k<10; k++)
            {
                if (mas[k][j]>mas[maxi][j]) 
                    maxi = k;
            }
            if ((maxi == i) && (minj == j)) printf("%s%d%s%d%s%d%s", "sedlovaya tochka - [", i, ";", j, "]=", *(mas+i+j), ".\n");    		/*выводим на экран седловую точку*/
            else
            {
            
                maxj = 0;
                for (k = 1; k<12; k++)	/*ищем  максимальный элемент по столбцу*/
                {
                    if (mas[i][k]>mas[i][maxj]) maxj = k;
                }
            
                mini = 0;		/*ищем  минимальный элемент по строке*/
                for (k = 1; k<10; k++)
                {
                    if (mas[k][j]<mas[mini][j]) mini = k;
                }
                if ((mini == i) && (maxj == j)) printf("%s%d%s%d%s%d%s", "sedlovaya tochka - [", i, ";", j, "]=", *(mas+i+j), ".\n");			/*выводим на экран седловую точку*/
            }
        }
    }
            
  
}
