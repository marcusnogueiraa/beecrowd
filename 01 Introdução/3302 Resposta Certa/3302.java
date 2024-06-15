import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int cases = sc.nextInt();
    int resposta;
    for (int i = 0; i < cases; i++){
      resposta = sc.nextInt();
      System.out.printf("resposta %d: %d\n", i+1, resposta);
    }
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3302
// Ranking 00141º, Time 0.798, Submiss Date 12/04/2023 10:52:09 (Java 14)