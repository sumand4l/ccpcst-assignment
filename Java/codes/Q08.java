class Q08 {

  public static void main(String[] args) {
    int j = 0;
    int arr[] = { 10, 31, 45, 5, 3, 11 };
    int revarr[] = new int[arr.length];

    System.out.print("Array is: ");
    for (int k = 0; k < arr.length; k++) {
      System.out.print(" " + arr[k]);
    }
    //copy reversed elements to another array
    for (int i = arr.length; i > 0; i--, j++) revarr[j] = arr[i - 1];
    System.out.print("\n");

    System.out.print("Reverse Array is: ");
    for (int l = 0; l < arr.length; l++) {
      System.out.print(" " + revarr[l]);
    }
  }
}
