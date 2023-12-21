using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ucgenalan
{
    internal class Program
    {
        
        static void Main(string[] args)
        {
            double a, b, açı, alan;
            Console.Write("Birinci kenar uzunluğunu giriniz (cm): ");
            a=Convert.ToDouble(Console.ReadLine());
            Console.Write("İkinci kenar uzunluğunu giriniz (cm): ");
            b = Convert.ToDouble(Console.ReadLine());
            Console.Write("Arasındaki açıyı giriniz (derece): ");
            açı = Convert.ToDouble(Console.ReadLine());

            alan =a*b*Math.Sin(Math.PI*açı/180)/2;

            Console.WriteLine("Üçgenin alanı (cm2):" + alan);
            Console.ReadLine();
        }
    }
}
