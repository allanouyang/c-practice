//
//  file.c
//  c-project
//
//  Created by 欧阳 on 2018/4/6.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "file.h"

void writeAndWriteExistsFile();
void readAndWriteFileForbinary();

void fileMain() {
//    writeExistsFile();
    readAndWriteFileForbinary();
}

void readAndWriteFileForbinary() {
    FILE *f = fopen("/Users/ouyang/my/resource/c/project/file/b.txt", "rb+");
    int c1 = fputc('c', f);
    fclose(f);
}

void writeAndWriteExistsFile() {
    //r读取文件，r+允许读写文件(存在)
    FILE *f = fopen("/Users/ouyang/my/resource/c/project/file/a.txt", "r+");
    int c1 = fgetc(f);
    int c2 = fputc('f', f);
    printf("c1=%d, c1=%c, c2=%d, c2=%c\n", c1, c1, c2, c2);
    fclose(f);
}
