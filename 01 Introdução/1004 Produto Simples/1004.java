import java.util.Scanner;

class Main {

  public static void main(String args[]) {

    Scanner sc = new Scanner(System.in);
    int A = sc.nextInt();
    int B = sc.nextInt();
    System.out.println("PROD = " + (A * B));
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1004
// Ranking 24347º, Time 0.126, Submiss Date 12/02/2023 22:08:54 (Java 14)