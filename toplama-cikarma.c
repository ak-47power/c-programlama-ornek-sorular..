#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// d��ar�dan girilen iki say�y� toplama ve ��karma 
	
	
	int sayi1,sayi2,toplam,fark;
	
	printf("birinci sayiyi giriniz: "); //birinci sayiyi kullan�c�dan istedim
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz: "); // ikinci sayiyi kullan�c�dan istedim
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2; // toplam degiskeninin ne oldugunu belirttim 
	printf("girdiginiz sayilarin toplami: %d",toplam); //ekrana yazdirdim
	
	fark=sayi1-sayi2; //ayni sekilde fark degiskeninin ne oldugunu belirttim
	printf("girdiginiz sayilarin farki: %d",fark) // ekrana yazdirdim
	
	
	// kod daha kisa su sekilde de yazilabilir
/*	
	int sayi1,sayi2,toplam,fark;
	
	printf("birinci ve ikinci sayilari giriniz: ");
	scanf("%d %d",&sayi1 ,&sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	printf("sonuclariniz: %d %d",toplam,fark);
*/	
	return 0;
}
