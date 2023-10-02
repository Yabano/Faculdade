#include <iostream>
main () {
    float a, b ,c;
    printf ("Digite tres valores: ");
    scanf ("%f %f %f", &a, &b, &c);

    if (a==b && a==c){
        printf ("Equilatero");

    }
    else if (a==b || a==c || b==c){
        printf ("Isoceles");
    }
    
}
