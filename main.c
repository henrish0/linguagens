main()
{
    int choice = -1;
    while (choice != 0 && choice != 1)
    {
        printf("\n 0: CARTÃO 1: PIX\n Por favor, selecione um método de pagamento: ");
        scanf(" %d", &choice);
        if (choice == 0)
            printf(" Obrigado por selecionar cartão");
        else if (choice == 1)
            printf(" Obrigado por selecionar pix");
        else
            printf("\n Esta opção não existe\n");
    }
}