import math

h=float(input('Yerden yüksekliği giriniz (m): '))
vo=float(input('ilk hızını giriniz (m/s): '))

t=math.sqrt(2*h/9.8)
x=vo*t
vy=9.8*t
v=math.sqrt(math.pow(vo,2)+math.pow(vy,2))

print("\nCismin havada kalma süresi (s): %0.3f"%(t))
print("Cismin yatayda alacağı yol (m): %0.3f"%(x))
print("Cismin yere çarpma hızı (m/s): %0.3f"%(v))