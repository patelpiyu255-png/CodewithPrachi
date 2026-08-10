import java.util.Scanner;

public class Day02 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int first = sc.nextInt();
        
        System.out.print("Enter second number: ");
        int second = sc.nextInt();

        int sum = first + second;

        System.out.println("Sum: " + sum);

        sc.close();
    }
    
}
