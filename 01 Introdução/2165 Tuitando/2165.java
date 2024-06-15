import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String name = sc.nextLine();
    if (140 >= name.length()) {
      System.out.println("TWEET");
    } else {
      System.out.println("MUTE");
    }
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2165
// Ranking 00749º, Time 0.128, Submiss Date 01/04/2023 20:54:17 (Java 14)
