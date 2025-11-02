// Implement Bubble sort in java
// Time complexity => O(n^2)
// It push the max element to the last by adjacent swaping
import java.util.Scanner;;
public class BubbleSort {
    public void bubbleSorting(int arr[], int size)
    {
        for(int i=size-1; i>=1; i--)
        {
            for(int j=0; j<i; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
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
        BubbleSort b1 = new BubbleSort();
        b1.bubbleSorting(arr,size);
        for(int i=0; i<size; i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        sc.close();
    }
}
