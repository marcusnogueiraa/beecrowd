import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int senha;

    do {
      senha = sc.nextInt();
      if (senha != 2002) {
        System.out.println("Senha Invalida");
      }

    } while (senha != 2002);

    System.out.println("Acesso Permitido");

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1114
// Ranking 07370º, Time 0.255, Submiss Date 13/02/2023 10:30:46 (Java 14)