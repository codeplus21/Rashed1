#include<stdio.h>
int main(){

    int i;
    int size=5;
    int array[]={2,15,4,7,3};
    divide(array,0,size-1);
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    return 0;
}
int divide(int array[], int start, int end){
    int mid;
    if(end<=start){
        return;
    }else{
        mid=(end+start)/2;
        divide(array,start,mid);
        divide(array,mid+1,end);
        merge(array,start,mid,end);
    }

}
int merge(int array[],int start,int mid,int end){
   int i,j,k,index=0,temp[10];
   i=start;
   j=mid+1;
   while(i<=mid && j<=end){
    if (array[i]<array[j]){
        temp[index]=array[i];
        i++;
    }else{
    temp[index]=array[j];
    j++;
    }
    index++;
   }
   while(i<=mid){
    temp[index]=array[i];
    i++;
    index++;
   }
   while(j<=end){
    temp[index]=array[j];
    j++;
    index++;
   }
   for(i=start,k=0;i<=end;i++){
    array[i]=temp[k];
    k++;
   }
}
