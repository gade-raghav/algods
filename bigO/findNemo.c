#include<stdio.h>
#include<time.h>

void findnemo(char* arr[],int n);
void findnemo(char* arr[],int n){
	double timespent = 0.0;
	clock_t begin = clock();
	for(int i=0; i<n;i++){
		if(arr[i]=="nemo"){
			printf("Found NEMO!");
		}
	}
	clock_t end = clock();
	timespent = end-begin;
	printf("time spent = %f",timespent);
	return;
}

void main(){
	int n = 3;
	char* names[n];
	names[0] = "rag";
	names[1] = "gad";
	names[2] = "nemo";
	findnemo(names,n);
}
