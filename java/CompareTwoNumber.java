import java.util.Scanner;

public class CompareTwoNumber {
    public static void main(String[] args) {
        System.out.println("Enter the numbers");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if(a>=b)
        {
            System.out.println(a+" is the greatest number...");
        }
        else{
            System.out.println(b+" is the greatest number...");
        }
        sc.close();
    }
}
