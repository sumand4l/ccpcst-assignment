import java.io.*;

class Complex {

  BufferedReader ad = new BufferedReader(new InputStreamReader(System.in));
  int r1, r2;
  int img1, img2;

  public void getData() {
    try {
      System.out.print("Enter Real Part of 1st Number: ");
      r1 = Integer.parseInt(ad.readLine());
      System.out.print("Enter Imaginary Part of 1st Number: ");
      img1 = Integer.parseInt(ad.readLine());
      System.out.print("Enter Real Part of 2nd Number: ");
      r2 = Integer.parseInt(ad.readLine());
      System.out.print("Enter Imaginary Part of 2nd Number: ");
      img2 = Integer.parseInt(ad.readLine());
    } catch (Exception e) {
      System.err.println(e);
    }
  }

  public void showData() {
    System.out.println("1st Number: " + r1 + "+" + img1 + "i");
    System.out.println("2nd Number: " + r2 + "+" + img2 + "i");
  }

  public void addition() {
    int sumReal = r1 + r2;
    int sumImg = img1 + img2;
    System.out.println("Addition is: " + sumReal + "+" + sumImg + "i");
  }

  public void subtraction() {
    int subReal = r1 - r2;
    int subImg = img1 - img2;
    System.out.println("Subtraction is: " + subReal + "+" + subImg + "i");
  }

  public void multi() {
    int mul1 = r1 * r2 + (img1 * img2 * (-1));
    int mul2 = r1 * img2 + r2 * img1;
    System.out.println("Product is: " + mul1 + "+" + mul2 + "i");
  }
}

class Q02 {

  public static void main(String[] args) {
    Complex ob = new Complex();
    ob.getData();
    ob.showData();
    ob.addition();
    ob.subtraction();
    ob.multi();
  }
}
