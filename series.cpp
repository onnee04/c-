#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class series{
public:
    int s1=0,s2=0,s4=0,s6=1,s7=1,s8=0;
    float s3=0,s5=0;

 void sum1(int n)
 {

     for(int i=1;i<=n;i++)
     {

         s1=s1+i;
     }
     cout<<"sum1="<<s1<<endl;
 }

 void sum2(int n1,int n2)
 {

     int a=1,b=2;
     while(a<=n1 && b<=n2)
     {

         s2=s2+a*b;
         a=a+1;
         b=b+1;
     }
     cout<<"sum2="<<s2<<endl;
 }
 void sum3(float n)
 {

     for(float i=1.5;i<=n;i++)
     {

         s3=s3+i;
     }
     cout<<"sum3="<<s3<<endl;
 }
 void sum4(int n)
 {

     for(int i=1;i<=n;i++)
     {

         s4=s4+i*i;
     }
     cout<<"sum4="<<s4<<endl;
 }
 void sum5(int n)
 {

     for(float i=1;i<=n;i++)
     {

         s5=s5+(1/i);
     }
     cout<<"sum5="<<s5<<endl;
 }
 void sum6(int n)
 {

     for(int i=1;i<=n;i++)
     {

         s6=s6*i;
     }
     cout<<"sum6="<<s6<<endl;
 }
 void sum7(int n)
 {

     for(int i=1;i<=n;i++)
     {

         s7=s7*pow(i,2);
     }
     cout<<"sum7="<<s7<<endl;
 }
 void sum8(int n)
 {

     for(int i=1;i<=n;i++)
     {
        if(i%2==0)
        {
            s8=s8-i;
        }
        else{
            s8=s8+i;
        }

     }
     cout<<"sum8="<<s8<<endl;
 }

 void fibonacci(int n)
 {
     int first=0,second=1,fibo,r=0;
     while(r<n)
     {

         if(r<=1)
         {
             fibo=r;
         }
         else{
            fibo=first+second;
            first=second;
            second=fibo;
         }
         cout<<fibo<<" ";
         r++;
     }


 }


};
int main(){

series s;
s.sum1(4); //1+2+3+.......+n
s.sum2(4,5); //1*2+2*3+3*4*5
s.sum3(4);//1.5+2.5+3.5+...+n
s.sum4(4);//1^2+2^2+3^2+...+n^2
s.sum5(4);//1+1/2+1/3+1/4+...+1/n
s.sum6(4);//1*2*3*4*5....*n
s.sum7(3);//1^2*2^2*.....*n^2
s.sum8(4);//1-2+3-4+....
s.fibonacci(7);//0 1 1 2 3 5 8
getch();
}
