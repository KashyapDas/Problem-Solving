import java.util.Scanner;
public class NearlySortedArray {

    protected int nearlySortedArray(int arr[], int n, int k)
    {
        int st = 0;
        int ed = n-1;
        int mid = (st+ed)/2;

        while(st<=ed)
        {
            if(arr[mid] == k) return mid;
            else if(arr[mid+1] == k && (mid+1<n)) return mid+1;
            else if(arr[mid-1]==k && (mid-1>=0)) return mid-1;
            else if(arr[mid]<k) st = mid+2;
            else ed = mid-2;
            mid = (st+ed)/2;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the target : ");
        int target = sc.nextInt();
        int arr[] = {20,10,30,50,40,70,60};
        int n = 7;

        NearlySortedArray n1 = new NearlySortedArray();
        int result = n1.nearlySortedArray(arr, n, target);
        if(result<0) System.out.println("No element not found...");
        else System.out.println("ELement found at index : "+result);

        sc.close();
    }
}
