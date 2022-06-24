choice = -1
while (choice != '0') and (choice != '1'):
    choice = input("\n 0: CARTÃO 1: PIX\n Por favor, selecione um método de pagamento: ")
    if choice=='0':
        print(" Obrigado por selecionar cartão")
    if choice=='1':
        print(" Obrigado por selecionar pix")
    if choice!='0' and choice !='1':
        print("\n Esta opção não existe\n")