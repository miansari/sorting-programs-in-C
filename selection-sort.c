#include<stdio.h>
void selection_sort(int[],int);
void display(int[],int);
void swap(int*,int*);
int main(){
	int n = 10;
	int a1[]  = {2,3,6,4,76,11,9,4,33,87};
	selection_sort(a1,n);
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

void selection_sort(int a[],int n){
	int i, j, maxloc, max;
	for(i = n-1; i > 0; i--){
		max = a[0];
		maxloc = 0;
		for(j = 1; j <= i; j++){
			if(a[j] > max){ /* change > into < for decending order*/
				max = a[j];
				maxloc = j;
			}
		}
		swap(&a[i], &a[maxloc]);
	}
}
