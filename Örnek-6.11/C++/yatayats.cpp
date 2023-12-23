#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float h,vo,t,x,vy,v;
	cout<<"Yerden yuksekigi giriniz (m): ";
	cin>>h;
	cout<<"Hizini giriniz (m/s): ";
	cin>>vo;
	
	t=sqrt(2*h/9.8);
	x=vo*t;
	vy=9.8*t;
	v=sqrt(pow(vo,2)+pow(vy,2));
	
	cout<<"\nCismin havada kalma suresi (s): "<<t;
	cout<<"\nCismin yatayda alacagi yol (m): "<<x;
	cout<<"\nCismin yere carpma hizi (m/s): "<<v;
	
	return 0;
}
