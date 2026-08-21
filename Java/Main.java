public class Main {
    public static void main(String[] args) {

        int[] arr1 = {4, 2, 1, 3};
        int[] arr2 = {5, 3, 2, 6};

        int[] arr3 = new int[8];
        int k = 0;

        for (int i = 0; i < arr1.length; i++) {
            arr3[k] = arr1[i];
            k++;
        }

        for (int i = 0; i < arr2.length; i++) {

            boolean found = false;

            for (int j = 0; j < k; j++) {
                if (arr2[i] == arr3[j]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                arr3[k] = arr2[i];
                k++;
            }
        }

        for (int i = 0; i < k; i++) {

            for (int j = i + 1; j < k; j++) {

                if (arr3[i] > arr3[j]) {

                    int temp = arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = temp;
                }
            }
        }

        System.out.print("Sorted Union: ");

        for (int i = 0; i < k; i++) {
            System.out.print(arr3[i] + " ");
        }

        System.out.println();

        System.out.println("Total unique elements = " + k);
    }
}