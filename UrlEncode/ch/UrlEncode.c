#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int url_issafe(int c)
{
	return	(c >= 'a' && c <= 'z')
	|| 	(c >= 'A' && c <= 'Z')
	|| 	(c >= '0' && c <= '9')
	|| 	NULL != strchr(".:-_/?&=", c);
}

static int param_issafe(int c)
{
  return  (c >= 'a' && c <= 'z')
  ||  (c >= 'A' && c <= 'Z')
  ||  (c >= '0' && c <= '9')
  ||  NULL != strchr(".-_", c);
}

char* UrlEncodeLight(char *retarray, char *input)
{
	const char *p;
  size_t length = strlen(input);
  char dest[512] = "";
  char out[512] = "";
	for (int i = 0; i < length; i++) {
		unsigned char c = input[i];
		if (url_issafe(c))
		  snprintf(dest, 4, "%c", c);
		else
      snprintf(dest, 4, "%%%02X", c);
    strcat(out, dest);
	}
  snprintf(retarray, strlen(out), "%s", out);
	return retarray;
}

char* UrlEncodeFull(char *retarray, char *input)
{
  const char *p;
  size_t length = strlen(input);
  char dest[512] = "";
  char out[512] = "";
  for (int i = 0; i < length; i++) {
    unsigned char c = input[i];
    if (param_issafe(c))
      snprintf(dest, 4, "%c", c);
    else
      snprintf(dest, 4, "%%%02X", c);
    strcat(out, dest);
  }
  snprintf(retarray, strlen(out), "%s", out);
  return retarray;
}
