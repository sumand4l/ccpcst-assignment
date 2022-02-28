import java.io.*;

class Average {

  //for user input
  BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));

  public void calAvg() {
    try {
      System.out.print("Enter 1st Integer Number: ");
      int a = Integer.parseInt(ad.readLine());
      System.out.print("Enter 2nd Integer Number: ");
      int b = Integer.parseInt(ad.readLine());
      System.out.print("Enter 3rd Integer Number: ");
      int c = Integer.parseInt(ad.readLine());
      int avg = (a + b + c) / 3;
      System.out.print("Average of Three Numbers: " + avg);
    } catch (Exception e) {
      System.err.println(e);
    }
  }
}

class Q01 {

  public static void main(String[] args) {
    Average ob = new Average();
    ob.calAvg();
  }
}
