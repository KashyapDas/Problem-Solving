public class PivotElement {
    
    protected int PivotElemBinarySearch(int arr[], int n)
    {
        int st=0, ed = n-1;
        int mid = (st+ed)/2;
        while (st<=ed) {
            // handle single case
            if(st==ed) return st;
            // handle the other case
            if(mid+1<n && arr[mid]>arr[mid-1])
            {
                return mid;
            }
            else if(mid-1>=0 && arr[mid]<arr[mid-1])
            {
                return mid-1;
            }
            else if(arr[0] > arr[mid])
            {
                ed = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {12,14,16,2,4,6,8,10};
        int n = 8;

        PivotElement p1 = new PivotElement();
        int result = p1.PivotElemBinarySearch(arr, n);
        if(result<0) System.out.println("Invalid Input...");
        else System.out.println("The pivot element is : "+arr[result]);


    }
}
