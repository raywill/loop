// Copyright 1999-2020 Alibaba Inc. All Rights Reserved.
// Author:
//   xiaochu.yh@alipay.com
//
#include <stdio.h>
#include <stdlib.h>

static const char *VERSION = "1.0";
static const char *AUTHOR = "raywill";
static const char *EMAIL = "hustos@qq.com";

int main(int argc, char **argv)
{
  if (2 == argc) {
    if (0 == strcmp(argv[1],"-h")) {
      printf("A CPU burning tool\n");
      printf("author: %s, %s\n", AUTHOR, EMAIL);
    }
    if (0 == strcmp(argv[1],"-v")) {
      printf("%s\n", VERSION);
    }
    exit(0);
  }
  while(1) {}
}


