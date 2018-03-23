#include <stdio.h>
#include <string.h>

#define BUF_LEN (1024 *1024 *64)
char buff[BUF_LEN];
int main(int argc, char *arg[])
{
  FILE *f;
  bzero(buff, BUF_LEN);

  f = fopen("zero_file", "w");

  while (1)
  {
    fwrite(buff, sizeof(char), BUF_LEN, f);
  }

  fclose(f);

  return 0;
}
