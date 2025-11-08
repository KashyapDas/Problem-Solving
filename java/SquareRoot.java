import java.util.Scanner;;
public class SquareRoot {
    
    protected int SquareRootBinarySearch(int n)
    {
        int st=0, ed=n;
        int mid = (st+ed)/2;
        int ans = -1;
        while(st<=ed)
        {
            if(mid*mid == n) return mid;
            else if(mid*mid < n){
                ans = mid;
                st = mid +1;
            }
            else{
                ed = mid -1;
            }
            mid = (st+ed)/2;
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no : ");
        int n = sc.nextInt();
        SquareRoot sc1 = new SquareRoot();
        int result = sc1.SquareRootBinarySearch(n);
        if(result<0) System.out.println("Donot enter the negative value...");
        else System.out.println("The square of the "+n+" is : "+result);

        sc.close();
    }    
}
