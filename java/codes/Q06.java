class Color {

  String r;
  String b;

  Color() {
    r = "red";
    b = "blue";
  }

  //return instance of Color
  Color getColor() {
    return this;
  }

  void showColor() {
    System.out.println("r = " + r + "\nb = " + b);
  }
}

class Q06 {

  public static void main(String[] args) {
    Color ob = new Color();
    ob.getColor().showColor();
  }
}
