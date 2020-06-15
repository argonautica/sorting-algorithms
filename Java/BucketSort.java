public class BucketSort {

    static int[] sort(int[] nums, int max) {
        int[] bucket = new int[max + 1];
        int[] sortedNums = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            bucket[nums[i]]++;
        }
        int index = 0;
        for (int i = 0; i < bucket.length; i++) {
            for (int j = 0; j < bucket[i]; j++) {
                sortedNums[index++] = i;
            }
        }
        return sortedNums;
    }

    static int getMax(int[] nums) {
        int max = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        return max;
    }

    public static void main(String args[]) {
        int nums[] = {7, 3, 2, 1, 0, 4, 5};
        int maxValue = getMax(nums);

        System.out.println("Unsorted Array:");
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }

        nums = sort(nums, maxValue);

        System.out.println();

        System.out.println("Sorted Array:");
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}
