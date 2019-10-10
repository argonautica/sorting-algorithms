// Java program for implementation of Insertion Sort
public class InsertionSort {
    /* A utility function to print array of size n*/
    static void printArray(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");

        System.out.println();
    }

    // Driver method
    public static void main(String args[]) {
        int arr[] = {18, 11, 13, 5, 6};
        InsertionSort sorter = new InsertionSort();
        sorter.sort(arr);
        printArray(arr);
    }

    /*Function to sort array using insertion sort*/
    void sort(int arr[]) {
        int temp = arr.length;
        for (int i = 1; i < temp; ++i) {
            int key = arr[i];
            int j = i - 1;


            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
}