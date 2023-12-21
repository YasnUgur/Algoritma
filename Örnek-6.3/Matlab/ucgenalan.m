a=input('Birinci kenar uzunluğunu giriniz (cm):');
b=input('İkinci kenar uzunluğunu giriniz (cm):');
aci=input('Arasındaki açıyı giriniz (derece):');

alan=a*b*sind(aci)/2;

fprintf('Üçgenin alanı (cm2): %0.3f',alan);