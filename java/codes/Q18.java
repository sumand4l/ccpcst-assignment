import java.util.*;
   
class Q18
{
    public static void main(String args[ ])
    {
        int j = 0, i;
        Vector vec = new Vector(5,2);

        j =args.length;
        for(i = 0;i < j; i++)
            vec.addElement(args[i]);

        Enumeration vecenum = vec.elements();

        System.out.println("\nItems in Shopping list are:");
        while(vecenum.hasMoreElements())
            System.out.println(vecenum.nextElement() +"   ");
        System.out.println();
    }
}
