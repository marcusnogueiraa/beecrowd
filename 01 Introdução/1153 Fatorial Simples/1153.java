import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int number = sc.nextInt();

    int fact = 1;

    for (int i = 1; i <= number; i++) {
      fact = fact * i;
    }

    System.out.println(fact);

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1153
// Ranking 04393º, Time 0.117, Submiss Date 13/02/2023 15:45:33 (Java 14)