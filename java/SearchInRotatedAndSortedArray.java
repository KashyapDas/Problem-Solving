import java.util.Scanner;
public class SearchInRotatedAndSortedArray {

    // Function that will find the pivot index in array where pivot is the max element
    protected int pivotIndex(int arr[], int n)
    {
        int st =0, ed = n-1;
        int mid = (st+ed)/2;
        while(st<=ed)
        {   
            // handle the single element case
            if(st==ed) return st;
            // handle the other case
            if(arr[mid]>arr[mid+1] && mid+1<n){
                return mid;
            }
            else if(arr[mid]<arr[mid-1] && mid-1>=0)
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

    // Function that will do Binary Search in the sorted array
    protected int BinarySearch(int arr[], int st, int ed, int key)
    {   
        int mid = (st+ed)/2;
        while(st<=ed)
        {
            if(arr[mid] == key) return mid;
            else if(arr[mid]<key) st = mid +1;
            else ed = mid-1;
            mid = (st+ed)/2;
        }
        return -1;
    }

    // Function that will tell if the element is present in array or not
    protected int SortedArray(int arr[], int n, int k)
    {
        int pivot = pivotIndex(arr, n);
        int ans = -1;
        if(k>=arr[0] && k<=arr[pivot]){
            ans = BinarySearch(arr,0,pivot,k);
        }
        else{
            ans = BinarySearch(arr,pivot+1, n-1,k);
        }

        return ans;
    }
    public static void main(String[] args) {
        int arr[] = {12,14,16,2,4,6,8,10};
        int n = 8;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the target : ");
        int target = sc.nextInt();
        SearchInRotatedAndSortedArray s1 = new SearchInRotatedAndSortedArray();
        int result = s1.SortedArray(arr,n,target);
        if(result<0) System.out.print("Element not found...");
        else System.out.println("Element found at index : "+result);
        sc.close();
    }
}
