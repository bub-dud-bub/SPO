#include <stdio.h>
#include <math.h>

int main() {
    	int weights[4] = {10, 20, 12, 10}; 
	int values[4] = {6, 10, 8, 4};
	int max_value=0;
	int weight = 28;
	for (int n=0; n<3; n++)
		for (int i=n+1; i<4; i++){
			if (values[n]+values[i]>max_value&&weights[n]+weights[i]<=weight){
				max_value=values[n]+values[i];				
			}
	}
	printf("Max value: %d\n", max_value); 
}
