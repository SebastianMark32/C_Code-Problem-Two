#include <stdio.h>

void DivOfNlogonia(){
    
    int i,N, M, X, Y, K;

    while(scanf("%d", &K) == 1)
    {
        if(K==0) {
            break;
        }
        scanf("%d%d", &N, &M);
        for (i = 0; i < K; i++) {
            scanf("%d %d", &X, &Y);
            if (N < X && M < Y) {
                printf("NE\n");
            } else if (N > X && Y > M) {
                printf("NO\n");
            } else if (N > X && M > Y) {
                printf("SO\n");
            } else if (X > N && M > Y){
                printf("SE\n");
            } else printf("divisa\n");
        }
    }
}

int main(){

    DivOfNlogonia();

    
    return 0;
}