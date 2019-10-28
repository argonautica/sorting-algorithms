import kotlin.random.Random

fun main(args : Array<String>) {
    //Create Array
    var array = intArrayOf(4,5,3,9,1)

    array = sort(array)

    array.forEach {
        println(it)
    }
}

/**
 * Use Bogo sort to randomally swap two inputs and then check if the list is sorted
 */
fun sort(input:IntArray):IntArray{

    //keep repeating check until sorted
    while (!isSorted(input)){
        //get two randomly picked array locations
        val index1 = Random.nextInt(0, input.size-1)
        val index2 =  Random.nextInt(0, input.size-1)

        //swap the values
        val temp = input[index1]
        input[index1] = input[index2]
        input[index2] = temp
    }
    return input
}

/**
 * Check if the array is sorted from lowest to highest
 */
fun isSorted(input:IntArray): Boolean{
    var max:Int? = null
    for(x in input.indices){
        if(max == null || input[x] >= max){
            max = input[x]
        }else{
            return false
        }
    }
    return true
}

