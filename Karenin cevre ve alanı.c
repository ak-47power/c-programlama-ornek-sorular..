#include <stdio.h>
#include <stdlib.h>

int main() {
    //  karenin �evresinin ve alan�n� hesaplayan c kodu
    
    int cevre,alan,kenar;
    
    printf(" Kenar uzunlugunu griniz: ");
    scanf("%d",&kenar); 

    cevre=4*(kenar);
    alan=kenar*kenar;
	
	printf("Karenizin cevresi: %d\n",cevre);
	printf("Karenizin alani: %d",alan);

    // umar�m faydas� olmu�tur
    // iyi �al��malar..

	return 0;
}
