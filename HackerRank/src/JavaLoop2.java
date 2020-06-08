import java.util.Scanner;

public class JavaLoop2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            int s = (int) (a + Math.pow(2, 0) * b);
            System.out.print(s + " ");
            for (int j = 1; j < n; j++) {
                s += (int) Math.pow(2, j) * b;
                System.out.print(s + " ");
            }
            System.out.println("");
        }
        in.close();
    }
}
