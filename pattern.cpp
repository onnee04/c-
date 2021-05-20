#include<iostream>
#include<conio.h>
using namespace std;
class Pattern{

public:
    int n;
      void rightangle(int n)
      {

          for(int i=1;i<=n;i++)
          {

              for(int j=1;j<=i;j++)
              {
                cout << j ;

              }
              cout <<endl;          }
      }

      void binary_right(int n)
      {
          for(int i=1;i<=n;i++)
          {

              for(int j=1;j<=i;j++)
              {
                cout << j%2 ;

              }
              cout <<endl;

      }


      }
      void upsidedown_right(int n)
      {
          for(int i=n;i>=1;i--)
          {

              for(int j=1;j<=i;j++)
              {
                cout << "* " ;

              }
              cout <<endl;

      }


      }
      void half(int n)
      {
          for(int i=1;i<=n;i++)
          {

              for(int j=1;j<=i;j++)
              {
                cout << "# " ;

              }
              cout <<endl;

      }
      for(int i=n-1;i>=1;i--)
          {

              for(int j=1;j<=i;j++)
              {
                cout << "# " ;

              }
              cout <<endl;

      }


      }
      void anti_right(int n)
      {
       for(int i=1;i<=n;i++)
          {

              for(int j=1;j<=n-i;j++)
              {
                cout << " " ;

              }
              for(int j=1;j<=i;j++)
              {
                cout << j ;

              }
              cout <<endl;

      }



      }
      void up_right(int n)
      {
       for(int i=n;i>=1;i--)
          {

              for(int j=1;j<=n-i;j++)
              {
                cout << " " ;

              }
              for(int j=1;j<=i;j++)
              {
                cout << "*" ;

              }
              cout <<endl;

      }



      }
      void antihalf(int n)
      {
          for(int i=1;i<=n;i++)
          {

              for(int j=1;j<=n-i;j++)
              {
                cout << " " ;

              }
              for(int j=1;j<=i;j++)
              {
                cout << j ;

              }
              cout <<endl;

      }

       for(int i=n-1;i>=1;i--)
          {

              for(int j=1;j<=n-i;j++)
              {
                cout << " " ;

              }
              for(int j=1;j<=i;j++)
              {
                cout << j ;

              }
              cout <<endl;

      }



      }
      void rectangle(int n)
      {

          for(int i=1;i<=n;i++)
          {

              for(int j=1;j<=n;j++)
              {

                  cout<< j;

              }
              cout<<endl;
          }
      }
      void row_col(int n)
      {

          for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    cout<<i*j<<" ";
                }
                cout<<endl;
            }

     }
     void pyramid1(int n)
      {

          for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }
                for(int j=1;j<=2*i-1;j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }

     }
     void pyramid2(int n)
      {

          for(int i=n;i>=1;i--)
            {
                for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }
                for(int j=1;j<=i;j++)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }

     }
     void fullpyramid(int n)
      {
          for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }
                for(int j=1;j<=2*i-1;j++)
                {
                    cout<<"#";
                }
                cout<<endl;
            }

          for(int i=n-1;i>=1;i--)
            {
                for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }
                for(int j=1;j<=2*i-1;j++)
                {
                    cout<<"#";
                }
                cout<<endl;
            }

     }
     void hollow_rec(int n)
     {

         for(int i=1;i<=n;i++)\
         {

             for(int j=1;j<=n;j++)
             {

                 if(i==1 || i==n || j==1 || j==n)
                 {

                     cout<< "$";
                 }
                 else{
                     cout<< " ";
                 }
             }
             cout<<endl;
         }
     }
     void hollow_triangle(int n)
     {

         for(int i=1;i<=n;i++)
         {

             for(int j=1;j<=i;j++)
             {

                 if(i==1 || i==n || j==1 || j==i)
                 {

                     cout<< "* ";
                 }
                 else{
                     cout<< "  ";
                 }
             }
             cout<<endl;
         }
     }
     void cross(int n)
     {

         for(int i=1;i<=n;i++)
         {

             for(int j=1;j<=n;j++)
             {

                 if( i==j || i+j==n+1)
                 {

                     cout<< "$";
                 }
                 else{
                     cout<< " ";
                 }
             }
             cout<<endl;
         }
     }
     void floyd_triangle(int n)
     {

         int a=1;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=i;j++)
             {
                 cout<<a<<" ";
                 a++;

             }
             cout<<endl;
         }
     }
     void diff_triangle(int n)
     {


         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=n-i;j++)
             {
                 cout<<"  ";


             }
             for(int j=1;j<=i;j++)
             {
                 cout<<j<<" ";


             }
             for(int j=i-1;j>=1;j--)
             {
                 cout<<j<<" ";


             }
             cout<<endl;
         }
     }

     void diff_triangle1(int n)
     {

           for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=n-i;j++)
             {
                 cout<<"  ";


             }
             for(int j=1;j<=i;j++)
             {
                 cout<<j<<" ";


             }
             for(int j=i-1;j>=1;j--)
             {
                 cout<<j<<" ";


             }
             cout<<endl;
         }

         for(int i=n-1;i>=1;i--)
         {
             for(int j=1;j<=n-i;j++)
             {
                 cout<<"  ";


             }
             for(int j=1;j<=i;j++)
             {
                 cout<<j<<" ";


             }
             for(int j=i-1;j>=1;j--)
             {
                 cout<<j<<" ";


             }
             cout<<endl;
         }
     }


};
int main()
{
    Pattern p;
    p.rightangle(5);
    p.binary_right(5);
    p.upsidedown_right(4);
    p.half(5);
    p.anti_right(5);
    p.up_right(5);
    p.antihalf(5);
    p.rectangle(5);
    p.row_col(4);
    p.pyramid1(5);
    p.pyramid2(5);
    p.fullpyramid(5);
    p.hollow_rec(5);
    p.hollow_triangle(5);
    p.cross(5);
    p.floyd_triangle(5);
    p.diff_triangle(5);
    p.diff_triangle1(5);

    getch();

}
