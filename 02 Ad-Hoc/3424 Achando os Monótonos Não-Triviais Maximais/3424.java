import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N, tt = 0;
        boolean as_sqc = false;
        String sqc;
        N = scanner.nextInt();
        sqc = scanner.next();
        for (int i = 0; i < N; i++) {
            if (sqc.charAt(i) == 'a' && !as_sqc) {
                if (sqc.charAt(i + 1) == 'a')
                    tt++;
                as_sqc = true;
            } else if (sqc.charAt(i) == 'a' && as_sqc) {
                tt++;
            } else
                as_sqc = false;
        }
        System.out.println(tt);
        scanner.close();
    }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3424
// Ranking 00001º, Time 0.139, Submiss Date 29/05/2023 04:12:28 (Java 14)
