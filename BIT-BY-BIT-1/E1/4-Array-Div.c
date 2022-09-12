char* arrayDiv(int arr_count, int* arr, int n) {
    int map[n+1];
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }int count=0;
    for(int i=1;i<=n;i++){
        if(map[i]==1) count++;
    }
    if(count==n){
        if(n%2==0) return "Yes";
        else return "No";
    }return "Yes";
}
