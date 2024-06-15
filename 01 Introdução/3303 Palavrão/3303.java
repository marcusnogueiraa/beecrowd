import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String palavra = sc.nextLine();
    if (palavra.length() >= 10){
      System.out.println("palavrao");
    } else {
      System.out.println("palavrinha");
    }
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3303
// Ranking 00044º, Time 0.122, Submiss Date 16/04/2023 14:21:32 (Java 14)