package lecture11;

import com.company.util;

import java.util.Arrays;

public class quicksorting {
    public static void main(String[] args) {
        int ar[]={5,4,9,7,6};
        quicksort(ar,0,ar.length);
        System.out.println(Arrays.toString(ar));

    }
    public static void quicksort(int ar[],int start,int end){
        if (end<=start){
            return;
        }
        int pivot= end-1;
       pivot= pivotadjust(ar,start,pivot);
        quicksort(ar, start, pivot);
        quicksort(ar,pivot+1,end);
    }
    public static int pivotadjust(int ar[],int start ,int pivot){
      int j=start;
        for (int i = start; i <pivot ; i++) {
            if (ar[i]<ar[pivot]){
                util.swap(ar,i,j);
                  j++;
            }
        }
        util.swap(ar,j, pivot);
        return j;
    }
}
