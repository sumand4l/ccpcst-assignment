import java.io.*;

class Q14 {

  public static void main(String args[]) {
    BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));
    String str;
    int vow = 0;
    int cons = 0;
    try {
      System.out.println("Enter a string : ");

      str = ad.readLine();
      int len = str.length();

      for (int i = 0; i < len; i++) {
        if (
          str.charAt(i) == 'a' ||
          str.charAt(i) == 'e' ||
          str.charAt(i) == 'i' ||
          str.charAt(i) == 'o' ||
          str.charAt(i) == 'u'
        ) {
          vow++;
        } else {
          cons++;
        }
      }
      System.out.println("Vowels : " + vow);
      System.out.println("Consonants : " + cons);
    } catch (Exception e) {
      System.out.print(e);
    }
  }
}
