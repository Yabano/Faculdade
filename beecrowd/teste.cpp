// #include <iostream>
// #include <iomanip>
// #include <string>

// using namespace std;

// int main(){
//     string nome;
//     int valor,contador;
//     double conta,resultado;
//     while(cin >> nome >> valor){
        
//         conta += (double)valor;
//         contador++;
//     }
//     resultado = conta/ (double)contador;
//     cout << setprecision(1) << fixed << resultado << endl;
    
//     return 0;
// }


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    int media, pessoas, distancia;

    media = 0, pessoas = 0;
    while(getline(cin, nome)){
        cin >> distancia;
        cin.ignore();

        media += distancia;
        ++pessoas;
    }

    cout << setprecision(1) << fixed << (double) media/pessoas << endl;

    return 0;
}