import java.util.Scanner;
public class DivideUsingBS{
    
    protected int DivideBinarySearch(int n, int m)
    {
        int st =0, ed=m;
        int mid = (st+ed)/2;
        int ans = -1;
        while(st<=ed)
        {
            if(n*mid == m) return mid;
            else if(n*mid > m) ed = mid -1;
            else{
                ans = mid;
                st = mid+1;
            }
            mid = (st+ed)/2;
        }
        return ans;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the dividened : ");
        int n = sc.nextInt();
        System.out.print("Enter the divisor : ");
        int m = sc.nextInt();
       DivideUsingBS db1 = new DivideUsingBS();
       int result = db1.DivideBinarySearch(n,m);
        if(result<0) System.out.print("Invalid Input...");
        else System.out.print("Answer will be : "+result);
        sc.close();
    }
}