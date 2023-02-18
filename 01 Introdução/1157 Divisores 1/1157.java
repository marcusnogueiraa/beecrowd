import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    for (int i = 1; i <= num; i++) {
      if (num % i == 0) {
        System.out.println(i);
      }
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1157
// Ranking 04196º, Time 0.450, Submiss Date 13/02/2023 15:52:56 (Java 14)