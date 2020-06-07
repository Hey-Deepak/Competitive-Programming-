public class Pattern1 {
    public static void main(String[] args) {
        int n =10;
        System.out.println("*");
        if (n >= 2) {
            for (int i = 2; i < n; i++) {
                System.out.print("*");
                for (int j = 2; j < i; j++) {
                    System.out.print(" ");
                }
                System.out.print("*");
                System.out.println("");
            }
        }
        if (n == n) {
            for (int i = 0; i < n; i++)
                System.out.print("*");
        }
    }
}
