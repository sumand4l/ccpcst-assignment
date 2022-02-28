class Q07 {

  public static void main(String[] args) {
    int arr[] = { 10, 31, 45, 5, 3, 11 };
    int sum = 0;

    System.out.print("Array is: ");
    for (int j = 0; j < arr.length; j++) {
      System.out.print(" " + arr[j]);
    }
    System.out.print("\n");
    for (int i = 0; i < arr.length; i++) {
      sum = sum + arr[i];
    }
    System.out.print("Sum of Arrya is: " + sum);
  }
}
