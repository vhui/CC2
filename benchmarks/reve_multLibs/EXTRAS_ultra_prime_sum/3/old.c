extern int __inlineCall(int);
int lib(int a)
{
  int i = 2;
  int count = 0;
  while (i < a)
  {
    if ((a % i) != 0)
    {
      count++;
    }

    i++;
  }

  return count;
}

int client(int n, int n_copy1, int n_copy2)
{
  int i = 0;
  int sum = 0;
  while (i <= n)
  {
    if (__inlineCall(lib(i)) == 0)
    {
      sum += i;
    }

    i++;
  }

  int i_copy1 = 0;
  int sum_copy1 = 0;
  while (i_copy1 <= n_copy1)
  {
    if (__inlineCall(lib(i_copy1)) == 0)
    {
      sum_copy1 += i_copy1;
    }

    i_copy1++;
  }

  int i_copy2 = 0;
  int sum_copy2 = 0;
  while (i_copy2 <= n_copy2)
  {
    if (__inlineCall(lib(i_copy2)) == 0)
    {
      sum_copy2 += i_copy2;
    }

    i_copy2++;
  }

  return ((__inlineCall(lib(sum)) == 0) + (__inlineCall(lib(sum_copy1)) == 0)) + (__inlineCall(lib(sum_copy2)) == 0);
}

