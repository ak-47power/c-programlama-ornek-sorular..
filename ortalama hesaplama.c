#include <stdio.h>
#include <stdlib.h>

int main() {

    // DI�ARIDAN G�R�LEN �K� SINAV NOTUNU HESAPLAYAN VE ��RENC�N�N ORTALAMASI 60VE �ZER�YSE "GE�T�" 60DAN K���KSE "KALDI" EKRANA YAZAN C KODU
    
    //vize=not*0.4
    //final=not*0.6
    
    
    int vize,final;
    float ortalama;
    
    printf("vize notunuzu giriniz: ");// vize notunu istedim
    scanf("%d",&vize);
    
    printf("final notunuzu giriniz: ");//final notunu istedim
    scanf("%d",&final);
    
    ortalama=(vize*0.4)+(final*0.6);// ortalamayi istedim i�lem �nceli�ine dikkat edin ben b�yle yap�yorum siz farkl� yapabilirsiniz
    printf("Ortalamaniz: %.2f\n",ortalama);// %.2f yapmam�n sebebi virg�lden sonra iki hane g�stermesini istedim siz 3,4,5 yapapilirsiniz ve \n bo�luk b�rak�r daha d�zenli ��kt� vermesi i�in
    
    if(ortalama>=60)// ortalama 60'a e�it ve b�y�kse ekrana ne yazmas� gerekti�ini belirttim
    {
    	printf("GECTI");
	}
    else// ortalama 60'dan k���kse ne yapmas� gerekti�ini belirttim
    {
    	printf("KALDI");
	}
    
    // umar�m faydas� olmu�tur
    // iyi �al��malar..

	return 0;
}
