

public class MergeSort {
    @SuppressWarnings("unchecked")
    public static<T extends Comparable<T>> void mergeSort(T[] arr) {
        if (arr.length == 1) {
            return;
        }
        int mid = arr.length/2;
        T[] l = (T[]) new Comparable[mid];
        T[] r = (T[]) new Comparable[arr.length - mid];
        for (int i = 0; i < mid; i++) {
            l[i] = arr[i];
        }

        for (int i = mid; i < arr.length; i++) {
            r[i - mid] = arr[i];
        }
        mergeSort(l);
        mergeSort(r);
        merge(arr, l, r);
    }

    private static<T extends Comparable<T>> void merge(T[] arr, T[] leftArr, T[] rightArr) {
        int index = 0, i, j;
        for (i = 0, j = 0; i < leftArr.length && j < rightArr.length;) {
            if (leftArr[i].compareTo(rightArr[j]) <= 0) {
                arr[index++] = leftArr[i++];
            } else {
                arr[index++] = rightArr[j++];
            }
        }
        while (i < leftArr.length) {
            arr[index++] = leftArr[i++];
        }
        while (j < rightArr.length) {
            arr[index++] = rightArr[j++];
        }
    }

    public static void main(String[] args) {
        Integer[] arr = {5, 1, 3, 9, 23, 8, 7, 4};
        mergeSort(arr);
        int[] sorted = new int[arr.length];
        for (int i = 0; i < sorted.length; i++) {
            sorted[i] = arr[i];
        }
        printArr(sorted);
    }

    private static void printArr(int[] arr)  {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.print("\n");
    }

}