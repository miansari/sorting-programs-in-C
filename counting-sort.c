#include<stdio.h>
#define NUMELEMENT 12 /*no. of elements in array to be sorted*/
void display(int[], int);
int max_in_array(int[],int);
void counting_sort(int[], int[], int);

int main(){
	int n = NUMELEMENT;
	int a[] = {-1,4,5,5,3,8,3,9,2,2,1,9,7};
	int b[NUMELEMENT+1];
	display(a,n);
	counting_sort(a /*input*/,b /*output*/,n);
	display(b,n);
	return 0;
}

void counting_sort(int a[], int b[], int n){
	int max = max_in_array(a,n);
	int temp[100];/*used to hold the frequency of numbers in array a[]*/
	int i;
	for(i = 0; i <= max; i++){
		temp[i] = 0;
	}
	for(i = 1; i <= n; i++){
		temp[a[i]]++;
	}
	for(i = 1; i <= max; i++){
		temp[i] += temp[i-1];
	}
	for(i = n; i >= 1; i--){
		b[temp[a[i]]] = a[i];
		temp[a[i]]--;
	}
}

int max_in_array(int a[], int n){
	int i, max = a[0];
	for(i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

void display(int a[],int n){
	int i;
	printf("\n");
	for(i = 1; i <= n; i++){
		printf("%d\t",a[i]);
	}
}
