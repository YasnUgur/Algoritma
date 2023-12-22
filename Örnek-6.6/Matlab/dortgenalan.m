e=input('Birinci köşegeni giriniz (cm): ');
f=input('İkinci köşeggeni giriniz (cm): ');
aci=input('Arasındaki açıyı giriniz (derece): ');

alan=e*f*sind(aci)/2;

fprintf('Dörtgenin alanı: %0.3f',alan);