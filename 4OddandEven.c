#include <stdio.h>

void fun(int *a,int n,int *odd,int *even){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            *even+=a[i];
        }else *odd+=a[i];
    }
}

    int main(){
        int n=0;
        scanf("%d",&n);
        int a[100]={0};
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        fun(a,n,&odd,&even);
        printf("%d %d",odd,even);

        return 0;
    }
