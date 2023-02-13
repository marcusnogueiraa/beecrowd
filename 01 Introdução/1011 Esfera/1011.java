import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int raio = sc.nextInt();
    System.out.printf("VOLUME = %.3f\n", (4.0 / 3) * 3.14159 * raio * raio * raio);

    sc.close();

  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1011
// Ranking 12287º, Time 0.116, Submiss Date 12/02/2023 22:39:42 (Java 14)