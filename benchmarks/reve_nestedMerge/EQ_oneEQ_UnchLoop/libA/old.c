extern int __inlineCall(int);

int foo(int a, int b)
{
  int c = 1;
  for (int i = 0; i < a; ++i)
  {
    c = c + b;
  }

  return c;
}

int client(int x)
{
  int INLINED_RET_0;
  int INLINED_RET_1;
  int ret;
  INLINED_RET_0 = __inlineCall(foo(5, 900));
  if (x > INLINED_RET_0)
  {
    ret = x;
  }
  else
  {
    INLINED_RET_1 = __inlineCall(foo(5, 900));
    ret = INLINED_RET_1;
  }

  return ret;
}


