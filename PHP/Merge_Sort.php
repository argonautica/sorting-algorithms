<?php
  // function for merge sort - splits the array 
  // and call merge function to sort and merge the array
  // mergesort is a recursive function
  function mergesort(&$Array, $left, $right) 
  {
    if ($left < $right)
    { 
      $mid = $left + (int)(($right - $left)/2);
      mergesort($Array, $left, $mid);
      mergesort($Array, $mid+1, $right);
      merge($Array, $left, $mid, $right);
    }
  }

  // merge function performs sort and merge operations
  // for mergesort function
  function merge(&$Array, $left, $mid, $right) 
  {
      // Create two temporary array to hold splitted 
      // elements of main array 
      $n1 = $mid - $left + 1; //no of elements in LeftArray
      $n2 = $right - $mid;     //no of elements in RightArray    
      $LeftArray = array_fill(0, $n1, 0); 
      $RightArray = array_fill(0, $n2, 0);
      for($i=0; $i < $n1; $i++)
       { 
         $LeftArray[$i] = $Array[$left + $i];
       }
      for($i=0; $i < $n2; $i++)
       { 
         $RightArray[$i] = $Array[$mid + $i + 1];
       }

      // In below section x, y and z represents index number
      // of LeftArray, RightArray and Array respectively
      $x=0; $y=0; $z=$left;
      while($x < $n1 && $y < $n2)
      {
        if($LeftArray[$x] < $RightArray[$y])
           { 
              $Array[$z] = $LeftArray[$x]; 
              $x++; 
           }
        else
           { 
             $Array[$z] = $RightArray[$y];  
             $y++; 
           }
        $z++;
      }
      // Copying the remaining elements of LeftArray
      while($x < $n1)
      { 
         $Array[$z] = $LeftArray[$x];  
         $x++;  $z++;
      }
      // Copying the remaining elements of RightArray
      while($y < $n2)
      { 
        $Array[$z] = $RightArray[$y]; 
        $y++;  $z++; 
      }
  }

// function to print array
function PrintArray($Array, $n) 
{ 
  for ($i = 0; $i < $n; $i++) 
    echo $Array[$i]." "; 
} 

// test the code
$MyArray = array(10, 1, 23, 50, 4, 9, -4);
$n = sizeof($MyArray); 
echo "Original Array\n";
PrintArray($MyArray, $n);

mergesort($MyArray, 0, $n-1);
echo "\nSorted Array\n";
PrintArray($MyArray, $n);
?>