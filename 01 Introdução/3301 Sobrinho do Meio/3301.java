import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    int H, Z, L;
    Scanner sc = new Scanner(System.in);
    H = sc.nextInt();
    Z = sc.nextInt();
    L = sc.nextInt();
    if ((H > Z && H < L) || (H > L && H < Z)){
      System.out.println("huguinho");
    } if ((L > Z && L < H) || (L > H && L < Z)){
      System.out.println("luisinho");
    } if ((Z > H && Z < L) || (Z > L && Z < H)){
      System.out.println("zezinho");
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3301
// Ranking 00143º, Time 0.386, Submiss Date 12/04/2023 13:54:28 (Java 14)