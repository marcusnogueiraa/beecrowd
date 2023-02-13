import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    double x = sc.nextDouble();
    double y = sc.nextDouble();

    if (x != 0 && y == 0) {
      System.out.println("Eixo X");
    } else if (x == 0 && y != 0) {
      System.out.println("Eixo Y");
    } else if (x > 0 && y > 0) {
      System.out.println("Q1");
    } else if (x < 0 && y > 0) {
      System.out.println("Q2");
    } else if (x < 0 && y < 0) {
      System.out.println("Q3");
    } else if (x > 0 && y < 0) {
      System.out.println("Q4");
    } else {
      System.out.println("Origem");
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1041
// Ranking 09230º, Time 0.154, Submiss Date 12/02/2023 23:33:58 (Java 14)