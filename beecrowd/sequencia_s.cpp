#include <stdio.h>

int main(){
    double s = 0.0;

    for(double x = 1.0; x <= 100.0; x++){
        s += 1/x;
    }
    printf("%.2lf",s);
}