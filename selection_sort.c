#include <stdio.h>
void swap(int *p,int *l){
    int temp;
    temp=*p;
    *p=*l;
    *l=temp;
}
void selectionsort(int a[],int n)
{
  int i,j,loc;
 
  for(j=0;j<n-1;j++){
    
  loc=j;
  for(i=j+1;i<n;i++){
    if(a[i]<a[loc])
   
    loc=i;
  }
  swap(&a[loc],&a[j]);
}
}


int main()
{
    int arr[]={64, 25, 12, 22, 11};
    int n=5;
    selectionsort(arr,n);
    printf("\n");
    for(int u=0;u<n;u++)
    {
        printf("%d ",arr[u]);
    }
    return 0;
}





