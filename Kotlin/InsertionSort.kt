import java.util.*

fun inputArr(): Array<Int>{
    //instance of Scanner class
    val reader: Scanner = Scanner(System.`in`)

    //creating the array
    println("enter size of array : ")
    var size:Int=reader.nextInt()
    var myArray=Array<Int>(size){0}

    //initializing the array
    for (i in 0 until size-1){
        print("\nEnter element : ")
        myArray.set(i,reader.nextInt())
    }

    return myArray
}

fun displayArr(myArray: Array<Int>){
    for (element in myArray)
        print(" $element")
}

fun main(args: Array<String>){
    var array=input()
    println("array before sorting : ")
    display(array)
    array=insertionSort(array)
    println("\narray after sorting : ")
    display(array)

}

fun insertionSort(array: Array<Int>): Array<Int> {
    val n = array.size;
    for (i in 1 until n-1) {
        var key = array.get(i);
        var j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && array[j] > key) {

            array[j+1] = array[j];
            j -= 1;
        }
        array[j+1] = key;
    }

    return array

}
