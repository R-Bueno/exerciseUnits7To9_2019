//TextWithoutA
//By Renato Bueno

using System;

class TextWithoutA
{
    
    static void Main()
    {
        string text;
        bool hasA = false;

        do
        {
            hasA = false;
            Console.Write("Enter a text: ");
            text = Console.ReadLine();

            foreach (char letter in text)
               if(letter == 'a' || letter == 'A')
                    hasA = true;

            if (hasA)
            {
                Console.Write("There is an \"a\" or an \"A\", "); Console.WriteLine("Enter another frase");
            }
        }
        while (hasA);
        Console.WriteLine("OK");
    }
}
