#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float h,vo,t,x,vy,v;
	printf("Yerden yuksekligi giriniz (m): ");
	scanf("%f",&h);
	printf("Hizini giriniz (m/s): ");
	scanf("%f",&vo);
	
	t=sqrt(2*h/9.8);
	x=vo*t;
	vy=9.8*t;
	v=sqrt(pow(vo,2)+pow(vy,2));
	
	printf("\nCismin havada kalma suresi %0.2f s\n",t);
	printf("Cismin yatayda alacagi yol %0.2f m\n",x);
	printf("Cismin yere carpma hizi %0.2f m/s",v);
	
	return 0;
}
