int count(char* s1, char* s2) {
    int arr[26]={0},i=0;
    for(i=0;s2[i]!='\0';i++){
        arr[s2[i]-'a']=1;
    }
    for(i=0;s1[i]!='\0';i++){
        if(arr[s1[i]-'a']!=0){
            arr[s1[i]-'a']++;
        }
    }
    int max=0;
    for(i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max-1;

}