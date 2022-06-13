import java.io.*;

class Q13 {

  public static void main(String[] args) {
    BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));
    try {
      String str;
      System.out.println("Enter the string : ");
      str = ad.readLine();
      int len = 0;
      for (int i = 0; i < str.length(); i++) {
        if (str.charAt(i) != ' ') len++;
      }
      System.out.println("Total Number of Character : " + len);
    } catch (Exception e) {
      System.out.print(e);
    }
  }
}
