#include <stdio.h>
#include <stdlib.h>


float derece , radyan , gradyan;
float pi=3.14;
int main() {
	printf("dereceyi giriniz: ");
	scanf("%f",&derece);
	radyan=derece*pi/180;
	gradyan=derece*200/180;
	printf("\nradyan: %0.4f \ngradyan: %0.4f",radyan,gradyan);
	return 0;
}
