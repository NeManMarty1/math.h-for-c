#include <s21_math.h>
#define s21_PI 3.14159265358979324
#define s21_NAN 0.0

int factorial(int x);


long double s21_acos(double x) {
    if (x <= 1 && x >= -1) {
        x = s21_PI / 2. - s21_asin(x);
    } else {
        x = s21_NAN;
    }
    return x;
}



int factorial(int x){
    long int sum = 1;
    for(int i =1 ; i <=x ; i++){
        sum*=i;
    }
    return (double) sum;
}