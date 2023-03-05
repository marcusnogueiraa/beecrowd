import java.util.Scanner;

class Main {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int hora1 = sc.nextInt();
    int min1 = sc.nextInt();
    int hora2 = sc.nextInt();
    int min2 = sc.nextInt();

    int horas = 0;
    int minutos = 0;

    if (hora1 == hora2 && min1 == min2) {
      horas = 24;
    } else if (hora1 == hora2) {
      if (min1 < min2) {
        minutos = min2 - min1;
      } else if (min1 > min2) {
        horas = 23;
        minutos = 60 - (min1 - min2);
      }
    } else if (hora1 < hora2) {
      if (min1 == min2) {
        horas = hora2 - hora1;
      } else {
        horas = hora2 - hora1 - 1;
        minutos = (60 - min1) + min2;
        if (minutos > 59) {
          minutos = minutos - 60;
          horas++;
        }
      }
    } else {
      if (min1 == min2) {
        horas = 24 - hora1 + hora2;
      } else {
        horas = 23 - hora1 + hora2;
        minutos = (60 - min1) + min2;
        if (minutos > 59) {
          minutos = minutos - 60;
          horas++;
        }
      }
    }

    System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1047
// Ranking 06190º, Time 0.314, Submiss Date 05/03/2023 03:09:32 (Java 14)