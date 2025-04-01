#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        int a=1;
        for(int j=n;j>=1;j--){
            printf("%d ",a);
            a++;
        }
        
        printf("\n");
    }
    return 0;
}