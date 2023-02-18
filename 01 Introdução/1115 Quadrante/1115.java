import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int x = sc.nextInt();
    int y = sc.nextInt();

    while (x != 0 && y != 0) {

      if (x > 0 && y > 0) {
        System.out.println("primeiro");
      } else if (x < 0 && y > 0) {
        System.out.println("segundo");
      } else if (x < 0 && y < 0) {
        System.out.println("terceiro");
      } else if (x > 0 && y < 0) {
        System.out.println("quarto");
      }
      x = sc.nextInt();
      y = sc.nextInt();
    }
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1115
// Ranking 05201º, Time 0.177, Submiss Date 13/02/2023 11:16:24 (Java 14)