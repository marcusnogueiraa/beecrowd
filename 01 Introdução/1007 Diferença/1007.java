import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int A = sc.nextInt();
    int B = sc.nextInt();
    int C = sc.nextInt();
    int D = sc.nextInt();

    System.out.printf("DIFERENCA = %d\n", A * B - C * D);
    sc.close();

  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1007
// Ranking 21506º, Time 0.129, Submiss Date 12/02/2023 22:18:26 (Java 14)