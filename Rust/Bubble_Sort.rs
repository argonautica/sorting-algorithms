fn main() {

    let mut num_array = [200, 31, 80, 14, 1, 432, 84, 33, 18];

    let mut swap_performed = true;

    while swap_performed{
        swap_performed = false;
        
        for i in 1..num_array.len() {
            if num_array[i-1]> num_array[i] {
                num_array.swap(i-1, i);
                swap_performed=true
            }
        }
    } 

    println!("{}", "Sorted Array:");  
    println!("{:?}", num_array);  
}