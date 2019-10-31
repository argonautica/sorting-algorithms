fun main(args : Array<String>) {
    val sorted  = radixSort(intArrayOf(4, 4, 4, 1, 7, 9, 5, 37564, 54, 0, 100))
    sorted.forEach {
        print("$it, ")
    }
}

/**
 * Sorts positive numbers only using Radix Sort
 */
fun radixSort(input:IntArray):IntArray {
    var out = input
    val max = input.max()

    var exp = 1
    while (max!!.div(exp) > 0) { //Loops through each place starting with the 0's place before incrementing
        out = countingRadixSort(out, exp)
        exp *= 10
    }

    return out
}

fun countingRadixSort(input:IntArray, exp:Int):IntArray{
    if(input.size == 1) {
        return input
    }

    //Array for counting the number of occurrences of each value
    var count = Array<MutableList<Int>>(10){ArrayList<Int>()}
    //Output array to store the sorted array
    var output = IntArray(input.size)

    //Stores each value in the array list corresponding with the value being checked in this round.
    input.forEach { value ->
        val radix = value.div(exp)%10
        count[radix].add(value)
    }

    var pointer = 0
    for(i in count.indices){ //Uses For loop rather than foreach to preserve the location in the count array.
        count[i].forEach {
            output[pointer] = it
            pointer++
        }
    }
    return output
}