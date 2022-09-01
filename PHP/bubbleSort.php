<?php

function bubble_sort($arr) {
    $len = count($arr)-1;
    for ($i=0; $i<$len; $i++) {
        for ($j=0; $j<$len-$i; $j++) {
            $k = $j+1;
            if ($arr[$k] < $arr[$j]) {
                // Swap elements at indices: $j, $k
                list($arr[$j], $arr[$k]) = array($arr[$k], $arr[$j]);
            }
        }
    }
    return $arr;
}

$arr = array(64,34,25,12,22,11,90);

print("<pre>Before sorting\n");
print_r($arr);
print("After sorting by using bubble sort\n");
print_r(bubble_sort($arr));

?>