#include <stdio.h>
#include <stdlib.h>

float gerilimK , R1 , R2 , R3 , R4 , akim , VR1 , PR2;

int main() {
	printf("Gerilim degerini giriniz (Volt):");
	scanf("%f",&gerilimK);
	printf("R1 R2 R3 R4 (ohm) degerlerini giriniz: ");
	scanf("%f %f %f %f",&R1,&R2,&R3,&R4);
	akim=gerilimK/(R1+R2+R3+R4);
	VR1=R1*akim;
	PR2=(akim*akim)*R2;
	printf("\nDevreden akan akim: %0.2f amper",akim);
	printf("\nR1 direncine düþen gerilim: %0.2f volt",VR1);
	printf("\nR2 direncinde harcanan güç: %0.2f watt",PR2);

	
	return 0;
}
