//
//  array.c
//  c-project
//
//  Created by 欧阳 on 2018/4/4.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "array.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * getRandom() {
    static int r[10];
    int i;
    srand((unsigned)time(NULL));
    for(i = 0; i < 10; i++) {
        r[i] = rand();
        printf("r[%d] = %d \n", i, r[i]);
    }
    printf("point address %p \n", &r);
    return r;
}

void printRandom() {
    int *p;
    int i;
    printf("point address %p \n", &p);
    printf("point's value %d \n", p); //is 0, no point of address
    p = getRandom();
    printf("point's value %d \n", p);
    printf("next point's value %p \n", p+1);
    for (i = 0; i < 10; i++) {
        printf("*(p + %d) : %d\n", i, *(p+i));
    }
}

