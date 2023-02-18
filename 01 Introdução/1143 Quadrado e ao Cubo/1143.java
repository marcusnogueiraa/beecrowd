import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    for (int i = 1; i <= num; i++) {
      System.out.printf("%d %d %d\n", i, i * i, i * i * i);
    }

    sc.close();
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1143
// Ranking 04287º, Time 0.197, Submiss Date 13/02/2023 15:59:08 (Java 14)