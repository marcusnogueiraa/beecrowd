import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int begin = sc.nextInt();
    int end = sc.nextInt();

    if (end > begin) {
      System.out.printf("O JOGO DUROU %d HORA(S)\n", end - begin);
    } else {
      System.out.printf("O JOGO DUROU %d HORA(S)\n", 24 - begin + end);
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1046
// Ranking 08670º, Time 0.272, Submiss Date 12/02/2023 23:56:12 (Java 14)