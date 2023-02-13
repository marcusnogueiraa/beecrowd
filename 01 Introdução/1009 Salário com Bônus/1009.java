import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    sc.next();
    sc.nextLine();
    double salary = sc.nextDouble();
    double salesAmount = sc.nextDouble();

    System.out.printf("TOTAL = R$ %.2f\n", salary + 0.15 * salesAmount);

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1009
// Ranking 23813º, Time 0.325, Submiss Date 12/02/2023 22:23:45 (Java 14)