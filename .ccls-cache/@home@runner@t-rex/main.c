#include <stdio.h>
void summ (int a, int b) {
  printf ("%d", a + b);
}
int main(void) {
  printf ("я пишу на русском на ");
  summ (2, 3);
  return 0;
}