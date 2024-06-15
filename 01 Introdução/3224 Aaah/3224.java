import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String jon = sc.nextLine();
    String medico = sc.nextLine();
    if (medico.length() > jon.length()) System.out.println("no");
    else System.out.println("go");
    sc.close();
  }
}


// https://www.beecrowd.com.br/judge/pt/problems/view/3224
// Ranking 00011º, Time 0.154, Submiss Date 16/04/2023 12:25:38 (Java 14)