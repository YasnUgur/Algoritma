import math

a=float(input('Bir kenar uzunluğunu giriniz (cm): '))
b=float(input('İkinci kenar uzunluğunu giriniz: (cm): '))
açı=float(input('Arasındaki açıyı giriniz (derece): '))

alan=a*b*math.sin(math.radians(açı))/2
print('Üçgenin alanı (cm2): %0.3f'%(alan))