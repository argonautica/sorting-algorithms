#include <bits/stdc++.h> 
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b){
	// decreasing score
	// lexical name
	// if same salary then sort according to name(lexically)
	if(a.second == b.second)
		return a.first < b.first;
	return a.second > b.second; 
}

int main(){
	int n, min_threshod, score;
	string name;
	pair<string, int> student[100005];

	cin>>min_threshod>>n;
	for(int i=0;i<n;i++){
		cin>>name;
		cin>>score;
		student[i].first = name;
		student[i].second = score;
	}

	sort(student, student+n, compare);

	// print
	for(int i=0;i<n;i++){
		if(student[i].second >= min_threshod){
			cout<<student[i].first<<" ";
			cout<<student[i].second<<endl;
		}
			
	}
	return 0;
}

/*
Input:
79
4
Eve 78
Bob 99
Suzy 86
Alice 86

Output:
Bob 99
Alice 86
Suzy 86
*/