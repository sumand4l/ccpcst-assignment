class Stud {

  private String name, clg, dept;
  private int roll;

  Stud(String name, String clg, String dept, int roll) {
    this.name = name;
    this.clg = clg;
    this.dept = dept;
    this.roll = roll;
  }

  public String getName() {
    return name;
  }

  public String getClg() {
    return clg;
  }

  public String getDept() {
    return dept;
  }

  public int getRoll() {
    return roll;
  }
}

class Q04 {

  public static void main(String[] args) {
    Stud ob = new Stud("Suman", "CCP", "CST", 10005537);
    System.out.println("Student Name: " + ob.getName());
    System.out.println("Student College: " + ob.getClg());
    System.out.println("Student Department: " + ob.getDept());
    System.out.println("Student Roll: " + ob.getRoll());
  }
}
