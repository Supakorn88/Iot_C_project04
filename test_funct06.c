#include "stdio.h"

int sumNumber( ){
    printf("GOODBYE...<3\n");
    return 10 + 30;
}
void main(){
    int sum;
    printf("10 + 30 = %d\n",sumNumber());
    
    sum = sumNumber();
    
    sumNumber();

}