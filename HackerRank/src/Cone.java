import java.util.Scanner;

public class Cone {

    public static void main(String[] args) {
        AV obj =new AV();
        Scanner scanner = new Scanner(System.in);
        double a = obj.Area(2,2);
        System.out.println("area " + a);
    }
}

class AV{
    double Area(int a, int b){
        return  a*b;
    }
}