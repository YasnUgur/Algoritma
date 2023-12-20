using System;
using System.Runtime.Serialization;


double gerilimK,R1,R2,R3,R4,akim,vr1,pr2;

    Console.WriteLine("gerilim değerini giriniz (volt): ");
gerilimK=Convert.ToDouble(Console.ReadLine());
Console.WriteLine("R1 değerini giriniz (ohm): ");
R1 = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("R2 değerini giriniz (ohm): ");
R2 = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("R3 değerini giriniz (ohm): ");
R3 = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("R4 değerini giriniz (ohm): ");
R4 = Convert.ToDouble(Console.ReadLine());

akim=gerilimK/(R1+R2+R3+R4);
vr1 = R1 * akim;
pr2 = akim * akim * R2;

Console.WriteLine("devreden akan akım: " + akim + "amper");
Console.WriteLine("R1 direnci üzerinde düşen gerilim: " + vr1 + " volt");
Console.WriteLine("R2 direncinin harcadığı güç "+pr2+"watt");


