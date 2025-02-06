#include <stdio.h>
int main(){
    char chr;
    int x = 0, n = 5;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i; j++){
            if(x >= 5){
                x = x % 5;
            }
            switch(x) {

                case 0:
                    printf("A");
                    break;
                case 1:
                    printf("E");
                    break;
                case 2:
                    printf("I");
                    break;
                case 3:
                    printf("O");
                    break;
                case 4:
                    printf("U");
                    break;
            }
            x++;
        }
    }
}