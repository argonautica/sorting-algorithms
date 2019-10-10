
public class BubbleSort {
    //verifies if the arry is already sorted
    //Thus, the best time complexity is improved from O(n^2) to O(n)
    static void improvedBubbleSort(int[] arr) {

        int n = arr.length;
        int temp = 0;

        boolean flag = true;

        for (int i = 0; i < n && flag; i++) {

            flag = false;
            for (int j = 1; j < (n - i); j++) {

                if (arr[j - 1] > arr[j]) {

                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;

                    flag = true;
                }

            }
        }

    }

    public static void main(String[] args) {

        int arr[] = {9, 2, 1, 0, 3, 60, 35, 2, 45, 320, 5};
        int arr2[] = {6,1,10,2,50,13,34,2,1,5,7,9};

        System.out.println("Array 01 Before Improved Bubble Sort");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        improvedBubbleSort(arr);

        System.out.println("Array After Improved Bubble Sort");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println("Array 02 Before Improved Bubble Sort");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr2[i] + " ");
        }
        System.out.println();

        improvedBubbleSort(arr2);

        System.out.println("Array After Improved Bubble Sort");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr2[i] + " ");
        }

    }
}
