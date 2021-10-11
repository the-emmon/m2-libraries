#ifndef UrlEncode_H_
#define UrlEncode_H_
#include "X2C.h"

typedef X2C_CHAR urlString[512];

extern X2C_CHAR * UrlEncodeFull(urlString, urlString);

extern X2C_CHAR * UrlEncodeLight(urlString, urlString);


#endif /* UrlEncode_H_ */
