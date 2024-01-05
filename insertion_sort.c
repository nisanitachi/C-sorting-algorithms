#include <stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void insertion_sort(int arr[],int n){
    int imp;
    for(int i=1;i<n;i++){
        imp=arr[i];
        for( int j=i-1;j>=0;j--){
        if(arr[j]>imp){
        swap(&arr[j],&arr[j+1]);
        imp=arr[j];}}

    }

}
int main(){
    int arr[]={64, 25, 12, 22, 11,89};
    int n=6;
    insertion_sort(arr,n);
    for(int p=0;p<n;p++)
    {
        printf(" %d",arr[p]);
    }
    return 0;


}