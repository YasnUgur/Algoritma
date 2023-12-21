a=input('Birinci kenar uzunluğunu giriniz (cm): ');
b=input('İkinci kenar uzunluğunu giriniz (cm): ');
aci=input('Arasındaki açı değerini girniniz (derece): ');

c=sqrt(a^2+b^2-2*a*b*cosd(aci));

fprintf('C kenarın uzunluğu: %0.3f',c);
