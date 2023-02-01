#include "Dispatch.h"

double dispatch(double money, double frequency){
    return (double)(money + (money * (frequency / 100)));
}

Dispatch new_Dispatch(void){
    Dispatch dis ={
        .dispatch = dispatch
    };
    return dis;
}