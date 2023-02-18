import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int number = sc.nextInt();
    for (int i = 1; i <= number; i = i + 2) {
      System.out.println(i);
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1067
// Ranking 08688º, Time 0.216, Submiss Date 13/02/2023 13:07:34 (Java 14)