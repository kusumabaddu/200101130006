#include<stdio.h>
void bubbleSort (" intarr[],int size"){ 
	for(int step=0;step<size-1;++step){
		for(int i =0;i<size -step-1;++i){
			
			if (array[i]>array[i+1]){
				int temp = array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	void printArray(intarray[],int size){
		for(int i = 0;i,<size;++i){
			printf("%d",array[i]);		
		}
		printf("\n")
	}
	int main(){
		int data[] = {7,4,8,5,9}
		int size = sizeof(data)/sizeof(data[0]);
		bubbleSort(data,size);
		printf("sorted array in ascending order:\n");
		printArray(data,size);
		
	}
	}
