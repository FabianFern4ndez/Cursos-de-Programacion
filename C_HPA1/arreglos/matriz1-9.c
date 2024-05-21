#include<stdio.h>

int main(){
int var[3][3], f, c;

for (f=0; f<3; f++){
    for(c=0;c<3; c++){
        var[f][c] = c+1;
        printf(" %d ", var[f][c]);
       
       
    }
    printf("\n");
}


}