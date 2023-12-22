#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	float e,f,aci,alan;
	printf("Birinci kosegenin uzunlugunu giriniz (cm): ");
	scanf("%f",&e);
	printf("ikinci kosegenin uzunlugunu giriniz (cm): ");
	scanf("%f",&f);
	printf("Aradaki aciyi giriniz (derece): ");
	scanf("%f",&aci);
	
	alan=e*f*sin(M_PI*aci/180)/2;
	
	printf("Dortegenin alani: %0.3f",alan);
	
	return 0;
}
