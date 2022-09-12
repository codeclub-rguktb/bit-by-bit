
float getBalance(int a, int b) {
    if(a>=b || a%5!=0){
        return b;
    }
    return (b-a-0.5);

}