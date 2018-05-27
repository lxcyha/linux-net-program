# 1 "string.c"
# 1 "<built-in>"
# 1 "<命令行>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<命令行>" 2
# 1 "string.c"


int StrLen(char *string)
{
 int len = 0;

 while(*string++ != '\0')
  len++;

 return len;

}
