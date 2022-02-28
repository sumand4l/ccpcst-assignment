import java.io.*;

class Q17 {

  public static void main(String args[]) {
    String str1, str2;
    BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));
    try {
      System.out.println("Enter first string : ");
      str1 = ad.readLine();
      System.out.println("Enter second string : ");
      str2 = ad.readLine();
      str1 = str1 + str2;
      str2 = str1.substring(0, str1.length() - str2.length());
      str1 = str1.substring(str2.length());
      System.out.println("After Swap : " + str1 + " " + str2);
    } catch (Exception e) {
      System.err.print(e);
    }
  }
}
