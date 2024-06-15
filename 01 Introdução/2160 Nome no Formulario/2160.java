import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String name = sc.nextLine();
    if (80 >= name.length()) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2160
// Ranking 00637º, Time 0.213, Submiss Date 01/04/2023 20:27:50 (Java 14)
