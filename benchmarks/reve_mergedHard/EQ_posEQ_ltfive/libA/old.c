extern int __inlineCall(int);
int lib(int x)
{
  int counter = 0;
  while (x < 0)
  {
    x++;
    counter++;
  }

  return counter;
}

int client(int x, int x_copy1)
{
  int ret;
  if (x > 0)
  {
    ret = -__inlineCall(lib(-x));
  }
  else
  {
    ret = __inlineCall(lib(x));
  }

  int ret_copy1;
  if (x_copy1 < 0)
  {
    ret_copy1 = (-__inlineCall(lib((-x_copy1) * 5))) / 5;
  }
  else
  {
    ret_copy1 = (__inlineCall(lib((x_copy1 + 1) * 5)) / 5) - 1;
  }

  return ret + ret_copy1;
}

