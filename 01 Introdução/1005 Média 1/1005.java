import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    double A = sc.nextDouble();
    double B = sc.nextDouble();

    System.out.printf("MEDIA = %.5f\n", (A * 3.5 + B * 7.5) / 11);
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1005
// Ranking 24953º, Time 0.223, Submiss Date 12/02/2023 22:11:22 (Java 14)