extern int __inlineCall(int);
int foo(int a, int b);
int clientmain(int x_copy1)
{
  int ret_copy1;
  if (x_copy1 > 0)
  {
    ret_copy1 = -__inlineCall(foo(-x_copy1, -x_copy1));
  }
  else
  {
    ret_copy1 = __inlineCall(foo(x_copy1, x_copy1));
  }

  return __inlineCall(foo(5, 900)) + ret_copy1;
}

int foo(int a, int b)
{
  int c = a + b;
  return c + 3;
}

