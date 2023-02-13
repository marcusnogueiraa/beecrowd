import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    double notaA = sc.nextDouble();
    double notaB = sc.nextDouble();
    double notaC = sc.nextDouble();

    System.out.printf("MEDIA = %.1f\n", (notaA * 2 + notaB * 3 + notaC * 5) / 10);

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1006
// Ranking 25542º, Time 0.309, Submiss Date 12/02/2023 22:16:41 (Java 14)