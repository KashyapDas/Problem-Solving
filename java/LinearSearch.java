import java.util.Scanner;

public class LinearSearch {

    private int Searching(int arr[], int target)
    {
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i] == target) return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.print("Enter the element to enter the array : ");
        for(int i=0; i<arr.length; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.print("Enter the target : ");
        int target = sc.nextInt();
        LinearSearch l1 = new LinearSearch();

        int result = l1.Searching(arr, target);
        if(result <0) System.out.println("Element not found...");
        else System.out.println("Element found at index : "+result);
        sc.close();
    }
}
