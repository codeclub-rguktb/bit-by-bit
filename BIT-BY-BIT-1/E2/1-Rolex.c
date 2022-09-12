#include<stdio.h>

int main()
{
    // Write your code stuff juniors
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z,i,j;
        scanf("%d %d %d",&x,&y,&z);
        if(x>200){
            printf("%d",x*y);
        }else{
            printf("%d",x*z);
        }
        printf("\n");
    }

    return 0;
}