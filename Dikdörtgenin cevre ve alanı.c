#include <stdio.h>
#include <stdlib.h>

int main() {
    //  Dikd�rtgenin �evresinin ve alan�n� hesaplayan ckodu
    
    int cevre,alan,kisakenar,uzunkenar;
    
    printf("Dikdortgenin kisa kenarinin giriniz: "); // kisa kenari istedim
    scanf("%d",&kisakenar);
    
    printf("Dikdortgenin uzun kenarini giriniz: "); // uzun kenari istedim
    scanf("%d",&uzunkenar);
    
    cevre=(2*kisakenar)+(2*uzunkenar); // cevrenin ne oldu�u programa tan�tt�m
    alan=kisakenar*uzunkenar;   // alan�n ne oldu�unu programa tan�tt�m
    
    printf("Dikdortgeninizin cevresi: %d\n",cevre); //cevreyi ekrana yazd�rd�m
    printf("Dikdortgeninizin alani: %d",alan); // alan� ekrana yazd�rd�m
    
    // umar�m faydas� olmu�tur
    // iyi �al��malar..

	return 0;
}
