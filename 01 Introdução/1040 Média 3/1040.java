import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    float A = sc.nextFloat();
    float B = sc.nextFloat();
    float C = sc.nextFloat();
    float D = sc.nextFloat();

    float media = (A * 2 + B * 3 + C * 4 + D) / 10;
    String resultado;

    System.out.printf("Media: %.1f\n", media);

    if (media >= 7) {
      resultado = "Aluno aprovado.";
    } else if (7 > media && media >= 5) {
      resultado = "Aluno em exame.";
    } else {
      resultado = "Aluno reprovado.";
    }

    System.out.println(resultado);

    if (resultado == "Aluno em exame.") {
      float notaDoExame = sc.nextFloat();
      System.out.printf("Nota do exame: %.1f\n", notaDoExame);
      media = (media + notaDoExame) / 2;
      if (media >= 5) {
        System.out.println("Aluno aprovado.");
      } else {
        System.out.println("Aluno reprovado.");
      }
      System.out.printf("Media final: %.1f\n", media);
    }

    sc.close();
  }
}