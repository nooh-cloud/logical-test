#include <stdio.h>
int main()
{
    int n,i,k,found=0;
    
    printf("enter the number of element:");
    scanf("%d",&n);
    
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter the element to search:");
    scanf("%d",&k);
    
    //lenear search
    for(i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d element found @ %d",k,i);
        }
    }
    if(found==0){
        printf("element not found");
    }
    return 0;
}
