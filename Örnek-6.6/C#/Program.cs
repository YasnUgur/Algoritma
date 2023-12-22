using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace dortgenalan
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double e, f, açı, alan;
            Console.Write("Birinci köşegenin uzunluğunu giriniz (cm): ");
            e=Convert.ToDouble(Console.ReadLine());
            Console.Write("İkinci köşegenin uzunluğunu giriniz (cm): ");
            f = Convert.ToDouble(Console.ReadLine());
            Console.Write("Arasındaki açıyı giriniz (derece): ");
            açı = Convert.ToDouble(Console.ReadLine());

            alan=e*f*Math.Sin(Math.PI*açı/180)/2;

            Console.WriteLine("Dörtgenin alanı: {0:F3}",alan);
            Console.ReadLine();
        }
    }
}
