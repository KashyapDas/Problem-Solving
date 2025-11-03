// Constructor
class printData {
    int a = 10;
    int b = 20;
    public printData()
    {
        System.out.println("Sum of 2 number : "+(a+b));
    }
    protected printData(int a, int b)
    {
        this.a = a;
        this.b = b;
        System.out.println("Sum of 2 number : "+(this.a+this.b));
    }
    protected printData(printData D1, int secondVar)
    {
        this.a = D1.a;
        this.b = D1.b;
        System.out.println("Successfully copy the constructor state and behaviour");
        System.out.println("Sum of 2 no from copy constructor : "+(this.a+this.b+secondVar));
    }
    @Override
    protected void finalize()
    {
        System.out.println("Performed cleanup operation...");
    }
    
}
public class ConcstructorJava {
    public static void main(String[] args) {
           printData p1 = new printData();
           printData p2 = new printData(200,300);
           printData p3 = new printData(p2,500);
            p1.finalize();
            p2.finalize();
            p3.finalize();           

    }
}
