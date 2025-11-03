import java.util.Scanner;
// Run-time polymorphism

class Animal{
    protected void gender(){
        System.out.println("Animal class executed...");
    }  
}

class Dog extends Animal{
    protected void gender(){
        System.out.println("Dog clas executed....");
        super.gender();
        
    }
    
}

public class MethodOveridding {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Dog d = new Dog();
        Animal a = new Animal();
        d.gender();
        a.gender();

        sc.close();
    }
}
