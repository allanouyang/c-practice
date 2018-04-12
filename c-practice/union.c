//
//  union.c
//  c-project
//
//  Created by 欧阳 on 2018/4/5.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "union.h"

union Data{
    int i;
    float f;
    char str[20];
};
void printUnionSize();
void printUnionData();
void printUnionData2();

void unionMain() {
    printUnionSize();
    printUnionData();
    printUnionData2();
}

void printUnionSize() {
    union Data data;
    printf("union Data size is %d\n", sizeof(data));
}

void printUnionData() {
    union Data data;
    data.i = 10;
    data.f = 200.5;
    strcpy(data.str, "C Programming");
    printf("data.i=%d, data.f=%f, data.str=%s\n", data.i, data.f, data.str);
}

void printUnionData2() {
    union Data data;
    data.i = 10;
    printf("data.i=%d\n", data.i);
    data.f = 200.5;
    printf("data.f=%f\n", data.f);
    strcpy(data.str, "C Programming");
    printf("data.str=%s\n", data.str);
}
