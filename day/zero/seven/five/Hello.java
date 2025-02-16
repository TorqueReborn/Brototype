package day.zero.seven.five;

public class Hello {
    public static void main(String[] args) {
        
        Sample s1 = new Sample();
        Sample s2 = new Sample();

        s1.a = 10;
        s1.b = 20;
        s2.a = 15;
        s2.b = 25;

        System.out.println("S1 - a: " + s1.a);
        System.out.println("S1 - b: " + s1.b);
        System.out.println("S2 - a: " + s2.a);
        System.out.println("S2 - b: " + s2.b);

    }
}
