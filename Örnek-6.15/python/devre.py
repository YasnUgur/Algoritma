

gerilimK=float(input("gerilim değerini giriniz:"))
R1=float(input("R1 direncinin değerini giriniz:"))
R2=float(input("R2 direncinin değerini giriniz:"))
R3=float(input("R3 direncinin değerini giriniz:"))
R4=float(input("R4 direncinin değerini giriniz:"))

akim=gerilimK/(R1+R2+R3+R4)
vr1=akim*R1
pr2=akim*akim*R2

print("devreden akan akım: %0.2f\n"%(akim))
print("R1 direncine düşen gerilim: %0.2f\n"%(vr1))
print("R2 direncinin harcadığı güç: %0.2f\n"%(pr2))