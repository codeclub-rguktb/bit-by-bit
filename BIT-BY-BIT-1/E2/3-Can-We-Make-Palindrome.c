#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,count=0;
        scanf("%d",&n);
        char s[n];
        int arr[26]={0};
        scanf("%s",s);
        for(i=0;i<n;i++){
            if(++arr[s[i]-'a']%2==1)
                count++;
            else
                count--;
        }
        if(count<=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
