<?php  
// PHP program for implementation  
// of Bubble Sort 
  
function Bubble_Sort(&$arr) 
{ 
    $n = sizeof($arr); 
  
    // Traverse through all array elements 
    for($i = 0; $i < $n; $i++)  
    { 
        // Last i elements are already in place 
        for ($j = 0; $j < $n - $i - 1; $j++)  
        { 
            // traverse the array from 0 to n-i-1 
            // Swap if the element found is greater 
            // than the next element 
            if ($arr[$j] > $arr[$j+1]) 
            { 
                $temp = $arr[$j]; 
                $arr[$j] = $arr[$j+1]; 
                $arr[$j+1] = $temp; 
            } 
        } 
    } 
} 
  
// Driver code to test above 
$arr = array(64, 34, 25, 12, 22, 11, 90); 
  
$len = sizeof($arr); 
Bubble_Sort($arr); 
  
echo "The Sorted array is : \n"; 
  
for ($i = 0; $i < $len; $i++) 
    echo $arr[$i]." ";  
   
?> 