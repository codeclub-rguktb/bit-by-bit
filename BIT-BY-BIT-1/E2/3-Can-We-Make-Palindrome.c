#include<stdio.h>
int main()
{
    // Write your stuff here
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        char s[n];
        int arr[26]={0};
        scanf("%s",s);
        for(i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        int odd=0;
        for(i=0;i<26;i++){
            if(arr[i]%2==1){
                odd++;
            }
        }
        if(odd==0 || odd==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}