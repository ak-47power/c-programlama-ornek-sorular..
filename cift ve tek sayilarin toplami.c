#include <stdio.h>
#include <stdlib.h>

int main() {
    // n kadar girilen say�dan �ift olanlar� ayr� tek olanlar� ayr� toplan c kodu
	//n=klavyeden girece�imiz herhangi bir say�
	
	
	int n,cift_toplam=0,tek_toplam=0,i,sayi; // tek ve cift sayilar i�in ayr� toplam de�i�kenleri atad�m, i d�ng� i�in
	
	printf("Sayi adedi giriniz: ");
	scanf("%d",&n);
	
    for(i=0;i<n;i++) // d�ng� s�f�rdan ba�layacak n'e kadar gelecek ve tek tek artacak
    {
    	printf("%d.sayiyi giriniz: ",i+1); // d�ng�n�n i�inde n adet say�m� istiyorum -- i+1 yazmam�n sebebi 1. sayi 2.sayi diye ��kt� vermesi i�in
    	scanf("%d",&sayi);
    	
    	if(sayi%2==0) // girece�im sayi 2 ye tam b�l�n�yorsa demek parantezin i�i bunu neden yapt� �imdi diye sorarsan�z sayi ikiye b�l�n�yorsa �ifttir kalan 0 olur
    	{
    		cift_toplam=cift_toplam+sayi;
		}
		else if(sayi%2==1) // girilen sayi 2 ye b�l�nm�yorsa tektir ve kalan hep bir olur -- else if devam ettirir else derseniz parantez i�ine bir �ey yazamazs�n�z
		{
			tek_toplam=tek_toplam+sayi;
		}
	}
	printf("Cift sayilarin toplami: %d\n",cift_toplam); // ciftlerin toplami
	printf("Tek sayilarin toplami: %d",tek_toplam); // teklerin toplami
 

    // umar�m faydas� olmu�tur
    // iyi �al��malar..

	return 0;
}
