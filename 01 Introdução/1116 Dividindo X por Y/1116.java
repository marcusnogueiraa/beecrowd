import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    for (int i = 0; i < n; i++) {
      int num = sc.nextInt();
      int dem = sc.nextInt();

      if (dem == 0) {
        System.out.println("divisao impossivel");
      } else {
        System.out.println((float) num / dem);
      }
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1116
// Ranking 03986º, Time 0.692, Submiss Date 13/02/2023 15:26:45 (Java 14)