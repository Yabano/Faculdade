#include <stdio.h>

int main(){
    double y = 1;
    double conta = 0;

    for (double x = 1; x <= 39; x+=2){
    conta += x/y;
    y*=2;

}
printf("%.2lf",conta);   

}