#include <stdio.h>
#include <math.h>



int HashFunction(int k){
    return(k%10);
}
    void main(){

        int key;

        printf("Key = ");
        scanf("%d\n", &key);
        printf("Hash Function(%d)=%d",key,HashFunction(key));
    }
