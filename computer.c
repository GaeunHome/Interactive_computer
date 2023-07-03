#include <stdio.h>
#include <stdlib.h>
int main() {
  int operators, operand, ans;
  scanf("%d", &ans);
  while(scanf("%d%d", &operand, &operators) != EOF) {
      switch(operators) {
        case 0:
          ans += operand;
          break;
        case 1:
          ans -= operand;
          break;
        case 2:
          ans *= operand;
          break;
        case 3:
          ans /= operand;
          break;
        case 4:
          ans %= operand;
          break;
      }
  }
  printf("%d", ans);
  return 0;
}
