#include<stdio.h>

int main(){
    int given_number;
    printf("Enter the value: ");
    scanf("%d", &given_number);
    if(given_number % 2 == 0){
        printf("the given number is an even value");
    }
    else{
        printf("the given number is a odd value");
    }
    return 0;
}

