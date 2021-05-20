#include<iostream>
#include<conio.h>

class Pattern{

public:
    int n;
      void rightangle(int n)
      {

          for(int i=1;i<=n;i++)
          {

              for(int j=1;j<=n;j++)
              {
                cout << "*" ;

              }
              cout << endl;          }
      }



};
int main()
{
    Pattern p;
    p.n=5;
    p.rightangle(n);
    getch();

}
