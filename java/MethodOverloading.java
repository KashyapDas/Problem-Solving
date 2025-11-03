import java.util.Scanner;
// Compile Time Polymorphism
class Operation{
    protected int add(int a, int b){
        return (a+b);
    }
    protected double add(double a, double b){
        return (a+b);
    }
    protected int add(int a, int b, int c){
        return (a+b+c);
    }
}

public class MethodOverloading {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Operation op1 = new Operation();
        int r1 = op1.add(10, 20);
        int r2 = op1.add(10, 20, 30);
        double r3 = op1.add(10.5, 20.5);
        System.out.println(r1);
        System.out.println(r2);
        System.out.println(r3);
        sc.close();
    }
}
