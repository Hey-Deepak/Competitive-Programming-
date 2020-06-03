import java.util.Scanner;

public class JavaEOF {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        for (int i = 1; scanner.hasNext(); i++){
            System.out.print(i + " " + scanner.nextLine());
        }
    }
}
