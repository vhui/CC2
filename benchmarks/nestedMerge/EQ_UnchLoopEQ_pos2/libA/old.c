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

int clientmain()
{
  int INLINED_RET_0;
  int x_copy0 = 5;
  int ret_copy0;
  if (x_copy0 > 0)
  {
    ret_copy0 = -lib(-x_copy0);
  }
  else
  {
    ret_copy0 = lib(x_copy0);
  }

  INLINED_RET_0 = ret_copy0;
  return INLINED_RET_0;
}

