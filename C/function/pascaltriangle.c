        //      1
        //     1   1
        //    1  2   1
        //   1  3  3   1
        //  1  4  6  4   1
        //1  5  10  10  5  1

 #include<stdio.h>
int factorial(int );
int combination(int,int);
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf(" %d " ,icj);

        }
        printf("\n");
    }
    return 0;

}
int factorial(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f=f*i;
    }
    return f;
}
int combination(int n,int r){
   return factorial(n)/(factorial(r)*factorial(n-r));

}