#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float a,b,aci,alan;

int main() {
	
	printf("Bir kenarin uzunlugunu giriniz (cm): ");
	scanf("%f",&a);
	
	printf("Diger kenarin uzunlugunu giriniz (cm): ");
	scanf("%f",&b);
	
	printf("Arasindaki aciyi giriniz (derece): ");
	scanf("%f",&aci);
	
	alan=a*b*sin(M_PI*aci/180)/2;
	
	printf("Ucgenin alani (cm2): %0.2f",alan);
	

	return 0;
}
