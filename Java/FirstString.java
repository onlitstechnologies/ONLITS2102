import java.util.Scanner;
public class FirstString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name;
        System.out.print("Enter your name: ");
        //name = sc.next();               //single word string
        name = sc.nextLine();             //multi word string
        System.out.println("Good afternoon! " + name);
        sc.close();
    }
}