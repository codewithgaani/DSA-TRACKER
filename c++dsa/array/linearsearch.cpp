#include <iostream>
using namespace std;
int main(){
    int n=-1;
    int k;
    int arr[10];
    for(int i =0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&k);
    for (int i=0;i<10;i++){
        if (arr[i]==k){
            n=i;
            break;
        }
    }
    cout<<n<<endl;
    return 0;
}
