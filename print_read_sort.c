
void insert_sort(int A[], int n);
void int_swap (int *a, int *b);
int read_in_array(int A[]);
void print_array(int A[], int size);

#define MAX 1000


void 
print_array(int A[], int size){
	int i;
	for (i=0; i<size; i++){
		printf("%4d",A[i]);
	}
}


int 
read_in_array(int M[]){
	 
/* input: 		M[], an array */
/* output: 		n, the size of the array */
/* function:	prompts user to enter values and displays the array to the screen. */
	
	int next, n=0, excess=0;
	printf("Please enter up tp %d values, ^D to end.\n", MAX);
	while (scanf("%d",&next)==1){
		if (n < MAX){
			M[n]=next;
			n++;
		} else {
			excess+=1;
		}
	}
	printf("%d values read into array", n);
	if (excess){
		printf(", %d excess values discarded", excess);
	}
	printf("\n");
	return n;
}




void
insert_sort(int A[], int size){
	int i,j;
	for (i = 1; i < size; i++){
		for (j = i-1; j >= 0 && A[j+1]<A[j]; j--){
			int_swap(&A[j],&A[j+1]);
		}
	}
}
			
	
			
void
int_swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

