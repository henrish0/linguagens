#include <iostream>
using namespace std;
int main()
{
    int choice = -1;
    while (choice != 0 && choice != 1)
    {
        cout << "\n 0: CARTÃO 1: PIX\n Por favor, selecione um método de pagamento: ";
        cin >> choice;
        if (choice == 0)
            cout << " Obrigado por selecionar cartão";
        else if (choice == 1)
            cout << " Obrigado por selecionar pix";
        else
            cout << "\n Esta opção não existe\n";
    }
}