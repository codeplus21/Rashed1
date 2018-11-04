//https://www.youtube.com/watch?v=TL2_3sqvogo
#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter your number of data:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter your data one by one:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(i=0;i<n-1;i++)
      {

            for(j=0;j<n-i;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
      }
      for(i=0;i<n;i++){
        printf("%d ",a[i]);
      }
}
