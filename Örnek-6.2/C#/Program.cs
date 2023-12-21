using Algoritma;
using System;
using System.Runtime.Serialization;

double der, rad, grad;
double pi = 3.14;


    Console.Write("Derece cinsinden değer giriniz: ");
    der = Convert.ToDouble(Console.ReadLine());

    rad = der * pi / 180;
    grad = der * 200 / 180;

    Console.WriteLine("Radyan: {0} \nGradyan: {1} ",rad,grad);
