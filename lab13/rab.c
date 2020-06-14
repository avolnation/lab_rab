#include <stdio.h>
#include <time.h>
#include <math.h>
#define RAND_MAX 0x7fff 

int main(){
	system("chcp 1251");
	int i = 0,n,k = 0,j = 0,h = 0,count = 0;
	printf("Ââåäèòå ðàçìåð ìàññèâà ");
	scanf("%d",&n);
	puts("");
	float A[n];
	printf("Èñõîäíûé ìàññèâ: \n");
	puts("");
	//(float)rand() / 138,4488 - 5,83;
	//ñîçäàåì ìàññèâ ñ ðàíäîìíûìè ÷èñëàìè
	for(i=0;i<n;i++){
		A[i] = (float)rand() / RAND_MAX * (9.38 + 5.83) - 5,83;
		printf("A[%d] = %.4f ", i+1, A[i]);
		puts("");		
	}
	puts("");
	puts("");

//â ìàññèâ B ïåðåñòàâëÿåì âñå ïîëîæèòåëüíûå çíà÷åíèÿ äëÿ äàëüíåéøåé ñîðòèðîâêè
//ñ÷¸ò÷èê ïîëîæèòåëüíûõ ÷èñåë
	for(i=0;i<n;i++){
		if(A[i]>0){
			count++;
		}	
	}
 	float B[n];
	printf("Âñå ïîëîæèòåëüíûå ÷èñëà èç ìàññèâà(íå ñîðòèðîâàííûå):\n");
	puts("");
	for(i=0,k=0;i<n,k<count;i++){
		if(A[i]>0){
			B[k] = A[i];
			printf("B[%d] = %.4f \n", k+1, B[k]);
			k++;
		}	
	}	
	puts("");
	puts("");
	printf("Âñå ïîëîæèòåëüíûå ÷èñëà èç ìàññèâà(Îòñîðòèðîâàííûå):");	
	puts("");
	int minIndex;
	float min,minBuff;
	for(k=0;k<count;k++){
		min = B[k];
		puts("");
		for(j=k+1;j<count;j++){
			if(B[j]<min){
				min = B[j];
				minIndex = j;
				minBuff = B[k];
				B[k] = B[minIndex];
				B[minIndex] = minBuff;
			}
		}
	printf("B[%d] = %.4f", k, B[k]);
	}
	puts("");
	puts("");
	
	//âûâîä îòðèöàòåëüíûõ ÷èñåë
	printf("Âñå îòðèöàòåëüíûå ÷èñëà èç ìàññèâà(íå ñîðòèðîâàííûå):\n");
	puts("");
	int l;
	l = count;
		//printf("%d",l);
	for(i=0;i<n,l<n;i++){
		if(A[i]<0){
			B[l] = A[i];
			printf("B[%d] = %.4f \n", l, B[l]);
			l++;
		}	
	}
	puts("");
	printf("Âñå îòðèöàòåëüíûå ÷èñëà èç ìàññèâà(Îòñîðòèðîâàííûå):\n");
    int maxIndex;
	float max,maxBuff;
	for(l=count;l<n;l++){
		max = B[l];
		puts("");
		for(h=l+1;h<n;h++){
			if(fabs(B[h])>fabs(max)){
				max = B[h];
				maxIndex = h;
				maxBuff = B[l];
				B[l] = B[maxIndex];
				B[maxIndex] = maxBuff;
			}
		}
	printf("B[%d]=%8.4f", l, B[l]);
	}

puts("");
	return 0;
}
