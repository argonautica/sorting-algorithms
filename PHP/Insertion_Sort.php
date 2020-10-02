<?php  
// PHP program for Insertion sort 
 
function Insertion_Sort(&$arr, $n) // Function to sort an array using insertion sort
{ 
    for ($i = 1; $i < $n; $i++) 
    { 
        $temp = $arr[$i]; 
        $j = $i-1; 
      
        // Move elements of arr[0..i-1], 
        // that are greater than temp, to  
        // one position ahead of their  
        // current position 
        while ($j >= 0 && $arr[$j] > $temp) 
        { 
            $arr[$j + 1] = $arr[$j]; 
            $j = $j - 1; 
        } 
          
        $arr[$j + 1] = $temp; 
    } 
} 
  
// A utility function to 
// print an array of size n 
function display_arr(&$arr, $n) 
{ 
    for ($i = 0; $i < $n; $i++) 
        echo $arr[$i]." "; 
    echo "\n"; 
} 
  
// Driver Code 
$arr = array(21, 101, 31, 15, 7); 
$n = sizeof($arr); 
Insertion_Sort($arr, $n); 
display_arr($arr, $n); 
?> 