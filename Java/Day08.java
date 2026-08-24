public class Day08 {
    public static void main(String[] args) {

        int[] arr = {1, 3, 5, 2, 2};
        int n = arr.length;

        for (int i = 0; i < n; i++) {

            int leftSum = 0;
            int rightSum = 0;

            // Calculate left sum
            for (int j = 0; j < i; j++) {
                leftSum = leftSum + arr[j];
            }

            // Calculate right sum
            for (int j = i + 1; j < n; j++) {
                rightSum = rightSum + arr[j];
            }

            if (leftSum == rightSum) {
                System.out.println("Equilibrium Index = " + i);
                System.out.println("Left Sum = " + leftSum);
                System.out.println("Right Sum = " + rightSum);
                break;
            }
        }
    }
}