int lib(int x, int b)
{
  int ret = 1;
  int primes[8] = {2, 3, 5, 7, 11, 13, 17, 19};
  if (b == 0)
  {
    ret = 0;
  }
  else
  {
    int done = 0;
    for (int i = 0; i < 8; i++)
    {
      int mod = x % primes[i];
      if ((!done) && (mod == 0))
      {
        ret = 0;
        done = 1;
      }

    }

  }

  return ret;
}

int client(int x, int x_copy1, int x_copy2, int x_copy3, int x_copy4, int x_copy5, int x_copy6, int x_copy7, int x_copy8, int x_copy9, int x_copy10, int x_copy11, int x_copy12)
{
  int ret;
  if (x < 19)
  {
    ret = lib(20, 1);
  }
  else
  {
    ret = lib(x, 1);
  }

  int ret_copy1;
  if (x_copy1 < 19)
  {
    ret_copy1 = lib(20, 1);
  }
  else
  {
    ret_copy1 = lib(x_copy1, 1);
  }

  int ret_copy2;
  if (x_copy2 < 19)
  {
    ret_copy2 = lib(20, 1);
  }
  else
  {
    ret_copy2 = lib(x_copy2, 1);
  }

  int ret_copy3;
  if (x_copy3 < 19)
  {
    ret_copy3 = lib(20, 1);
  }
  else
  {
    ret_copy3 = lib(x_copy3, 1);
  }

  int ret_copy4;
  if (x_copy4 < 19)
  {
    ret_copy4 = lib(20, 1);
  }
  else
  {
    ret_copy4 = lib(x_copy4, 1);
  }

  int ret_copy5;
  if (x_copy5 < 19)
  {
    ret_copy5 = lib(20, 1);
  }
  else
  {
    ret_copy5 = lib(x_copy5, 1);
  }

  int ret_copy6;
  if (x_copy6 < 19)
  {
    ret_copy6 = lib(20, 1);
  }
  else
  {
    ret_copy6 = lib(x_copy6, 1);
  }

  int ret_copy7;
  if (x_copy7 < 19)
  {
    ret_copy7 = lib(20, 1);
  }
  else
  {
    ret_copy7 = lib(x_copy7, 1);
  }

  int ret_copy8;
  if (x_copy8 < 19)
  {
    ret_copy8 = lib(20, 1);
  }
  else
  {
    ret_copy8 = lib(x_copy8, 1);
  }

  int ret_copy9;
  if (x_copy9 < 19)
  {
    ret_copy9 = lib(20, 1);
  }
  else
  {
    ret_copy9 = lib(x_copy9, 1);
  }

  int ret_copy10;
  if (x_copy10 < 19)
  {
    ret_copy10 = lib(20, 1);
  }
  else
  {
    ret_copy10 = lib(x_copy10, 1);
  }

  int ret_copy11;
  if (x_copy11 < 19)
  {
    ret_copy11 = lib(20, 1);
  }
  else
  {
    ret_copy11 = lib(x_copy11, 1);
  }

  int ret_copy12;
  if (x_copy12 < 19)
  {
    ret_copy12 = lib(20, 1);
  }
  else
  {
    ret_copy12 = lib(x_copy12, 1);
  }

  return (((((((((((ret + ret_copy1) + ret_copy2) + ret_copy3) + ret_copy4) + ret_copy5) + ret_copy6) + ret_copy7) + ret_copy8) + ret_copy9) + ret_copy10) + ret_copy11) + ret_copy12;
}

