#include <stdio.h>
#include <stdlib.h>

int main() {
   //1'den n'e kadar olan say�lar�n toplam�
   
   int i,toplam=0,n;
   
   printf("Hangi sayiya kadar toplam degeri istiyorsunuz: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
   	toplam=toplam+i;
   }
   printf("Istediginiz sayiya kadar olan tum sayilarin toplami: %d",toplam);
    // umar�m faydas� olmu�tur
    // iyi �al��malar..

	return 0;
}
