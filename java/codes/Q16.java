import java.io.*;

class Q16 {

  public static void main(String args[]) {
    String str;
    int len = 0;
    BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));
    try {
      System.out.print("Enter a String: ");
      str = ad.readLine();

      char[] arr = str.toCharArray();
      System.out.println("Duplicate Characters are:");
      for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
          if (arr[i] == arr[j]) {
            System.out.print(arr[j] + " ");
            len++;
            break;
          }
        }
      }
    } catch (Exception e) {
      System.err.print(e);
    }
  }
}

