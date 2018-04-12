//
//  preprocessor.c
//  c-project
//
//  Created by 欧阳 on 2018/4/6.
//  Copyright © 2018年 欧阳. All rights reserved.
//

#include "preprocessor.h"
void preprocessorError();

void preprocessorMain() {
    preprocessorError();
    
}

void preprocessorError() {
    //if delete this define, compile stage write #error
    #define ERROR_DEF
    #ifndef ERROR_DEF
        #error not define a error
    #endif
    printf("ok... \n");
}
