// Implement Selection Sort in java
// Time complexity => O(n^2)
// Take an element an puts in its correct order
import java.util.Scanner;;
public class InsertionSort {
    public void insertionSorting(int arr[], int size)
    {
        for(int i=1; i<size; i++)
        {
            for(int j=i; j>0; j--)
            {
                if(arr[j-1]>arr[j]){
                    int temp = arr[j-1];
                    arr[j-1]=arr[j];
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
        InsertionSort i1 = new InsertionSort();
        i1.insertionSorting(arr,size);
        for(int i=0; i<size; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        sc.close();
    }
}
