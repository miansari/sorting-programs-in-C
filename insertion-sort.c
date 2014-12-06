#include<stdio.h>
void insertion_sort(int[],int);
void display(int[],int);
int main(){
	int n = 10;
	int a1[]  = {2,3,6,4,76,11,9,4,33,87};
	insertion_sort(a1,n);
	display(a1,n);
	return 0;
}

void display(int a[],int n){
	int i;
	for(i = 0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void insertion_sort(int a[],int n){
	int i, j, temp;
	for(i = 1; i < n; i++){
		temp = a[i];
		j = i-1;
		while(temp < a[j] && j >= 0){ /* change < into > for decending order*/
			a[j+1] = a[j--];
		}
		a[j+1] = temp;
	}
}
