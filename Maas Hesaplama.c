#include <stdio.h>
#include <stdlib.h>

int main() {

    // Maa�� ve zam oran� verilen bir ��retmenin yeni maa��n� hesaplayan c kodu
    
    int maas,zamorani;
    float yenimaas;
    
    printf("Eski maasinizi giriniz: ");  // eski maasini istedim
    scanf("%d",&maas);
    
    printf("Maaasiniza yapilan zam oranini giriniz: "); // zam oranini istedim
    scanf("%d",&zamorani);
    
    yenimaas=maas+(maas*zamorani/100); // yeni maasi bulmas� i�in programa yapmas� gereken islemleri girdim
    printf("Yeni Maasiniz: %.2f",yenimaas); // ekrana yazd�rd�m
    
    // umar�m faydas� olmu�tur
    // iyi �al��malar..

	return 0;
}
