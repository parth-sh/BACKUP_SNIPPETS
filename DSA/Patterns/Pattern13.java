/*
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21
*/

public class Pattern13 {
    public static void main(String[] args) {
        int n = 6;
        int count = 1;
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print(count++ + " ");
            }
            System.out.println();
        }
    }
}
