#include <iostream>

using namespace std;

float derece , radyan , gradyan;
float pi=3.14;
int main() {
	
	cout<<"dereceyi giriniz: ";
	cin>>derece;
	
	radyan=derece*pi/180;
	gradyan=derece*200/180;
	
	cout<<"\nradyan cinsinden: "<<radyan;
	cout<<"\ngradyan cinsinden: "<<gradyan;
	
	return 0;
}
