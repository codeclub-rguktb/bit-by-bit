#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n>=90){
            printf("Ex");
        }else if(n>=80){
            printf("A");
        }else if(n>=70){
            printf("B");
        }else if(n>=60){
            printf("C");
        }else if(n>=50){
            printf("D");
        }else if(n>=40){
            printf("P");
        }else{
            printf("F");
        }
        printf("\n");
    }
    return 0;
}