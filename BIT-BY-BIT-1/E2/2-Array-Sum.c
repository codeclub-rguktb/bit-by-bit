#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write your code stuff here
    int t;
    scanf("%d",&t);
    while(t--){
    int n,k;
    scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%k==0)
                sum=sum+a[i];
}
        printf("%d\n",sum);
    }
    

    return 0;
}
