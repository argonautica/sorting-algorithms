import java.util.Arrays;
import java.util.Random;
import java.util.concurrent.ThreadLocalRandom;

/**
 * This class holds an example for a Bogo-Sort implementation with a main as an example.
 *
 * @author Paul2708
 */
public final class BogoSort {

    /**
     * Run the sorting algorithm with a sample array.
     *
     * @param args ignored
     */
    public static void main(String[] args) {
        int[] array = {5, 3, 0, 8, 2, 4};

        System.out.println(Arrays.toString(array));

        sort(array);

        System.out.println(Arrays.toString(array));
    }

    /**
     * Sort an array based on Bogo-Sort.
     * <p>
     * Bogo-Sort is one of the dumbest ways to sort an array.
     * It is full random and shouldn't be used at all!
     * It's so inefficient that there isn't any lower bounds in O-notation.
     * (It's just random, right?)
     * <p>
     * The algorithm swaps two indices in the array... until the array is sorted.
     * <p>
     * More information: https://en.wikipedia.org/wiki/Bogosort
     *
     * @param array unsorted array of integer
     */
    public static void sort(int[] array) {
        Random random = ThreadLocalRandom.current();

        while (!isSorted(array)) {
            // Create some random indices
            int indexA = random.nextInt(array.length);
            int indexB = random.nextInt(array.length);

            // Swap index a with b
            int temp = array[indexA];
            array[indexA] = array[indexB];
            array[indexB] = temp;
        }
    }

    /**
     * Check if an array is sorted.
     * An array is sorted if it's empty or:
     * <code>a[i] <= a[i + 1]</code> for every <code>i</code> in 0..a.length - 1
     *
     * @param array array
     * @return true if the array is sorted, otherwise false
     */
    private static boolean isSorted(int[] array) {
        if (array.length == 0 || array.length == 1) {
            return true;
        }

        for (int i = 0; i < array.length - 1; i++) {
            if (array[i] > array[i + 1]) {
                return false;
            }
        }

        return true;
    }
}