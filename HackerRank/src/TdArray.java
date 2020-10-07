public class TdArray {

    public static void main(String[] args) {

        int[][] a = {{1, 1},
                {2, 2}};
        int[][] b = {{1, 1},
                {2, 2}};

        Exp exp = new Exp();
        int[][] sum = exp.Test(a, b);
        for (int i = 0; i < sum.length; i++) {
            for (int j = 0; j < sum[i].length; j++) {
                System.out.print(" " + sum[i][j] + "  ");
            }
            System.out.println("");
        }

    }
}

class Exp {
    public int[][] Test(int[][] a, int[][] b) {
        int[][] newArr = new int[a.length][a[0].length];
        for (int i = 0; i < newArr.length; i++) {
            for (int j = 0; j < newArr[i].length; j++) {
                newArr[i][j] = a[i][j] + b[i][j];
            }
        }
        return newArr;
    }
}
