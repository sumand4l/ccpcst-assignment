abstract class Employee {
    String ename;
    int eid, sal;
    Employee (String ename, int eid, int sal) {
        this.ename = ename;
        this.eid = eid;
        this.sal = sal;
    }
    String getName () { return ename; };
    int getEid () { return eid; };
    int getSal () { return sal; };
}

class InfoEmp extends Employee {
    InfoEmp (String e, int i, int s) { super(e, i, s); };
}

class Q05 {
    public static void main (String[] args) {
        InfoEmp ob1 = new InfoEmp("Biden", 2021, 50000);
        InfoEmp ob2 = new InfoEmp("JP", 2022, 60000);
        InfoEmp ob3 = new InfoEmp("Kim", 2022, 25000);
        
        System.out.println("Name\tEmployee ID\tSalary");
        System.out.println(ob2.getName()+"\t"+ob2.getEid()+"\t\t"+ob2.getSal());  
        System.out.println(ob3.getName()+"\t"+ob3.getEid()+"\t\t"+ob3.getSal()); 
        System.out.println(ob1.getName()+"\t"+ob1.getEid()+"\t\t"+ob1.getSal());  
    }
}