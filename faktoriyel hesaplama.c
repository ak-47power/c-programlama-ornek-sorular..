#include <stdio.h>
#include <stdlib.h>

int main() {
   // Faktoriyel hesaplama
   
   int i,sayi,faktoriyel;
   
   printf("Lutfen bir sayi giriniz: ");
   scanf("%d",&sayi);
   
   for(i=1;i<=sayi;i++)  // for d�ng�s�n� 1 den ba�alt�p girdi�im say�ya kadar tek tek artt�rd�m
   {
   	faktoriyel=faktoriyel*i; // faktoriyeli hesaplayabilmesi i�in programa i�lemi tan�tt�m
   }
   printf("Girdiginiz sayinin faktoriyeli: %d",faktoriyel); // ekrana yazd�rd�m

    // umar�m faydal� olmu�tur iyi �al��malar
    // iyi �al��malar..

	return 0;
}
