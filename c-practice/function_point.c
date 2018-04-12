//
//  function_point.c
//  c-project
//
//  Created by 欧阳 on 2018/4/5.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "function_point.h"
int callbackFunction(int arg);
void invokeCallbackFunction(int (*callback)(int), int arg);

void functionPointMain() {
    invokeCallbackFunction(callbackFunction, 20);
}

void invokeCallbackFunction(int (*callback)(int), int arg) {
    int (*p)(int) = callback;       //定义函数指针并赋值
    printf("function return value is %d\n", p(arg));
}

int callbackFunction(int arg) {
    return arg;
}

