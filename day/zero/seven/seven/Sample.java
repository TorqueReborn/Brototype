package day.zero.seven.seven;

public class Sample {
    public static void main(String[] args) {
        
        Sum sum = new Sum();

        int n1 = 10;
        int n2 = 20;

        int n3 = 15;
        int n4 = 25;

        sum.calculateSum(n1, n2);
        sum.display();

        sum.calculateSum(n3, n4);
        sum.display();

    }
}
