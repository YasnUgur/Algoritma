#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	float a,b,c,aci;
	printf("Birinci kenar uzunlugu giriniz (cm): ");
	scanf("%f",&a);
	printf("Ikinci kenar uzunlugu giriniz (cm): ");
	scanf("%f",&b);
	printf("Arasindaki aciyi giriniz (derece): ");
	scanf("%f",&aci);
	
	c=sqrt(a*a+b*b-2*a*b*cos(M_PI*aci/180));
	
	printf("C kenarin uzunlugu (cm): %0.3f",c);
		
	return 0;
}
