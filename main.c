//
// Created by Liming Shao on 2018/4/24.
//

#include <stdio.h>
#include "AES.h"
#include <string.h>

#define SIZE 64

int main() 
{
    const uint8_t key2[]="1234567890123456";
    
    uint8_t data[SIZE] = "hello world! This is a test.";

    uint8_t ct2[SIZE] = {0};
    uint8_t plain2[SIZE] = {0};
    if(-1 == aesEncrypt(key2, 16, data, ct2, SIZE))
    {
        printf("aesEncrypt ERROR!\n");
        goto exit;
    }    

    printf("\nplain text:\n%s\n", data);
    printf("\nbase64=%s\n", ct2);

    if(-1 == aesDecrypt("1234567890123456", 16, ct2, plain2))
    {
        printf("aesDecrypt ERROR!\n");
        goto exit;
    }

    printf("\noutput plain text:\n%s\n", plain2);

exit:
    return 0;
}
