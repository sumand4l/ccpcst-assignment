import java.io.*;

class Q15 {

  public static void main(String args[]) {
    String str, mystr;
    BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));
    try {
      System.out.println("Enter a String : ");
      str = ad.readLine();
      mystr = str.replaceAll(" ", "");
      System.out.println("New String is: " + mystr);
    } catch (Exception e) {
      System.err.print(e);
    }
  }
}
