#include<stdio.h>
#include<math.h>
#define NUM_OF_REPEATED_DIGIT 10

typedef struct queue{
	int count;
	int arr[NUM_OF_REPEATED_DIGIT];
} Queue;

void radix_sort(int[], int, int);
void initialize_queue(Queue[]);
void display(int[],int);

int main(){
	int n = 10;
	int elements[] = {2342,3543,6755,2481,9789,3383,6263,7369,9790,1709};
	int no_of_digits = 4;
	display(elements,n);//before sorting
	radix_sort(elements, n, no_of_digits);
	display(elements,n);//after sorting
	return 0;
}

void initialize_queue(Queue q[]){
	int i;
	for(i = 0; i < 10; i++){
		q[i].count = 0;
	}
}

void radix_sort(int ele[], int n, int nod){ //nod = number of digits in each number
	Queue q[10];
	int i, j, k, exp, placevalue, m;
	for(i = 0; i < nod; i++){//loop to process the number of digits of number
		initialize_queue(q);
		exp = pow(10,i);
		for(j = 0; j < n; j++){//for inserting into Queue
//			exp = pow(10,i);
			placevalue = (ele[j]/exp) % 10;//finding placevalue
			q[placevalue].arr[(q[placevalue].count)++] = ele[j];
		}
		m = 0;//used to insert number in ele[] sequentially
		for(j = 0; j < n; j++){//copy queue to ele array
			for(k = 0; k < q[j].count; k++){
				ele[m++] = q[j].arr[k];
			}
		}
		initialize_queue(q);// reset the count values in Queue q
	}
}

void display(int a[],int n){
	int i;
	for(i = 0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
