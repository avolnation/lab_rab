#include <stdio.h>

int main(){
    
    int h,i;
    
    
    printf("Vvedite kol-vo elementov massiva");
    scanf("%d", &h);
    
    
    int a[h+1];
    
    
    for(i=1;i<=h;i++)
    {
    	scanf("%d", &a[i]);
    }
    
    for(i=h; i>=1; i--){
    	printf("%d",a[i]);
	}
  return 0;
 
}
