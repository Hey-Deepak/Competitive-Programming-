import java.util.Scanner;

public class JavaStaticInitializerBlock {

    public static int B;
    public static int H;
    public static boolean flag;
    static {
        Scanner scanner = new Scanner(System.in);
        B = scanner.nextInt();
        H = scanner.nextInt();
        if (B <= 0 || H <= 0) {
            System.out.println("java.lang.Exception: Breadth and height must be positive");
            flag = false;
        } else flag = true;
    }

    public static void main(String[] args) {
        if (flag) {
                int area = B * H;
                System.out.print(area);
            }
    }
}
