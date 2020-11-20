/*base64.h*/  
#ifndef _BASE64_H  
#define _BASE64_H  
  
#include <stdlib.h>  
#include <string.h>  
  
void base64_encode(u_int8_t *str, u_int8_t *ct, long str_len);  
unsigned char *base64_decode(unsigned char *code,  long *strLen);  
  
#endif  
