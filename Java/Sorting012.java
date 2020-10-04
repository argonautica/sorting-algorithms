import java.util.*;
class Sorting012{
    //function to display the array
    public static void display(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }

    public static void sort012(int[] arr){
        int i=0;     
        int j=0;
        int k=arr.length-1;
        while(i<=k){
            //if the arr[i]==1 move the pointer
            if(arr[i]==1){
                i++;
            }
            //if arr[i]==0 swap the current pointer
            else if(arr[i]==0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j++;
            }
            else{
                int temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
                k--;
            }
        }

        display(arr);

    }

    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        //enter size of array
        int n=scn.nextInt();
        int[] arr=new int[n];
        //enter an array
        for(int i=0;i<arr.length;i++){
            arr[i]=scn.nextInt();
        }
        //call the function to sort 0,1,2 
        sort012(arr);
    }
}