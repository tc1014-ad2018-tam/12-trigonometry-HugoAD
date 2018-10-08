/* This program helps the user to compute trigonometric functions.
 * The program first ask the user for the desired angle in degrees,
 * convert the degrees to radians, so it can be used in the trigonometric predefined functions.
 *
 * Author: Hugo Aguirre Doria
 * Date: October 7th, 2018.
 */

#include <stdio.h>
#include <math.h>

//Variable declaration
double angle= 0;
double radian = 0;

//trigonometry functions
double sine (double angle){
    double s = 0;
    s = sin(angle);
    printf ("\n Sine: %lf",s);
}
double cosine (double angle) {
    double c = 0;
    c = (cos(angle));
    printf("\n Cosine: %lf", c);
}

double tangent (double angle) {
    double t = 0;
    t = tan(angle);
    printf ("\n Tangent: %lf", t);
}

double cosecant (double angle) {
    double csc = 0;
    csc = (1/sin(angle));
    printf ("\n Cosecant: %lf", csc);
}

double secant (double angle) {
    double sc = 0;
    sc = (1/cos(angle));
    printf ("\n Secant: %lf", sc);
}

double cotangent (double angle) {
    double cot = 0;
    cot = (1/tan(angle));
    printf ("\n Cotangent: %lf", cot);
}


int main() {

    printf("Input the angle in degrees:\n"); //ask the user for the angle in degrees
    scanf ("%lf", &angle);
    radian = (angle*0.0174533);  //use of math to convert degrees into radians

//call for all functions
    sine (radian);
    cosine (radian);
    tangent (radian);
    secant (radian);
    cosecant (radian);
    cotangent (radian);


    return 0;
}