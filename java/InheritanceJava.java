import java.util.Scanner;
// Hierarchial Inheritance
class Person{
    // data member
    protected String name;
    protected int age;
    protected String gender;
    protected String email;
    protected String password;
    // member functions
    protected void printDetails()
    {
        System.out.println("Name : "+name+" Age : "+age+" Gender : "+gender+" Email : "+email+" Password : "+password);
    }
}

class Man extends Person{
    protected Man(String name, int age, String email, String gender, String passwword)
    {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.email = email;
        this.password = passwword;
    }
}

class Women extends Person{
    protected Women(String name, int age, String email, String gender, String passwword)
    {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.email = email;
        this.password = passwword;
    }
}

public class InheritanceJava{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Man male = new Man("Kashyap Jyoti Das",22,"Male","kashyapdas2234@gmail.com","Kashyap123@");
        
        Women female = new Women("Priya Das",21,"Female","priyadas123%@gmail.com","Priya237@");

        male.printDetails();
        female.printDetails();

        sc.close();
    }
}
