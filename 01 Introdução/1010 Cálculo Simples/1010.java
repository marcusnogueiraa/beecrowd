import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    sc.next();
    int quantityPiece1 = sc.nextInt();
    double valuePiece1 = sc.nextDouble();

    sc.next();
    int quantityPiece2 = sc.nextInt();
    double valuePiece2 = sc.nextDouble();

    System.out.printf("VALOR A PAGAR: R$ %.2f\n",
        quantityPiece1 * valuePiece1 + quantityPiece2 * valuePiece2);
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1010
// Ranking 22489º, Time 0.625, Submiss Date 12/02/2023 22:33:31 (Java 14)