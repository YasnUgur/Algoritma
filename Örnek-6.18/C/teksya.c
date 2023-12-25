#include <stdio.h>
#include <stdlib.h>



int main() {
	int sayi;
	
	printf("Bir tam sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%2 == 0)
	printf("Girilen sayi cift sayidir.");
	else
	printf("Girilen sayi tek sayidir.");
		
	return 0;
}
