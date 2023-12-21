#include <iostream>
#include <cmath>
using namespace std;

float a,b,aci,alan;

int main(){
	cout<<"Birinci kenar uzunlugunu giriniz (cm): ";
	cin>>a;
	cout<<"Ikinci kenar uzunlugunu giriniz (cm): ";
	cin>>b;
	cout<<"Arasindaki aciyi giriniz (derece): ";
	cin>>aci;
	
	alan=a*b*sin(M_PI*aci/180)/2;
	
	cout<<"Ucgenin alani (cm2): "<<alan;
	
}
