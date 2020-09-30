<?php
/**
 * Author: Adesh Singh
 * Source: https://www.geeksforgeeks.org/binary-insertion-sort/
 */
 
// PHP program for implementation of  
// binary insertion sort 
  
// A binary search based function to find  
// the position where item should be  
// inserted in a[low..high] 

function binarySearch($a, $item, $low, $high) { 
  
    if ($high <= $low)  
        return ($item > $a[$low]) ?  
                       ($low + 1) : $low;  
  
    $mid = (int)(($low + $high) / 2);  
  
    if($item == $a[$mid])  
        return $mid + 1;  
  
    if($item > $a[$mid])  
        return binarySearch($a, $item,  
                            $mid + 1, $high);  
          
    return binarySearch($a, $item, $low,  
                            $mid - 1);  
}  
  
// Function to sort an array a of size 'n'  
function insertionSort(&$a, $n) {  
    $i; $loc; $j; $k; $selected;  
  
    for ($i = 1; $i < $n; ++$i)  
    {  
        $j = $i - 1;  
        $selected = $a[$i];  
  
        // find location where selected  
        // item should be inserted  
        $loc = binarySearch($a, $selected, 0, $j);  
  
        // Move all elements after location  
        // to create space  
        while ($j >= $loc)  
        {  
            $a[$j + 1] = $a[$j];  
            $j--;  
        }  
        $a[$j + 1] = $selected;  
    }  
}  
  
// Driver Code 
$a = array(37, 23, 0, 17, 12, 72,  
           31, 46, 100, 88, 54);  
             
$n = sizeof($a);  
  
insertionSort($a, $n);  
  
echo "Sorted array:\n";  
for ($i = 0; $i < $n; $i++)  
    echo "$a[$i] ";  
  
// This code is contributed by  
// Adesh Singh 
?> 
