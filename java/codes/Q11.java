import java.io.*;

class Q11 {
    public static void main(String[] args) {
    BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));

    try {
      System.out.print("Enter any String: ");
      String str = ad.readLine();
      System.out.print(
        "You Entered: " +
        str +
        "\n" +
        "Length of the String is: " +
        str.length()
      );
    } catch (Exception e) {
      System.err.print(e);
    }
  }
}
