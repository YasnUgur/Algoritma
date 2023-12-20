#include <iostream>
using namespace std;
float gerilimK ,R1,R2,R3,R4,akim,vr1,pr2;

int main() {
	cout<<"gerilim degeini giriniz:";
	cin>>gerilimK;
	cout<<"R1 R2 R3 R4 (ohm) cinsinden giriniz: ";
	cin>>R1>>R2>>R3>>R4;
	
	akim=gerilimK/(R1+R2+R3+R4);
	vr1=R1*akim;
	pr2=akim*akim*R2;
	
	cout<<"\ndevreden gecen akim: "<<akim<<"amper";
	cout<<"\nR1 direncine dusen gerilim:"<<vr1<<"volt";
	cout<<"\nR2 direncinde harcanan guc:"<<pr2<<"watt";
	return 0;
}
