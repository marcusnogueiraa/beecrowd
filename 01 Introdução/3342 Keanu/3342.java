import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    n = n*n;
    System.out.printf("%d casas brancas e %d casas pretas\n", n / 2 + (n % 2), n / 2);
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3342
// Ranking 00027º, Time 0.137, Submiss Date 12/04/2023 13:45:04 (Java 14)