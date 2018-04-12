//
//  point.c
//  c-project
//
//  Created by 欧阳 on 2018/4/4.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "point.h"
#include <time.h>


void pointArgs(unsigned long *ptr);
void executePointArgs();
void executeArrayPointArgs();
void printArrayPointArgs1(int *ptr, int len);
void printArrayPointArgs2(int arr[5], int len);
void printArrayPointArgs3(int arr[], int len);
void executeReturnPoint();
int * returnPoint1();
int * returnPoint2();

void printAddr() {
    testSimple();
    printArrayPoint();
    printCharArrayPoint();
    printPointPoint();
    executePointArgs();
    executeArrayPointArgs();
    executeReturnPoint();
}

void testSimple() {
    int var1;
    char var2[10];
    int * ip = NULL;
    printf("ip指针值 %p \n", ip);
    int * pvar1;
    printf("var1 变量的地址： %p\n", &var1);
    pvar1 = &var1;
    printf("var1 变量的地址： %p\n", &var1);
    printf("pvar1 指针地址: %p \n", &pvar1);
    printf("var2 变量的地址： %p\n", &var2);
}

void printArrayPoint() {
    int arr[] = {10, 20, 30};
    int i, *ptr[3], MAX = 3;
    for (i = 0; i < MAX; i++) {
        ptr[i] = &arr[i];
    }
    for (i = 0; i < MAX; i++) {
        printf("arr[%d]'s address is: %p\n", i, ptr[i]);
    }
}

void printCharArrayPoint() {
    int *names[] = {"Zara Ali abc", "Hina Ali a", "Nuha Ali", "Sara Ali c"};
    for (int i = 0; i < 4; i ++) {
        printf("names[%d]'s value: %s\n", i, names[i]);
    }
}

void printPointPoint() {
    int var = 10, *ptr = &var, **pptr = &ptr;
    printf("var = %d, *ptr = %d, **pptr = %d \n", var, *ptr, **pptr);
}

void pointArgs(unsigned long *ptr) {
    *ptr = time(NULL);
}

void executePointArgs() {
    unsigned long sec;
    pointArgs(&sec);
    printf("sec is %ld\n", sec);
}

void executeArrayPointArgs() {
    int arr[] = {10, 20, 30, 40, 50};
    printArrayPointArgs1(arr, 5);
    printArrayPointArgs2(arr, 5);
    printArrayPointArgs3(arr, 5);
}

void printArrayPointArgs1(int *ptr, int len) {
    for (int i = 0; i < len; i ++ ) {
        printf("elements[%d] value is %d \n", i, *(ptr+i));
    }
}

void printArrayPointArgs2(int arr[5], int len) {
    for (int i = 0; i < len; i ++ ) {
        printf("elements[%d] value is %d \n", i, arr[i]);
    }
}

void printArrayPointArgs3(int arr[], int len) {
    for (int i = 0; i < len; i ++ ) {
        printf("elements[%d] value is %d \n", i, arr[i]);
    }
}

void executeReturnPoint() {
    int *a1 = returnPoint1();
    int *a2 = returnPoint2();
    printf("*a1 value is %d \n", *a1);
    printf("*a2 value is %d %d \n", *a2, *(a2+1));
}

int * returnPoint1() {
    static int a = 5;
    return &a;
}

int * returnPoint2() {
    static int a[] = {1,2};
    return a;
}


