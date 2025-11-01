import java.util.Scanner;
public class ArrayELemSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {10,20,30,11,2,4,7,};
        int sum = 0;
        int index = 0;
        while(index<arr.length)
        {
            sum += arr[index];
            index++;
        }
        System.out.print("Sum of element are : "+sum);
        sc.close();
    }
}
