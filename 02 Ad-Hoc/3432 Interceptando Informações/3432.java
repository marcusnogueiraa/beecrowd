import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int inp;
        boolean falha = false;
        for (int i = 0; i < 8; i++) {
            inp = scanner.nextInt();
            if (inp == 9) {
                falha = true;
                break;
            }
        }
        if (falha)
            System.out.println("F");
        else
            System.out.println("S");
        scanner.close();
    }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3432
// Ranking 00003º, Time 0.183, Submiss Date 29/05/2023 03:45:35 (C99)