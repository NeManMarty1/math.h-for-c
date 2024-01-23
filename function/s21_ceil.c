#include <s21_math.h>

long double s21_ceil(double x) {
    int count;
    double y = x < 0 ? -x : x;
    for (count = 0; count < y; count++) {
    }
    return x < 0 ? -count + 1 : count;
}