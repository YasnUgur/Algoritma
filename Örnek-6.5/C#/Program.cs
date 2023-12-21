using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace kenaruzun
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double a, b, c, açı;
            Console.Write("Birinci kenar uzunluğunu giriniz (cm): ");
            a=Convert.ToDouble(Console.ReadLine());
            Console.Write("İkinci kenar uzunluğunu giriniz (cm): ");
            b = Convert.ToDouble(Console.ReadLine());
            Console.Write("Arasındaki açıyı giriniz (derece): ");
            açı = Convert.ToDouble(Console.ReadLine());

            c = Math.Sqrt(a * a + b * b - 2 * a * b * Math.Cos(Math.PI*açı/180));

            Console.WriteLine("C kenarın uzunluğu: "+c);
            Console.ReadLine();

        }
    }
}
