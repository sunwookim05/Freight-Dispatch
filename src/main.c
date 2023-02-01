#include "main.h"
#include "System.h"
#include "Scanner.h"
#include "Dispatch.h"

import Sys System;

int main(void){
    Scanner sc = new_Scanner(System.in);
    Dispatch dis = new_Dispatch();
    double money = 0.0;
    double frequency = 0.0;

    System.out.print("Enter the money: ");
    money = sc.nextDouble();
    System.out.print("Enter the frequency: ");
    frequency = sc.nextDouble();

    System.out.println("The money is: %lf", dis.dispatch(money, frequency));

    return 0;
}