package OperatorDemo.java;

public class OperatorDemo {

    int a = 11;
    int b = 22;
    int c = 15;

    public void findIncrement() {
        if (a < b) {
            c++;
            System.out.println("a < b is TRUE, c incremented: " + c);
        }
    }

    public void findDecrement() {
        if (c > 0) {
            c--;
            System.out.println("c > 0 is TRUE, c decremented: " + c);
        } else {
            c = 3;
            System.out.println("c = 3");
        }
    }

    public void displayOutput() {
        System.out.println("\n--- FINAL OUTPUT ---");
        System.out.println("Variable a = " + a);
        System.out.println("Variable b = " + b);
        System.out.println("Variable c = " + c);
    }

    public static void main(String[] args) {
        OperatorDemo demo = new OperatorDemo();

        System.out.println("Starting values: a=11, b=22, c=15");
        System.out.println("--------------------------");

        demo.findIncrement();
        demo.findDecrement();
        demo.displayOutput();
    }
}