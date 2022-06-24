import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);
    int choice = -1;
    while ((choice != 0) && (choice != 1)) {
      System.out.println("\n 0: CARTÃO 1: PIX\n Por favor, selecione um método de pagamento: ");
      choice = myObj.nextInt();
      if (choice == 0) {
        System.out.println(" Obrigado por selecionar cartão");
      } else if (choice == 1) {
        System.out.println(" Obrigado por selecionar cartão");
      } else {
        System.out.println("\n Esta opção não existe\n");
      }
    }
    myObj.close();
  }
}