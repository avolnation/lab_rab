#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,k,m,n,str,znach,firstElement;
	
	   printf("Vvedite chislo strok ");
	  scanf("%d",&n);
	   printf("Vvedite chislo stolbcov ");
	  scanf("%d",&m);
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
			if(a[i][j]<0)
			   str=i;
		}
	}
	
	firstElement = a[str][0];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		a[i][j] += firstElement;
	}
	}
	
	printf("\n");
	
	 for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}
