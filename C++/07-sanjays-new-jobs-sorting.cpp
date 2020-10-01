#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool myCompare(pair <string,int> p1, pair <string, int> p2){
	// first = Name, second = Salary
	// prefrence salary>name
	if(p1.second == p2.second){ // same salary
		return p1.first < p2.first; // name inc/lexicographically
	}
	return p1.second > p2.second; // salary decreasing

}
int main(){
	int min_salary, n;
	pair<string ,int> emp[100005];
	cin>>min_salary;
	cin>>n;

	string name;
	int salary;
	// store to pair
	for(int i=0;i<n;i++){
		cin>>name>>salary;
		emp[i].first = name;
		emp[i].second = salary;
	}
	// sort all elemets
	sort(emp, emp+n, myCompare);

	//print pair
	for(int i=0;i<n;i++){
		if(emp[i].second >=min_salary){
			cout<<emp[i].first<<" ";
			cout<<emp[i].second<<endl;
		}
	}

	return 0;
}

/*



*/