import java.util.*;
class AreaOfCircle {
    public static void main(String[] args) {
        float r, a;
        final float PI = 3.14F;
        Scanner sc = new Scanner(System.in);        
        System.out.print("Enter radius: ");
        r = sc.nextFloat();
        a = PI * r * r;
        System.out.println("The area is " + a + " sq. units.");
    }
}