extern int __inlineCall(int);
int lib(int x)
{
  int ret;
  if (x <= 0)
    ret = -1;
  else
    ret = 1;

  return ret;
}

int client(int x, int x_copy1, int x_copy2, int x_copy3, int x_copy4, int x_copy5, int x_copy6, int x_copy7, int x_copy8, int x_copy9, int x_copy10, int x_copy11, int x_copy12, int x_copy13, int x_copy14)
{
  return (((((((((((((__inlineCall(lib(x)) + __inlineCall(lib(x_copy1))) + __inlineCall(lib(x_copy2))) + __inlineCall(lib(x_copy3))) + __inlineCall(lib(x_copy4))) + __inlineCall(lib(x_copy5))) + __inlineCall(lib(x_copy6))) + __inlineCall(lib(x_copy7))) + __inlineCall(lib(x_copy8))) + __inlineCall(lib(x_copy9))) + __inlineCall(lib(x_copy10))) + __inlineCall(lib(x_copy11))) + __inlineCall(lib(x_copy12))) + __inlineCall(lib(x_copy13))) + __inlineCall(lib(x_copy14));
}

