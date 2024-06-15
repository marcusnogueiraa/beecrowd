import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num_clones;

    while (sc.hasNext()) {
      num_clones = sc.nextInt();
      System.out.println(numJutsu(num_clones));
    }

    sc.close();
  }

  public static int numJutsu(int n) {
    if (n == 1) {
      return 0;
    }
    for (int i = 0; i <= n / 2 + 1; i++) {
      if (Math.pow(2, i) == n) {
        return i;
      }
    }
    return -1;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2544
// Ranking 00317º, Time 0.387, Submiss Date 03/04/2023 00:53:36 (Java 14)