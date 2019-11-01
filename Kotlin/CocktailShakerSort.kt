fun main(args : Array<String>) {
    val sorted  =  cocktailShakerSort(intArrayOf(4, 4, -4, 751, 7, 9, 5, 37564, -54, 1, 0, 100))
    sorted.forEach {
        print("$it, ")
    }
}

fun cocktailShakerSort(input:IntArray):IntArray{
    if(input.size <= 1){
        return input
    }

    var start = 0
    var end = input.size -2
    var unsorted = true


    while(unsorted) {
        unsorted = false

        for (i in start..end) {
            if (input[i] > input[i + 1]) {
                val temp = input[i + 1]
                input[i + 1] = input[i]
                input[i] = temp
                unsorted = true
            }
        }

        if (!unsorted) {
            break
        } else {
            unsorted = false
            end--

            for (i in end downTo start) {
                if (input[i] > input[i + 1]) {
                    val temp = input[i + 1]
                    input[i + 1] = input[i]
                    input[i] = temp
                    unsorted = true
                }
            }
            start++
        }
    }


    return input
}