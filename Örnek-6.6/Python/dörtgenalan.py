import math

e=float(input('Birinci köşegeni giriniz (cm): '))
f=float(input('İkinci köşegeni giriniz (cm): '))
açı=float(input('Arasındaki açıyı giriniz (derece):'))

alan=e*f*math.sin(math.radians(açı))/2

print('Dörtgenin alanı: %0.3f'%(alan))