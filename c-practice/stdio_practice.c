//
//  stdio_practice.c
//  c-project
//
//  Created by 欧阳 on 2018/4/5.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "stdio_practice.h"

void testScanf();
void testGetputChar();
void testGetsputs();

void stdioMain() {
//    testScanf();
//    testGetputChar();
    testGetsputs();
}

void testScanf() {
    char str[100];
    float f;
    scanf("input:%s %f", str, &f);  //input:hello,world! 1.567
    printf("input value is %s %f\n", str, f);
}

void testGetputChar() {
    int c;
    printf("Enter a value:");
    c = getchar();                  //abcd
    printf("\nYou entered: ");
    putchar(c);                     //a
    printf("\n");
}

void testGetsputs() {
    char str[100];
    printf("Enter a string:");
    gets(str);                  //abcde
    printf("\nYou entered: ");
    puts(str);                 //abcde
    printf("\n");
}
