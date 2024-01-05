#include <stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int low,int high){
    int i=low;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            swap(&arr[j],&arr[i]);
            i++;
        }
    }
    swap(&arr[i],&arr[high]);
    return i;

}
void quicksorti(int arr[],int low,int high){
    if(low<high){
        int pivot_index=partition(arr,low,high);
        quicksorti(arr,low,pivot_index-1);
        quicksorti(arr,pivot_index+1,high);

    }
}
void quicksort(int arr[],int length){
    quicksorti(arr,0,length-1);
}
int main(){
    int arr[]={64, 25, 12, 22, 11,89};
    int length=6;
    quicksort(arr,length);
    for(int p=0;p<length;p++)
    {
        printf(" %d",arr[p]);
    }
    return 0;
}

    
    




