class Employee {
    String name, address;
    int year, salary;
    public Employee(String n, int y, int sal, String add){
      name = n;
      year = y;
      salary = sal;
      address = add;
    }
    public String getName() {
      return name;
    }
    public int getYear() {
      return year;
    }
    public int getSalary() {
      return salary;
    }
    public String getAddress() {
      return address;
    }
  }
  
  class Q03 {
    public static void main(String[] args){
      Employee e1 = new Employee("Luffy", 2015, 25000, "24 Pirate Ship");
      Employee e2 = new Employee("Eren", 2000, 36000, "36 Panchanantala");
      Employee e3 = new Employee("Rin", 1999, 90000, "65 Neregachia");

      System.out.println("Name\tYear of joining\tSalary\tAddress");
      System.out.println(e1.getName()+"\t"+e1.getYear()+"\t\t"+e1.getSalary()+"\t"+e1.getAddress());  
      System.out.println(e2.getName()+"\t"+e2.getYear()+"\t\t"+e2.getSalary()+"\t"+e2.getAddress());  
      System.out.println(e3.getName()+"\t"+e3.getYear()+"\t\t"+e3.getSalary()+"\t"+e3.getAddress());  
    }
  }