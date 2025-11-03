import java.util.Scanner;

class Calculate<T>{
    private T number;

    protected void setData(T number){
        this.number = number;
    }
    protected T getData(){
        return number;
    }
}

public class GenericPrograming {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Input the number : ");
        int no = sc.nextInt();
        Calculate<Integer> c1 = new Calculate<Integer>();
        c1.setData(no);
        System.out.println(c1.getData());
        sc.close();

    }    
}
