//1+x^2+x^4...........x^n
#include<stdio.h>
int power(int,int);
int main(){
    int n,a,res;
    printf("enter values\n");
    scanf("%d%d",&n,&a);
    res=power( n,a);
    printf("result%d ",res);
    return 0;

}
 int power(int x,int y){
    if(y!=0){
        return(x*power(x,y-1));
    }
    else{
        return 1;
    }

 }
