#include<stdio.h>


void swap(int *a,int *b){
	int temp= *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[],int left,int right){
	int pivot=arr[left];
	int start=left;
	int end=right;
	while(start<end){
		while(arr[start]<=pivot){
			start++;
		}
		while(arr[end]>pivot){
			end--;
		}
		if(start<end){
		swap(&arr[start],&arr[end]);	
		}
	}

swap(&arr[left],&arr[end]);
return end;
}
		


void quicksort(int arr[],int left,int right){
	if(left<right){
		int p =partition(arr,left,right);
		quicksort(arr,left,p-1);
		quicksort(arr,p+1,right);
	}
}
int main(){
	int n, arr[100];
    int i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    quicksort(arr,0,n-1);


    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
