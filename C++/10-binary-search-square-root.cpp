#include <iostream>
using namespace std;

int binary_search_square_root(int num, int precision){
	int left=0, right=num, mid;
	float result;
	while(left<=right){
		mid = (right + left)/2; // n/2
		if(mid*mid == num){
			result = mid;
			break;
		}
		else if(mid*mid>num)
			right = mid-1;
		else{
			left = mid + 1;
			result = mid;
		}
	}

	// fractional part
	float inc = 0.1;
	for(int i=0;i<precision;i++){
		while(result*result<=num){
			result += inc;
		}
		result = result - inc;
		inc /= 10;
	}
	return result;
}


int main(){
	
	int number, precision;
	cin>>number>>precision;
	cout<<binary_search_square_root(number,precision)<<endl;
	
	return 0;
}

/*
Problem: Binary search.

Note: array is sorted;

Recursive approah may take O(long(n)+precision).

*/