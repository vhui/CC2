int lib(int x, int y)
{
  if (y == 0)
  {
    return 0;
  }

  return x / y;
}

int client(int c, int d, int c_copy1, int d_copy1, int c_copy2, int d_copy2, int c_copy3, int d_copy3)
{
  int ret;
  if (d == 0)
  {
    ret = 0;
  }
  else
  {
    ret = lib(c, d);
  }

  int ret_copy1;
  if (d_copy1 == 0)
  {
    ret_copy1 = 0;
  }
  else
  {
    ret_copy1 = lib(c_copy1, d_copy1);
  }

  int ret_copy2;
  if (d_copy2 == 0)
  {
    ret_copy2 = 0;
  }
  else
  {
    ret_copy2 = lib(c_copy2, d_copy2);
  }

  int ret_copy3;
  if (d_copy3 == 0)
  {
    ret_copy3 = 0;
  }
  else
  {
    ret_copy3 = lib(c_copy3, d_copy3);
  }

  return ((ret + ret_copy1) + ret_copy2) + ret_copy3;
}

