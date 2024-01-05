#include <stdio.h>
void swap(int *p,int *l){
    int temp;
    temp=*p;
    *p=*l;
    *l=temp;
}
void bubble_sort(int a[],int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-i-1);j++){
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);

        }
    }
}
int main(){
    int arr[]={64, 25, 12, 22, 11};
    int n=5;
    bubble_sort(arr,n);
    printf("\n");
    for(int u=0;u<n;u++){
        printf("%d ",arr[u]);
    }
    return 0;
}