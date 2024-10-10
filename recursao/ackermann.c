#include <stdio.h>

int ackermann(int m, int n){
    if (m==0){
        return n+1;
    }
    if(m>0){
        if (n==0){
            return ackermann(m-1, 1);
        }
        else if (n>0){
            return ackermann(m-1, ackermann(m, n-1));
        }
    }

}


int main(){
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    printf("%d", ackermann(m, n));

    return 0;
}