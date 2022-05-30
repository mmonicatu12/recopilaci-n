#include <iostream>
#include <stdio.h>

using namespace std;

int f1(int x)
{
x++;
return x;
}
int f2(int x, int y)
{
return x + y;
}

main()
{
int x = 3, y = 6, a, b, c;
a = f1(x);
b = f1(y);
c = f2(a,b);
printf("%d , %d , %d", x, y, c);

}


