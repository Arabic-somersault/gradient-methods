//
// Created by SoKoL on 15.04.2021.
//

#ifndef GRADIENT_METHODS_CONJUGATEGRADIENTS_H
#define GRADIENT_METHODS_CONJUGATEGRADIENTS_H

#include "Function.h"
#include "MatrixOperation.h"
#include <vector>
#include <cmath>

class ConjugateGradients : Function {
private:
    Function function;
public:
    explicit ConjugateGradients(Function function);
    std::vector<double> evaluate (double eps, std::vector<double> x);
};


#endif //GRADIENT_METHODS_CONJUGATEGRADIENTS_H
