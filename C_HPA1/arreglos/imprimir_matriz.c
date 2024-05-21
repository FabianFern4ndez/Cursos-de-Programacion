#include<stdio.h>

int main(){
int var[4][4] = {0}, f, c;

for (f=0; f<4; f++){
    for(c=0;c<4; c++){
        
        printf(" %d ", var[f][c]);
    }
    printf("\n");
}


}