//
// Created by Liming Shao on 2018/4/24.
//

#ifndef AES_AES_H
#define AES_AES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

//函数功能：AES加密
//参数key:密钥
//参数keyLen:密钥长度
//参数pt:明文缓冲区
//参数ct:密文缓冲区
//参数bufLen:密文缓冲区长度
//返回值:成功返回0，失败返回-1
//注意：密文缓冲区的长度要比明文长度大1.5倍
int aesEncrypt(const uint8_t *key, uint32_t keyLen, uint8_t *pt, uint8_t *ct, uint16_t bufLen);

//函数功能：AES解密
//参数key:密钥
//参数keyLen:密钥长度
//参数ct:密文缓冲区
//参数pt:明文缓冲区
//返回值:成功返回0，失败返回-1
int aesDecrypt(const uint8_t *key, uint32_t keyLen, uint8_t *ct, uint8_t *pt);

#ifdef __cplusplus
}
#endif

#endif //AES_AES_H
