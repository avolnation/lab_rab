
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int i,n,comp,count=0;
    int *min,*max;
    
    printf("Vvedite razmer massiva ");
    scanf("%d", &n);
    
    int A[n];
    int elem[n];
    
    for(i=0;i<n;i++){
    scanf("%d", &A[i]);
    }
    
    comp = 1;

    for(min = A, max = &A[n]; min < max; min++){
        if(*min % 2 == 0){
            comp *= elem[count++];
        }
    }
    printf("Proizvedenie chetnix elementov ravno %d", comp);

    return 0;
}
