public class Q10 {

  public static void main(String[] args) {
    int r = 2;
    int c = 4;
    int[][] arr1 = { { 6, 2, 1, 0 }, { -4, 7, 5, 13 } };
    int[][] arr2 = { { 10, 20, -20, 5 }, { 6, 7, 1, 0 } };

    int[][] sum = new int[r][c];
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        sum[i][j] = arr1[i][j] + arr2[i][j];
      }
    }

    System.out.println("Sum of two dimentional arrays is: ");
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        System.out.print(sum[i][j] + "    ");
      }
      System.out.println();
    }
  }
}
