
int main(){
    int n, k[100];
    int i;
    scanf("%d", &n);
    for(i = 0 ; i < n ; ){
        scanf("%d", &k[i]);
        if(k[i] % 2 != 0){
            i++;
        }
    }
    for(i = 0 ; i < n/2 ; i ++){
        printf("%d\n", k[i] - k[n - i - 1]);
    }
    if(n % 2 != 0){
        printf("%d\n", k[n/2]);
    }
    return 0;
}
