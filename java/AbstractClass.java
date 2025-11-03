import java.util.Scanner;

abstract class Shape{
    private String color;

    protected void setData(String color)
    {   
        this.color = color;
    }
    protected String getData(){
        return color;
    }
}

class Traingle extends Shape{
    
}

public class AbstractClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for(int i=0; i<3; i++)
        {
            Traingle t1 = new Traingle();
            System.out.print("Enter the color of the Traingle : ");
            String color = sc.nextLine();
            t1.setData(color);
            String result = t1.getData();        
            System.out.println("The color of this traingle is : "+result);
        }
        sc.close();
    }
}
