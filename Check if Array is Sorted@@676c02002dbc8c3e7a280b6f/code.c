#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int sorted=1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) { // Found an unsorted pair
            sorted = 0;
            break;
        }
    }

    if (sorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;

}