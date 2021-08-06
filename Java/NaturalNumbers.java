import java.util.Scanner;
public class NaturalNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        for(int i=1; i<=n; i++) {
            System.out.print(i + " ");
        }
        System.out.println();
        sc.close();
    }
}