#include <stdio.h>

int main(){

   int i,j,k,h,m,n,maxi,mini,maxj,minj;

   printf("Vvedite kolichestvo strok:");
   scanf("%d", &n);
   printf("Vvedite kolichestvo stolbcov:");
   scanf("%d", &m);
    
    
   int a[n][m];

   
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
	   {
       scanf("%d", &a[i][j]);
       }
   }
        
      
    for(i=0;i<n;i++)
	{
       for(j=0;j<m;j++)
	   {
	   	
	   	minj=mini=1e9;
	   	maxj=maxi=-1e9;
	
          for(k=0;k<n;k++)
		  {
		  	 if(a[k][j]<mini) 
		  	 mini=a[k][j];
		  	 if(a[k][j]>maxi) 
		  	 maxi=a[k][j];	
		  }
		  for(h=0;h<m;h++)
		  {
		  	if(a[i][h]<minj) 
		  	minj = a[i][h];
		  	if(a[i][h]>maxj) 
		  	maxj = a[i][h];
		  }
		if(a[i][j] == mini && a[i][j]==maxj) 
		  printf("i: %d j: %d\n",i,j);
        if(a[i][j] == maxi && a[i][j] == minj) 
          printf("i: %d j: %d\n",i,j);
	   

       }
    }
    
return 0;
}
