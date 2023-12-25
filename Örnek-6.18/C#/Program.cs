using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace tekçift
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int sayı;
            Console.Write("Bir tam sayı giriniz: ");
            sayı=Convert.ToInt32(Console.ReadLine());

            if (sayı % 2 == 0)
                Console.WriteLine("Girilen sayı çift bir sayıdır.");
            else
                Console.WriteLine("Girilen sayı tek bir sayıdır.");

            Console.ReadLine();
        }
    }
}
