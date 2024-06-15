import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String levantou;

    while (sc.hasNext()) {
      levantou = sc.nextLine();

      if (levantou.equals("esquerda")) {
        System.out.println("ingles");
      } else if (levantou.equals("direita")) {
        System.out.println("frances");
      } else if (levantou.equals("nenhuma")) {
        System.out.println("portugues");
      } else {
        System.out.println("caiu");
      }
    }
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2850
// Ranking 00220º, Time 0.309, Submiss Date 03/04/2023 01:16:28 (Java 14)