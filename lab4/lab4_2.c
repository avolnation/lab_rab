#include <stdio.h>

int main(){
    
    int k,i,count;
    
    
    printf("Vvedite kol-vo elementov massiva = ");
    scanf("%d", &k);
    
    
    int a[k+1];
    
    
    for(i=1;i<=k;i++)
    {
    	scanf("%d", &a[i]);
    }
    
    for(i=1; i<k; i++){
    	if(a[i]<a[i-1]) count++;
	}
	printf("%d", count);
	
	  return 0;
 
}
