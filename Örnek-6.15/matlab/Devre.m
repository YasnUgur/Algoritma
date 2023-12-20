% devre
clear all: cls
gerilim =input('gerilim değerini giriniz (volt):');
r1=input('R1 değerini giriniz (ohm): ');
r2=input('R1 değerini giriniz (ohm): ');
r3=input('R1 değerini giriniz (ohm): ');
r4=input('R1 değerini giriniz (ohm): ');

akim=gerilim/(r1+r2+r3+r4);
vr1=r1*akim;
pr2=akim*akim*r2;

fprintf('\n devreden geçen akim: %0.2f\n',akim);
fprintf('\n R1 direnci üzerine düşen gerilim: %0.2f\n',vr1);
fprintf('\n R2 direncini harcadığı güç: %0.2f\n',pr2);