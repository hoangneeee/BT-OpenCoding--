#include<stdio.h> 
int main(){ 
    long n; 
    scanf("%d", &n); 
    float sum = 0; 
    for(int i = 1; i <= n; i++){ 
        sum += (float)1/ i; 
    } 
        printf("%0.4f", sum); 
        return 0; 
}