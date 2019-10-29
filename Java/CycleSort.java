public class CycleSort
{
    public static int[] cycleSort(int[] array, int n)
    {

        // For loop that traverses the array elements and puts it in the right place
        for (int cycle_start=0; cycle_start <=n-2; cycle_start++)
        {
            // Initialise starting point
            int item = array[cycle_start];

            // Count all smaller elements on right side, to figure out where to place element
            int position = cycle_start;
            for (int i = cycle_start+1; i<n; i++)
            {
                if (array[i] < item)
                {
                    position++;
                }
            }

            // If item is already in the right position
            if (position == cycle_start)
            {
                continue;
            }

            // if item is a duplicate
            while (item == array[position])
            {
                position += 1;
            }

            // Swap item and position
            if (position != cycle_start)
            {
                int temp = item;
                item = array[position];
                array[position] = temp;
            }

            // Rotate the rest of the cycle
            while (position != cycle_start)
            {
                position = cycle_start;

                // Find position where we insert the element
                for (int i = cycle_start+1; i<n; i++)
                {
                    if (array[i] < item)
                    {
                        position += 1;
                    }
                }

                // Ignore all the duplicate elements
                while (item == array[position])
                {
                    position += 1;
                }

                // Swap item and position
                if (item != array[position])
                {
                    int temp = item;
                    item = array[position];
                    array[position] = temp;
                }
            }

        }
        return array;
    }

    // Method to print out arrays
    public static void printArray(int[] array)
    {
        for (int integer : array)
        {
            System.out.print(integer + " ");
        }
        System.out.println();
    }

    // Main method to check if our cycle sort is successful
    public static void main(String[] args) {

        // Initialise a new int array
        int[] array = {4,7,2,8,0,5,1,3};
        int length = array.length;
        System.out.println("Array before sorting: ");
        printArray(array);
        int[] sortedArray = cycleSort(array, length);
        System.out.println("Array after sorting: ");
        printArray(sortedArray);


    }
}
