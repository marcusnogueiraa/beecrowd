import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int A, B, C;
    Scanner sc = new Scanner(System.in);
    A = sc.nextInt();
    B = sc.nextInt();
    C = sc.nextInt();
    if (A > B && C >= B) {
      System.out.println(":)");
    } else if (B > A && B >= C) {
      System.out.println(":(");
    } else if (C > B && B > A && C - B < B - A) {
      System.out.println(":(");
    } else if (C > B && B > A && C - B >= B - A) {
      System.out.println(":)");
    } else if (A > B && B > C && B - C < A - B) {
      System.out.println(":)");
    } else if (A > B && B > C && B - C >= A - B) {
      System.out.println(":(");
    } else if (A == B && C > B) {
      System.out.println(":)");
    } else {
      System.out.println(":(");
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1847
// Ranking 00964º, Time 0.186, Submiss Date 01/04/2023 19:28:37 (Java 14)
