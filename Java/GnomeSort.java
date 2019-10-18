package Java;
import java.util.Arrays;

public class GnomeSort {

    public static void main(String args[]){
        int[] arr = {1,6,23,5,8,2,43,35};
        System.out.println(Arrays.toString(arr));
        gnomeSort(arr);
        System.out.println(Arrays.toString(arr));

    }


    private static int[] gnomeSort(int[] arr){
        int pos = 0;
        int size = arr.length;
        while(pos < size){
            if(pos == 0 || arr[pos] >= arr[pos-1]){
                pos ++;
            }
            else{
                swap(arr, pos, pos - 1);
                pos--;
            }
        }
        return arr;
    }

    private static void swap(int[] arr, int p1, int p2){
        int temp = arr[p1];
        arr[p1] = arr[p2];
        arr[p2] = temp;
    }
}

