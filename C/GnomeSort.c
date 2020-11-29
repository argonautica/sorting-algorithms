#include<stdlib.h>
#include<stdio.h>
#define MAX 6

int main(){
	int TableToAnalyse[MAX]={1,2,-4,3,9,6};
	int mygnomeindex=1;
	printf("size %d\n",MAX);

	while (mygnomeindex!=MAX-1){
		if(TableToAnalyse[mygnomeindex]>=TableToAnalyse[mygnomeindex-1]){
			mygnomeindex++;
		}else{
			int c=TableToAnalyse[mygnomeindex];
			TableToAnalyse[mygnomeindex]=TableToAnalyse[mygnomeindex-1];
			TableToAnalyse[mygnomeindex-1]=c;
			mygnomeindex--;
			}
	}
	printf("Resultat:\n");
	printf("%d",TableToAnalyse[0]);
	for (int i=1;i<MAX;i++){
		printf(",%d",TableToAnalyse[i]);

	}
	printf("\n");
}
