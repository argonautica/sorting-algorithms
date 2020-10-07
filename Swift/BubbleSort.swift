import Foundation

func bubbleSort<T: Comparable>(source: inout [T]) {

    guard source.count > 0 else {
        return
    }

    for end in stride(from: source.count - 1, to: 0, by: -1) {
        var swapped = false
        for currentIndex in 0..<end {
            if source[currentIndex] > source[currentIndex + 1] {
                let temp = source[currentIndex]
                source[currentIndex] = source[currentIndex + 1]
                source[currentIndex + 1] = temp

                swapped = true
            }
        }

        if !swapped {
            return
        }
    }
}
