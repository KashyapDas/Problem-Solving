public class FindOddOcc {

    protected int oddOcc(int arr[], int n)
    {
        int st = 0, ed = n-1;
        int ans = -1;
        int mid = (st+ed)/2;
        while (st<=ed) {
            if(st==ed) return st;
            if(mid%2 == 0) // even
            {
                if(arr[mid]==arr[mid+1]) st =mid+2;
                else{
                    ans = mid;
                    ed = mid -2;
                }
            }
            else{ // odd
                if(arr[mid]==arr[mid-1]) st = mid+1;
                else ed = mid-1;
            }
            mid = (st+ed)/2;
        }
        return ans;
    }
    public static void main(String[] args) {
        int arr[] = {1,2,2,5,5,2,2,3,3,2,2,4,4,10,10};  
        int n = 15;
        FindOddOcc f1 = new FindOddOcc();
        int index =  f1.oddOcc(arr, n);
        if(index<0) System.out.println("No odd occuring element found in the array... ");
        else System.out.println("Odd occurring element is : "+arr[index]); 
    }
}
