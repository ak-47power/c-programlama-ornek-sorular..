#include <stdio.h>
#include <stdlib.h>

int main() {
  // kendisi hari� pozitif tamsay� �arpanlar�n�n toplam� kendisine e�it olan say�lara m�kemmel say� denir..
  // hadi yapal�m
  
  int sayi,toplam=0,i;
   
   printf("Bir sayi giriniz: ");
   scanf("%d",&sayi);
   
   for(i=1;i<sayi;i++)
   {
   	if(sayi%i==0)
   	{
   	toplam+=i;
   	}
   }
   if(toplam==sayi)
   {
   	printf("Girdiginiz sayi mukemmel sayidir");
   }
   else
   {
   	printf("girdiginiz sayi mukemmel sayi degildir");
   }

    // umar�m faydal� olmu�tur iyi �al��malar
    // iyi �al��malar..

	return 0;
}
