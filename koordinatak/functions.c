//
// Created by Tibor on 2021. 03. 06..
//

#include "functions.h"
#include <math.h>

double dist(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}