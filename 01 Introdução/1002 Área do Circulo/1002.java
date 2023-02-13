import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    double pi = 3.14159;

    Scanner input = new Scanner(System.in);
    double raio = input.nextDouble();

    System.out.printf("A=%.4f\n", raio * raio * pi);
    input.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1002
// Ranking 29131º, Time 0.182, Submiss Date 12/02/2023 22:00:22 (Java 14)
