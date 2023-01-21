#include <stdio.h>
#include <string.h>

#define MAXLINE 1000            /* max line size */

int KRgetline(char s[], int lim);

void reverse(char s[])
{
  int len, i;
  char t;

  len = strlen(s);
  if (s[len-1]=='\n') len--;
  for (i=0; i<len/2; i++) {
    t = s[i];
    s[i] = s[len-i-1];
    s[len-i-1] = t;
  }
}
    

int main()
{
  int len, max;
  char line[MAXLINE];

  while (KRgetline(line, MAXLINE)>0) {
    reverse(line);
    printf("%s",line);
  }
  return 0;
}

int KRgetline(char s[], int lim)
{
  int c, i;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
    s[i] = c;
  if (c=='\n') {
    s[i] = '\n';
    i++;
  }
  s[i] = '\0';
  return i;
}