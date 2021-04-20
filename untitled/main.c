#include <stdio.h>
#include "tomb_parcialis_gyakorlas.h"

int main() {
    IntArray *tomb = letrehozasArray(20);
    putArray(&tomb);
    kiiratas(tomb);
    return 0;
}
