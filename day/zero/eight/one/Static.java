package day.zero.eight.one;

public class Static {
    
    /**
     * b is independant of object
     * Even though many objects are created or is called directly
     * ie s.b = 20 or b = 1000
     * The last value is preserved
     * 
     * Here a is object dependant meaning 
     * Value for a is different for each 
     * Static s = new Static(); (Static is name of this class)
     * ie s1.a can be one value and s2.a can be another
     */

    int a = 10;
    static int b = 20;
    public static void main(String[] args) {
        
        Static s1 = new Static();
        Static s2 = new Static();

        s1.a = 50;
        s2.a = 100;

        s1.b = 50;
        s2.b = 100;

        System.out.println("s1.a: " + s1.a);
        System.out.println("s2.a: " + s2.a);
        System.out.println("s1.b: " + s1.b);
        System.out.println("s2.b: " + s2.b);

    }
}
