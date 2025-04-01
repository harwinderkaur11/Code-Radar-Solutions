#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        
        printf("\n");
    }
    return 0;
}