#include "Dispatch.h"

double dispatch(double money, double frequency){
    return (double)(money + ((100 * frequency) / money));
}

Dispatch new_Dispatch(void){
    Dispatch dis ={
        .dispatch = dispatch
    };
    return dis;
}