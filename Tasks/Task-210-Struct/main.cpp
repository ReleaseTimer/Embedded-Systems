#include "mbed.h"
#include <cstdio>

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


int main() {

    //Create instance of a complex number
    ComplexNumber_C p;

    //Initialise each attribute 
    p.real = 2.0;
    p.imag = 3.0;
    
    //Create and Initialise 
    ComplexNumber_C q = {1.0, 1.0};

    // TASK:
    // Create another complex number y
    ComplexNumber_C y;
    // Calculate the complex sum of p and q and store in y
    y.real = q.real + p.real;
    y.imag = q.imag + p.imag;
    // Use printf to display as a complex number (hint: you need two placeholders)
    printf("q.real + p.real = %lf\n q.imag + q.real = %lf\n",  y.real, y.imag);

    return 0;   
}
