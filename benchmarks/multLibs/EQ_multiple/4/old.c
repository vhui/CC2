int lib(int x)
{
  return x % 5;
}

int client(int x, int x_copy1, int x_copy2, int x_copy3)
{
  int ret;
  x = (x * 5) * 6;
  if (lib(x) == 0)
  {
    ret = 1;
  }
  else
  {
    ret = 0;
  }

  int ret_copy1;
  x_copy1 = (x_copy1 * 5) * 6;
  if (lib(x_copy1) == 0)
  {
    ret_copy1 = 1;
  }
  else
  {
    ret_copy1 = 0;
  }

  int ret_copy2;
  x_copy2 = (x_copy2 * 5) * 6;
  if (lib(x_copy2) == 0)
  {
    ret_copy2 = 1;
  }
  else
  {
    ret_copy2 = 0;
  }

  int ret_copy3;
  x_copy3 = (x_copy3 * 5) * 6;
  if (lib(x_copy3) == 0)
  {
    ret_copy3 = 1;
  }
  else
  {
    ret_copy3 = 0;
  }

  return ((ret + ret_copy1) + ret_copy2) + ret_copy3;
}
