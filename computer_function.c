#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXLEN 100
int compute(int,int[],int[],int);
int main() {
  int operator[MAXLEN];
  int operand[MAXLEN];
  int ans;
  scanf("%d", &ans);
  int index=0;
  while(scanf("%d%d",&operand[index],&operator[index])!=EOF)
    index++;
  ans=compute(ans,operand,operator,index);
  printf("%d",ans);
  return 0;
}
int compute(int first, int number[MAXLEN], int oper[MAXLEN], int lenghth)
{
  int i = 0;
  while (i < lenghth)
  {
    if (oper[i] == 0)
    {
      first += number[i];
    }
    else if (oper[i] == 1)
    {
      first -= number[i];
    }
    else if (oper[i] == 2)
    {
      first *= number[i];
    }
    else if (oper[i] == 3)
    {
      first /= number[i];
    }
    else if (oper[i] == 4)
    {
      first %= number[i];
    }
    else
    {
      i++;
      continue;
    }
    i++;
  }
  return first;
}
