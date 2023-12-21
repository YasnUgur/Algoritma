import math

a=float(input('Birinci kenar uzunluğunu giriniz (cm): '))
b=float(input('İkinci kenar uzunluğunu giriniz (cm): '))
açı=float(input('Arasındaki açıyı giriniz (derece): '))

c=math.sqrt(a*a+b*b-2*a*b*math.cos(math.radians(açı)))

print('C kenarın uzunluğu: %0.3f'%(c))