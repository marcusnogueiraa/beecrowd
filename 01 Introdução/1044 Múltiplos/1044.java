import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int A = sc.nextInt();
    int B = sc.nextInt();

    if (A % B == 0 || B % A == 0) {
      System.out.println("Sao Multiplos");
    } else {
      System.out.println("Nao sao Multiplos");
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1044
// Ranking 06156º, Time 0.095, Submiss Date 12/02/2023 23:52:54 (Java 14)