#include "main.h"

#ifndef __DISPATCH_H
#define __DISPATCH_H

typedef struct _DISPATCH{
    /**
     * @brief money
     * @param double money
     * @param double frequency (%)
     * @return double
     */
    double (*dispatch)(double money, double frequency);
}Dispatch;

Dispatch new_Dispatch(void);

#endif