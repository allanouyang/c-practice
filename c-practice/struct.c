//
//  struct.c
//  c-project
//
//  Created by 欧阳 on 2018/4/5.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "struct.h"
#include <stdlib.h>

struct Book {
    char *title;
    char *author;
    char subject[100];
    int book_id;
};
struct Book createBook1();
struct Book createBook2();
void printBook(struct Book book);
void printBook2(struct Book *pbook);

//位域
struct bs {
    unsigned a:1;
    unsigned b:3;
    unsigned c:4;
} bit, *pbit;

void printBs();

//以32位机为例
typedef struct
{
    unsigned char a;    //占1字节，空3字节
    unsigned int  b;    //占4字节
    unsigned char c;    //占1字节，空3字节
} debug_size1_t;
typedef struct
{
    unsigned char a;    //占1字节，空3字节
    unsigned char b;    //占1字节，空2字节
    unsigned int  c;    //占4字节
} debug_size2_t;

void structMain() {
    struct Book book1 = createBook1();
    struct Book book2 = createBook2();
    printBook(book1);
    printBook(book2);
    printBook2(&book2);
    printBs();
//    printf("debug_size1_t size=%lu,debug_size2_t size=%lu\r\n", sizeof(debug_size1_t), sizeof(debug_size2_t));
    //1.debug_size1_t 存储空间分布为a(1byte)+空闲(3byte)+b(4byte)+c(1byte)+空闲(3byte)=12(byte)。
    //1.debug_size2_t 存储空间分布为a(1byte)+b(1byte)+空闲(2byte)+c(4byte)=8(byte)。
}

struct Book createBook1() {
    struct Book book1;
    book1.title = "book1";
    book1.author = "author1";
    strcpy(book1.subject, "subject1");
    book1.book_id = 1001;
    return book1;
}

struct Book createBook2() {
    struct Book book2;
    book2.title = "book2";
    book2.author = "author2";
    strcpy(book2.subject, "subject2");
    book2.book_id = 1002;
    return book2;
}

void printBook(struct Book book) {
    printf("book.id=%d, book.title=%s, book.author=%s, book.subject=%s\n", book.book_id, book.title, book.author, book.subject);
}

void printBook2(struct Book *pbook) {
    printf("book.id=%d, book.title=%s, book.author=%s, book.subject=%s\n", pbook->book_id, pbook->title, pbook->author, pbook->subject);
}

void printBs() {
    bit.a = 1;  /* 给位域赋值（应注意赋值不能超过该位域的允许范围，否则溢出） */
    bit.b = 7;  /* 给位域赋值（应注意赋值不能超过该位域的允许范围，否则溢出） */
    bit.c = 15; /* 给位域赋值（应注意赋值不能超过该位域的允许范围，否则溢出） */
    printf("%d,%d,%d\n", bit.a, bit.b, bit.c);
    pbit = &bit;
    pbit->a = 0;
    pbit->b &= 3;
    pbit->c |= 1;
    printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);
}
