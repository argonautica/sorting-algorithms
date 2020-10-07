import Foundation

func selectionSort<T: Comparable>(source: inout [T]) {
    guard source.count > 0 else {
        return
    }
        
    for currentIndex in 0..<(source.count - 1) {
        var lowestIndex = currentIndex
        for compareIndex in (currentIndex + 1)..<source.count {
            if source[lowestIndex] > source[compareIndex] {
                lowestIndex = compareIndex
            }
        }
        
        if lowestIndex != currentIndex {
            let temp = source[currentIndex]
            source[currentIndex] = source[lowestIndex]
            source[lowestIndex] = temp
        }
    }
}
