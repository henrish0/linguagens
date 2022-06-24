#include <iostream>

int main()
{
    char choice = '2';
    while (choice != '0' && choice != '1')
    {
        std::cout << "\n 0: CARTÃO 1: PIX\n Por favor, selecione um método de pagamento: ";
        std::cin >> choice;
        if (choice == '0')
            std::cout << " Obrigado por selecionar cartão";
        else if (choice == '1')
            std::cout << " Obrigado por selecionar pix";
        else
            std::cout << "\n Esta opção não existe\n";
    }
    return 0;
}