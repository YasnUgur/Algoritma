#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float e,f,aci,alan;
	cout<<"Birinci kosegenin uzunlugunu giriniz (cm): ";
	cin>>e;
	cout<<"Ikinci kosegenin uzunlugunu giriniz (cm): ";
	cin>>f;
	cout<<"Arasindaki aciyi giriniz (derece): ";
	cin>>aci;
	
	alan=e*f*sin(M_PI*aci/180)/2;
	
	cout<<"Dortgenin alani: "<<alan;
	
	return 0;
}
