import java.io.*;

class Q12 {

  static boolean isPalindrome(String str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
      if (str.charAt(i) != str.charAt(j)) return false;
      i++;
      j--;
    }
    return true;
  }

  public static void main(String[] args) {
    BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));
    try {
      System.out.println("Enter a String: ");
      String str = ad.readLine();

      str = str.toLowerCase();

      if (isPalindrome(str)) System.out.print(
        "Palindrom: Yes"
      ); else System.out.print("Palindrom: No");
    } catch (Exception e) {
      System.err.print(e);
    }
  }
}
