#include <stdio.h>
#include <stdlib.h>

float agr_sum(float* parr,int count){

	float sum = 0;

	for (int i = 0 ; i < count; i++){

		sum = sum + parr[i];
	
	}

	return sum;
}

int main(int argc,char *argv[]){


	float arr[] = {1.0,2.0,3.0,4.0,5.0};

	float res = agr_sum(arr,5);
	
	printf("Sum of the array is %.2f ",res);

	return 0;
}
