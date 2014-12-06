#include<stdio.h>
void bubble_sort(int[], int);
void display(int[],int);
void swap(int*,int*);
int main(){
	int n = 10;
	int a1[]  = {2,3,6,4,76,11,9,4,33,87};
	bubble_sort(a1,n);
	display(a1,n);
	return 0;
}

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void display(int a[],int n){
	int i;
	for(i = 0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void bubble_sort(int a[],int n){
	int i, j;
	for(i = 0; i < (n-1); i++){
		for(j = 0; j < (n-i-1); j++){
			if(a[j] > a[j+1]){  /* change > into < for decending order*/
				swap(&a[j], &a[j+1]);
			}
		}
	}
}
