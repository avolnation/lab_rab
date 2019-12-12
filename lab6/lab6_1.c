#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	int i, kol=0, n, p=1, a, s=0, c, h;	//äåêëàðèðóåì íåîáõîäèìûå ïåðåìåííûå 
	int b[10];	// äåêëàðèðóåì ìàññèâ    
	do{
		printf("Vvedite kol-vo elementov massiva (<10)\n");
		scanf("%d", &n);	// ââîäèì êîëè÷åñòâî ýëåìåíòîâ ìàññèâà
	}while (n>=10);
	
	for(i=0; i<n; i++){
		printf("Vvedite element [%d]\n",i);	// ââîäèì ýëåìåíòû ìàññèâà
		scanf("%d", b+i);
	}
	printf("\n");
	
	for (i=0;i<n;i++) 	printf ("%d\n", *(b+i));		// ñîçäà¸ì óêàçàòåëè
					
	for(i=0; i<n; i++){
		
		if(i%2==0){	// ñòàâèì óñëîâèå
			a=*(b+i);	//ïðèñâàèâàåì ïåðåìåííîé çíà÷åíèå óêàçàòåëÿ
			p*=a;		// íàõîäèì ïðîèçâåäåíèå è âûâîäèì ðåçóëüòàò íà ýêðàí
			printf("Proizvedenie elementov = %d\n", p);
}}
	for(i=0; i<n; i++){
		//åñëè íà÷èíàÿ ñ ïåðâîãî ýëåìåíòà , ïåðâûé ýëåìåíò ðàâåí íóëþ, òî ïðèñâàèâàåì ïåðåìåíîé  c  çíà÷åíèå  i
		if(*(b+i)==0){
			c=i; 	break; }}
			
			for(i=n-1; i>=0; i--)	//åñëè íà÷èíàÿ ñ ïîñëåäíåãî  ýëåìåíòà , ïåðâûé ýëåìåíò ðàâåí íóëþ, òî ïðèñâàèâàåì ïåðåìåíîé h  c çíà÷åíèå  i
			if(*(b+i)==0){
			h=i;   break;  }
			
				for(i=c; i<=h; i++){
			s+=*(b+i);}	// íàõîäèì ñóììó
			printf("Summa elementov = %d\n", s);
			getch(); }
