#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a,b,c,aci;
	cout<<"Birinci kenar uzunlugunu giriniz (cm): ";
	cin>>a;
	cout<<"Ikinci kenar uzunlugunu giriniz (cm): ";
	cin>>b;
	cout<<"Arasindaki aciyi (derece): ";
	cin>>aci;
	
	c=sqrt(a*a+b*b-2*a*b*cos(M_PI*aci/180));
	
	cout<<"C kenarin uzunlugu: "<<c;
	
	return 0;
}
