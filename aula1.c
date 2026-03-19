#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ex1();

int main(){
     ex1();
    return 0;
}


int* gerar_nums(){

    srand(time(NULL));

    int* v = malloc(15 * sizeof(int));
    
    for(int i = 0 ; i<15 ; i++){
    v[i] = rand()%100;
    }
    return v;
}

void ex1(){

    int* nums = gerar_nums();

    int maior = nums[15] , menor = nums[15];
    for(int i = 1 ; i<15; i++){ 
        if(nums[i]>maior) maior = nums[i]; 
        if(nums[i]<menor) menor = nums[i]; 
    }

    for(int i = 0 ;i<15 ; i++){
        printf("%d ",nums[i] , maior , menor); 
    }
}

int ex2(){

    int* nums = gerar_nums();
    free(nums);
}

int ex3(){}

int ex4(){}

int ex5(){}

int ex6(){}

// trabalho
int ex7(){}

int ex8(){}