#include <stdio.h>
#include <stdlib.h>

int main() {


// bir maddenin sc�akl�k de�erine g�re entalpi de�erini ne durumda oldu�unu g�steren c kodu


int sicaklik;

printf(" Maddenizin sicaklik degerini giriniz: ");
scanf("%d",&sicaklik);

if(sicaklik==0)
{
	printf("Entalpiniz kritik noktada");
}
else if(sicaklik==1)
{
	printf("Entalpiniz yuksek");
}
 else if(sicaklik<-1)
{
	printf("Entalpiniz dusuk");
}


    // umar�m faydal� olmu�tur iyi �al��malar
    // iyi �al��malar..

	return 0;
}
