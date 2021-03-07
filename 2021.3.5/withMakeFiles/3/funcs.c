#include "p.h"

double calcHizha(double tempVrah){
    return tempVrah + (968/100*0.5);
}
double calcVrah(double tempHizha){
     return tempHizha - (968/100*0.5);
}
