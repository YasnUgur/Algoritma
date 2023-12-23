h=input("Yerden yüksekliği giriniz (m): ");
vo=input("İlk hızını giriniz (m/s): ");

t=(2*h/9.8)^0.5;
x=vo*t;
vy=9.8*t;
v=(vo^2+vy^2)^0.5;

fprintf("\nCismin havda kalma süresi (s): %0.2f",t);
fprintf("\nCismin yatayda alacağı yol (m): %0.2f",x);
fprintf("\nCismin yere çarpma hızı (m/s): %0.2f",v);