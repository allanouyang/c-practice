//
//  typedef.c
//  c-project
//
//  Created by 欧阳 on 2018/4/5.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "typedef.h"

typedef struct Books {
    char *title;
    char author[50];
} Book;

#define TRUE 1
#define PRINTEND printf("end...\n");

void typedefMain() {
    Book book;
    strcpy(book.author, "ouyang");
    book.title = "c programming";
    printf("book.author=%s, book.title=%s\n", book.author, book.title);
    printf("TRUE value is: %d \n", TRUE);
    PRINTEND
}



