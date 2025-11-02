// Implement Binary Search in java
import java.util.Scanner;
public class BinarySearch {
    int start;
    int end;
    int mid;
    int target;
    BinarySearch(int start, int end, int target){
        this.start = start;
        this.end = end;
        this.mid = (this.start+this.end)/2;
        this.target = target;
    }
    private int binarySearching(int arr[])
    {
        while(this.start<=this.end)
        {
            if(arr[this.mid] == target) return mid;
            if(arr[this.mid] < target) this.start = this.mid+1;
            else this.end = this.mid-1;
            this.mid = (this.start+this.end)/2;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.print("Enter the element in the array... ");
        for(int i=0; i<size; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.print("Enter the target : ");
        int target = sc.nextInt();
        BinarySearch b1 = new BinarySearch(0,size-1,target);
        int result = b1.binarySearching(arr);
        if(result < 0) System.out.print("Element not found in the array...");
        else System.out.print("Element found at the index : "+result);
        sc.close();
    }    
}
