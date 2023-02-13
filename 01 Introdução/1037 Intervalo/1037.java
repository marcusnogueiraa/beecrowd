import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    double interval = sc.nextDouble();

    if (25 >= interval && interval >= 0) {
      System.out.println("Intervalo [0,25]");
    } else if (50 >= interval && interval > 25) {
      System.out.println("Intervalo (25,50]");
    } else if (75 >= interval && interval > 50) {
      System.out.println("Intervalo (50,75]");
    } else if (100 >= interval && interval > 75) {
      System.out.println("Intervalo (75,100]");
    } else {
      System.out.println("Fora de intervalo");
    }

    sc.close();

  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1037
// Ranking 09856º, Time 0.137, Submiss Date 12/02/2023 22:58:45 (Java 14)