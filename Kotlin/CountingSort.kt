fun main(args : Array<String>) {
    val sorted  = countingSort(intArrayOf(4, 4, -4, 1, 7, 9, 5, 37564, -54, 0, 100))
    sorted.forEach {
        print("$it, ")
    }
}

 * Kotlin Counting Sort that allows for negative numbers.
 */
fun countingSort(input:IntArray):IntArray{
    if(input.size == 1){
        return input
    }
    //max value in range
    val max= input.max()
    //min value in range
    val min = input.min()
    //the range of the values
    val len = max!! - min!! + 1

    //Array for counting the number of occurrences of each value
    var count = IntArray(len)
    //Output array to store the sorted array
    var output = IntArray(input.size)


    input.forEach { value ->
        //Use Min to index the values into the correct spot in array
        var currentCount =  count[value - min]
        currentCount++
        count[value - min] = currentCount
    }

    //location in the output array
    var pointer = 0
   for(j in count.indices){ //Uses For loop rather than foreach to preserve the location in the count array.
        for (i in 0..count[j]){
            if(count[j] != 0) {
                output[pointer] = j+min
                pointer++
                count[j]--
            }
        }
    }
    return output
}

