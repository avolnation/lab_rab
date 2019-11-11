#include <stdio.h>

int main(){
    
    int k,i;
    
    
    printf("Vvedite kol-vo elementov massiva");
    scanf("%d", &k);
    
    
    int a[k+1];
    
    
    for(i=1;i<=k;i++)
    {
    	scanf("%d", &a[i]);
    }
    
    for(i=k; i>=1; i--){
    	printf("%d",a[i]);
	}
  return 0;
 
}
