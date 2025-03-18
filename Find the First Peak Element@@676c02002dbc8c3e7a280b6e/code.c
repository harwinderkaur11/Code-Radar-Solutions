#include<stdio.h>
int main(){
    int n,peak=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i-1]&& arr[i]<arr[i+1])
        peak=0;
        break;
    }
    if(peak){
        printf("%d",arr[i]);
    }else
    printf("-1");
}
