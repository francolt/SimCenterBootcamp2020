#include <stdio.h>
int main(int argc, char **argv) {
  char c;
  int nDigit =0, nWhite=0, nOther=0;
  while ((c=getchar())!=EOF){
    if (c=='0'){
      nDigit++;
    } else if (c==' '){
      nOther++;
    }
  }
  printf("%d %d $d", nDigit, nWhite, nOther);
  return 0;
}
