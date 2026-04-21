#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float agr_sum(float* parr,int count){

	float sum = 0;

	for (int i = 0 ; i < count; i++){

		sum = sum + parr[i];
	
	}

	return sum;
}

float average(float* parr,int count){

	float sum = agr_sum(parr,count);

	float avg = sum / count;

	return avg;

}

float variance(float* parr,int count){

	float av = average(parr,count);

	float sum = 0;

	for(int i = 0 ; i < count ; i++){

		sum = sum + ((parr[i]-av)*(parr[i]-av));

	}

	return sqrt(sum/count);

}


float std_dev(float* parr, int count) {
    
    return sqrt(variance(parr, count));
}


float covar(float* first,int len1,float* second,int len2){

	
	if(len1!=len2){
		printf("Length of elements mismatch\n");
		return -1;
	}

	float av1 = average(first,len1);
	float av2 = average(second,len2);

	float sum = 0;

	for (int i = 0;i < len1; i++){

		sum = sum + ((first[i]-av1)*(second[i]-av2));
		
	}
	
	return sum/len1;

}

int main(int argc,char **argv){
	float first[] = {1.0,2.0,3.0,4.0,5.0};
	int len1 = 5;
	float second[] = {3.0,7.0,11.0,9.0,1.0};
	int len2 = 5;

	//Test input for variance
	float co_var = covar(first,len1,second,len2);
	printf("The covariance of the two arrays are : %.2f",co_var);
		

	

	return 0;
}
