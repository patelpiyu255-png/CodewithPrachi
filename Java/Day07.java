import java.util.Scanner;

public class Day07 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];
        int count = 0;

        System.out.println("Enter 5 values:");

        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < 5; i++) {
            if (arr[i] % 2 != 0) {
                count++;
            }
        }

        System.out.println("Total Odd Number: " + count);

        sc.close();
    }
}