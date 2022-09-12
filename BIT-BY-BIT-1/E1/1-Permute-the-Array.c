long* compute(long n, int* result_count) {
     long * arr=malloc(sizeof(long)*n);
    long i=n-2;
    long di=n-1;
    arr[n-1]=n;
    arr[i]=n-di;   
    i--;
    di--;
    long instant[100000]={0};
    while(i>0){
        if(arr[i+1]+di<n){
            if(instant[di+arr[i+1]]==0){
                arr[i]=di+arr[i+1];
            }else{
                arr[i]=arr[i+1]-di;
            }
            
        }else{
            if(instant[arr[i+1]-di]==0){
                 arr[i]=arr[i+1]-di;
            }
           
        }
        instant[arr[i]]=1;
        i--;
        di--;
    }
    long sum=n*(n+1)/2;
    // printf("sum=%ld\n",sum);
    
    for(i=1;i<n;i++){
        sum-=arr[i];
    }
    arr[0]=sum;
    *result_count=n;
    return arr;

}