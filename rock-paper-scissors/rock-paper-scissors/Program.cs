using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System;

namespace KNB
{
    class game
    {
        static void Main()
        {
            string[] combs = { "Камень", "Ножницы", "Бумага" };

            Random random = new Random();
            do
            {
                var r = random.Next(3);
                Console.WriteLine("Введите свое значение");
                for (int i = 0; i < combs.Length; i++)
                {
                    Console.WriteLine("{0} {1}", i, combs[i]);
                }
                uint input;
                while (!uint.TryParse(Console.ReadLine(), out input) || input > 2)
                {
                }
                Console.WriteLine("Компьютер выбрал {0}, вы выбрали {1}", combs[r], combs[input]);
                if (r == input)
                    Console.WriteLine("Ничья");
                else if (input == 2 && r == 0 || input < r)
                    Console.WriteLine("Поражение");
                else
                    Console.WriteLine("Победа");
                Console.WriteLine("Попробовать еще раз? Y/N");
            }
            while (Console.ReadKey(true).Key == ConsoleKey.Y);
            Console.WriteLine("Игра окончена, нажмите любую клавишу");
            Console.ReadKey();
        }
    }
}
