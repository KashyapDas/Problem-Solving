import java.util.Scanner;

interface Mother{
    String hairColor = "Black";
    int legs = 2;
    int hands = 2;
    String bodySize = "slim";
    void printDetails();
}

interface Father{
    String hairColor = "Brown";
    int legs = 2;
    int hands = 2;
    String bodySize = "fat";
    void printDetails();
}

class Child implements Mother, Father{
    String childHairColor = Mother.hairColor;
    String childBodySize = Father.bodySize;

    public void printDetails(){
        System.out.println("Hair Color : "+childHairColor);
        System.out.println("Body Size : "+childBodySize);
        System.out.println("Hands : "+Mother.hands);
        System.out.println("Legs : "+Father.legs);
    }
    
}


public class InterfaceJava{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Child c1 = new Child();
        c1.printDetails();
        
        sc.close();        
    }
}