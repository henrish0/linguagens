using System;

class Program
{
    public static void Main(string[] args)
    {
        int choice = -1;
        while (choice != 0 && choice != 1)
        {
            Console.WriteLine("\n 0: CARTÃO 1: PIX\n Por favor, selecione um método de pagamento: ");
            choice = Convert.ToInt32(Console.ReadLine());
            if (choice == 0)
                Console.WriteLine(" Obrigado por selecionar cartão");
            else if (choice == 1)
                Console.WriteLine(" Obrigado por selecionar pix");
            else
                Console.WriteLine("\n Esta opção não existe\n");
        }
    }
}