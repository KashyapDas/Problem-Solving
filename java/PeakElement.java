public class PeakElement{
    public int findPeakElem(int arr[], int n)
    {
        int st =0, ed=n-1;
        int mid = (st+ed)/2;
        while (st<ed) {
            if(arr[mid]<arr[mid+1])
            {
                st = mid+1;
            }
            else{
                ed = mid;
            }
            mid = (st+ed)/2;
        }
        return ed;
    }

    public static void main(String[] args) {
        int arr[] = {10,20,50,40,30};
        int n = 5;
        PeakElement p1 = new PeakElement();
        int peakElement = p1.findPeakElem(arr, n);
        System.out.println("The peak element is : "+arr[peakElement]);
    }
}