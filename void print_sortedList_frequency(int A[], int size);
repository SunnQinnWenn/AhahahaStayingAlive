/* print the frequency of values in a sorted array */

void
print_sortedList_frequency(int A[], int size){
	int i,j, S[size], new_size;
	S[0]=A[0];
	j = 1;
	for (i=1;i<size;i++){
		if (A[i]!=A[i-1]){
			S[j]=A[i];
			j++;
		}
	}
	new_size = j;
	
	/* S is a sorted array of distinct values in A. */
	/* S size: new_size */
	
	i = 0;
	for (j=0; j<new_size; j++){
		count = 0;
		while (A[i]==B[j]){
			count++;
			i++;
		}
		printf("%6d%6d",B[j],count);
	}
}
		
