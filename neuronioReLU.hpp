#ifndef NEURONIORELU_HPP
#define NEURONIORELU_HPP

#include "neuronio.hpp"
#include <vector>
#include <iostream>

using namespace std;

class NeuronioReLU : public Neuronio {
public:
    NeuronioReLU(const vector<double>& pesos, double bias) : Neuronio(pesos, bias) {}

    double predict(vector<double> entradas) const override {
        if (entradas.size() != pesos.size()) {
            cout << "Erro: Entradas e pesos não têm o mesmo tamanho" << endl;
            return 0.0;
        }

        double somatorio = 0.0;
        for (size_t i = 0; i < entradas.size(); ++i) {
            somatorio += entradas[i] * pesos[i];
        }

        somatorio += bias;

        return (somatorio > 0) ? somatorio : 0;
    }
};

#endif
