#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr,i,n,dvs=1,firstNull,lastNull,sum=0;
	
	printf("Vvedite chislo elementov ");
	scanf("%d", &n);
	
	if(!(ptr=(int*)malloc(n*sizeof(int))))
	{ puts("Not enough memory");
	return 1;	
	}
	
	for(i=0;i<n;i++){
		printf("el[%d]", i+1);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		if(i % 2 == 0){
			dvs *= *(ptr+i);
			
		}
	}
	
	printf("%d\n",dvs);
	
	for(i=0;i<n;i++){
	    if(*(ptr+i) == 0){
	    	 firstNull = i;
	    	 break;
		}			
		}
		printf("fN = %d\n", firstNull);
	for(i=n;i>firstNull;i--){
		if(*(ptr+i) == 0){
			lastNull = i;
		}	
	}
		printf("lN = %d\n", lastNull);
	
	for(i=firstNull;i<lastNull;i++){
		sum += *(ptr+i);
	}	
	
	printf("%d", sum);
	free(ptr);
	return 0;
}
