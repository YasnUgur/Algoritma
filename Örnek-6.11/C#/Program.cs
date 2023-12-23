using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace yatayatis
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double h, vo, t, x, vy, v;
            Console.Write("Yerden yüksekliği giriniz (m): ");
            h=Convert.ToDouble(Console.ReadLine());
            Console.Write("İlk hızını giriniz (m/s); ");
            vo=Convert.ToDouble(Console.ReadLine());

            t = Math.Sqrt(2*h/9.8);
            x = vo * t;
            vy = 9.8 * t;
            v=Math.Sqrt(Math.Pow(vo, 2)+Math.Pow(vy,2));

            Console.WriteLine("Cismin havada kalma süresi (s): {0:F2}",t);
            Console.WriteLine("Cismin yatayda alacağı yol (m): {0:F2}",x);
            Console.WriteLine("Cimin yere çarpma hızı (m/s): {0:F2}",v);
            Console.ReadLine();
        }
    }
}
