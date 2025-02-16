package day.zero.eight.seven;

public class B extends A {

    void display(){
        System.out.println("This is class B display!");
    }

    void displayAClass(){
        super.display();
    }

    public static void main(String[] args) {
        B b = new B();
        b.display();
        b.displayAClass();
    }
}
