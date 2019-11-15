#include <stdio.h>

int main(){

    int n,m,i,j,sum,tmp,tmp1,tmpp,tmpp1;
    
    printf("vvedite kol-vo strok ");
    scanf("%d", &n);
    printf("Vvedite kol-vo stolbcov ");
    scanf("%d", &m);

          int a[n][m],b[n],c[n];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        sum = 0;
        for(j=0;j<m;j++){
        if(a[i][j]<0 && a[i][j] % 2 == 0) 
        sum+=a[i][j];
        }
      b[i]=sum;
      c[i]=i;
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
    if(b[i]<b[j]){
        tmp=b[i];
        tmp1=b[j];
        tmpp=c[i];
        tmpp1=c[j];
        b[i]=tmp1;
        b[j]=tmp;
        c[i]=tmpp1;
        c[j]=tmpp;
        }
        
    }
}

  printf("\n");

  for(i=0;i<n;i++){
      for(j=0;j<m;j++){
          printf("%d ",a[c[i]][j]);
      }
      printf("\n");
  }

    return 0;
}
