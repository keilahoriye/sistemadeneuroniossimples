#include <iostream>
#include <vector>
#include "neuronioReLU.hpp"

using namespace std;

int main() {
    vector<double> entradas1 = {0.3, 2.0};
    vector<double> pesos1 = {0.2, 0.4};
    double bias1 = -1.5;

    vector<double> entradas2 = {0.3, 2.0};
    vector<double> pesos2 = {0.2, 0.4};
    double bias2 = -0.5;

    vector<double> entradas3 = {1.0, 1.0};
    vector<double> pesos3 = {1.0};
    double bias3 = -1.0;
    
    Neuronio* n1 = new NeuronioReLU(pesos1, bias1);
    Neuronio* n2 = new NeuronioReLU(pesos2, bias2);
    Neuronio* n3 = new NeuronioReLU(pesos3, bias3);
    
    cout << "Saída do Neurônio 1: " << n1->predict(entradas1) << endl;
    cout << "Saída do Neurônio 2: " << n2->predict(entradas2) << endl;
    cout << "Saída do Neurônio 3: " << n3->predict(entradas3) << endl;
    
    delete n1;
    delete n2;
    delete n3;

    return 0;
}
