#include <iostream>
using namespace std;

int main() {
    int n=0, risultato=0, a=0, b=1;
    cout << "inserire i valori di n" << endl;
    cin >> n;
    if (n>=2){
        for (int i = 1; i<=n; i++) {
            risultato = a+b;
            b=a;
            a=risultato;
            cout << risultato << endl;
        }

    }
    else {
        cout << "errore" << endl;
       ;
    }
   return 0;
}
