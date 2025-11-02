// Implement selection Sort in java
// Time complexity is => O(n^2)
// It select the minimum element from the array an push it the ith index
import java.util.Scanner;
public class SelectionSort {
    public void selectionSorting(int arr[], int size)
    {
        for(int i=0; i<=size-2; i++)
        {
            for(int j=i+1; j!=size; j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp; 
                }
            }
        }   
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.print("Enter the element in the array : ");
        for(int i=0; i<size; i++)
        {
            arr[i] = sc.nextInt();
        }
        SelectionSort s1 = new SelectionSort();
        s1.selectionSorting(arr,size);
        for(int i=0; i<size; i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        sc.close();
    }
}