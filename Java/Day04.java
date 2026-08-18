public class Day04 {
    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 5};
        int n = 5;

        int total = 0;
        int arraySum = 0;

        // Sum of 1 to n
        for (int i = 1; i <= n; i++) {
            total = total + i;
        }

        // Sum of array elements
        for (int i = 0; i < arr.length; i++) {
            arraySum = arraySum + arr[i];
        }

        int missing = total - arraySum;

        System.out.println("Missing number = " + missing);
    }
}