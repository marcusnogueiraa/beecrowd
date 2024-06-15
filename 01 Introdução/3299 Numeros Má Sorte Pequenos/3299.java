import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String num = sc.nextLine();
    Boolean malaSuerte = false;
    for (int i = 1; i < num.length(); i++){
      if (num.charAt(i) == '3' && num.charAt(i-1) == '1') malaSuerte = true;
    }
    if (malaSuerte){ 
      System.out.printf("%s es de Mala Suerte\n", num);
    } else {
      System.out.printf("%s NO es de Mala Suerte\n", num);
    }
    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3299
// Ranking 00044º, Time 0.158, Submiss Date 16/04/2023 12:38:17 (Java 14)