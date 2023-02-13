import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    double salary = sc.nextDouble();

    if (2000 > salary) {
      System.out.println("Isento");
    } else if (3000 >= salary) {
      System.out.printf("R$ %.2f\n", 0.08 * (salary - 2000));
    } else if (4500 >= salary) {
      System.out.printf("R$ %.2f\n", (salary - 3000) * 0.18 + 0.08 * 1000);
    } else {
      System.out.printf("R$ %.2f\n", (salary - 4500) * 0.28 + 1500 * 0.18 + 0.08 * 1000);
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1051
// Ranking 07147º, Time 0.347, Submiss Date 12/02/2023 23:59:31 (Java 14)