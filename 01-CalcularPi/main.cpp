#include <iostream>
using namespace std;

int main(){
    double pi = 0.0;
    int signo = 1;
    int iteraciones = 0;

    while ((pi - 3.141592) < 0)
    {
        pi += signo * (1.0 / ((2*iteraciones) +1));
        signo *= -1;
        iteraciones++;

    }
    
    cout << "El número pi con sus primeros 6 decimales es: " << pi << endl;
    return 0;
}
