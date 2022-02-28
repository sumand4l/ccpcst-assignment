class Q09 {

  public static void main(String[] args) {
    int arr1[] = { 100, 200, 300, 400, 500 };
    int arr2[] = { 10, 20, 30, 40, 50 };
    int p = arr1.length;

    System.out.print("1st array: ");
    for (int i = 0; i < p; i++) System.out.print(" " + arr1[i]);

    System.out.print("\n");
    System.out.print("2nd array: ");
    for (int j = 0; j < p; j++) System.out.print(" " + arr2[j]);

    System.out.print("\n");
    int sum[] = new int[p];
    int sub[] = new int[p];
    int mul[] = new int[p];
    int div[] = new int[p];

    for (int k = 0; k < p; k++) {
      sum[k] = arr1[k] + arr2[k];
      sub[k] = arr1[k] - arr2[k];
      mul[k] = arr1[k] * arr2[k];
      div[k] = arr1[k] / arr2[k];
    }
    System.out.print("\n");

    System.out.print("Addition of Arrays is: ");
    for (int i = 0; i < p; i++) System.out.print(" " + sum[i]);
    System.out.print("\n");

    System.out.print("Subtraction of Arrays is: ");
    for (int i = 0; i < p; i++) System.out.print(" " + sub[i]);
    System.out.print("\n");

    System.out.print("Multiplication of Arrays is: ");
    for (int i = 0; i < p; i++) System.out.print(" " + mul[i]);
    System.out.print("\n");

    System.out.print("Division of Arrays is: ");
    for (int i = 0; i < p; i++) System.out.print(" " + div[i]);
    System.out.print("\n");
  }
}
