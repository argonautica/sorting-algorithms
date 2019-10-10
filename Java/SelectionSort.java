class SelectionSort {

    public static void main(String args[]){
        int[] arr1 ={27,18,54,43,55,96,37,2,0,4,5,10,1};
        System.out.println("Before Selection Sort");

        for(int i:arr1){
            System.out.print(i+" ");
        }
        System.out.println();

        selectionSort(arr1);

        System.out.println("After Selection Sort");

        for(int i:arr1){
            System.out.print(i+" ");
        }
        System.out.println();
    }
    public static void selectionSort(int[] arr){
        for (int i=0; i < arr.length - 1;i ++){

            int index = i;
            for (int j = i+ 1; j <arr.length;j++){
                if (arr[j] < arr[index]){
                    index = j;
                }
            }
            int smallerNumber = arr[index];
            arr[index]= arr[i];
            arr[i] = smallerNumber;
        }   
    }

    
}