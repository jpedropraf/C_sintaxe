#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int v[15];

    for(int i = 0 ; i<15 ; i++){
        v[i]=rand()%100;
    }

    int maior = v[0] , menor = v[0];
    for(int i = 1 ; i<15; i++){ 
        if(v[i]>maior) maior = v[i]; 
        if(v[i]<menor) menor = v[i]; 
    }

    for(int i = 0 ;i<15 ; i++){
        printf("%d ",v[i]); 
    }

    return 0;
}