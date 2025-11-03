import java.util.Scanner;
public class finalizerMethod{
    @Override
    protected void finalize() throws Throwable
    {
        System.out.println("Finalizer call for "+this);
    }
    protected void print()
    {
        System.out.println("Hello from java");
    }
    @SuppressWarnings("NULL")
    public static void main(String[] args) throws Throwable {
        Scanner sc = new Scanner(System.in);
        sc.close();
        finalizerMethod f1 = new finalizerMethod();
        f1.print();
        f1.finalize();
        
    }
}