#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int number = 600851475143LL;
int highest;
int prime;
int i;

int main(){
    printf("%llu\n", number);//%llu is used to print an unsigned long long
    for(i = 2; i < number/2; i++){
        printf("%d\n", i);
        prime = 1;
        if(!(number%i)){
            int y;
            while(prime = 1)
                for(y = 2; y < i/2; y++)
                    if(!(i%y)){
                        printf("\n%d is not prime", i);
                        prime = 0;
                        break;
                    }
        }
        if(!prime){
            printf("\n%d is prime", i);
            if(i > highest){
                highest = i;
                printf("\n%d", highest);
            }
        }
    }
    printf("The highest prime factor of %d is %d", number, highest);
    return 0;
}

