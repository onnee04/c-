#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class AllNumbers{

public:
    int n;

    void table()
    {

        cout<<"Enter number for multiplication table=";
        cin>>n;
        for(int i=1;i<=10;i++)
        {
            cout<<n<<"X"<<i<<"="<<n*i<<endl;

        }
    }

    void factorial()
    {
      cout<<"Enter number for factorial=";
      cin>>n;
      int fact=1;
      for(int i=n;i>=1;i--)
      {
          fact=fact*i;
          cout<<i<<" ";
      }
      cout<<"="<<fact<<endl;
    }
    void prime()
    {
       cout<<"Enter number to check prime=";
      cin>>n;
      int counting=0;
      for(int i=2;i<n;i++)
      {
          if(n%i==0)
          {
             counting++;
             break;
          }
          else{
            continue;
          }
      }
          if(counting==0)
          {
              cout<<n<<" is prime"<<endl;
          }
          else{
                cout<<n<<" is not prime"<<endl;

          }


    }
    void gcd_lcm()
    {
        int n1,n2,r,num1,num2,lcm,gcd;
        cin>>num1;
        cin>>num2;
        if(num1<num2)
        {
            n1=num1;
            n2=num2;
        }
        else{
            n2=num1;
            n1=num2;
        }
        while(n1!=0)
        {
          r=n2%n1;
          n2=n1;
          n1=r;
        }
        gcd=n2;
        cout<<"GCD= "<<gcd<<endl;
        lcm=(num1*num2)/gcd;
        cout<<"LCM= "<<lcm<<endl;

    }
    void sumOfDigit()
    {
        int sum=0,result,remainder;
        cout<<"enter the number= ";
        cin>>n;
        int number=n;
        while(number!=0)
        {
            result=number/10;
            remainder=number%10;
            sum=sum+remainder;
            number=result;
        }
        cout<<"sum of digits= "<<sum<<endl;
    }
   void reverseDigit()
    {
        int sum=0,result,remainder;
        cout<<"enter the number= ";
        cin>>n;
        int number=n;
        while(number!=0)
        {
            result=number/10;
            remainder=number%10;
            sum=sum*10+remainder;
            number=result;
        }
        cout<<"reverse of the number= "<<sum<<endl;
    }
    void palindrome()
    {
        int sum=0,result,remainder;
        cout<<"enter the number= ";
        cin>>n;
        int number=n;
        while(number!=0)
        {
            result=number/10;
            remainder=number%10;
            sum=sum*10+remainder;
            number=result;
        }

        if( n == sum )
        {
            cout<<"Number is palindrome"<<endl;
        }
        else{
            cout<<"Number is not palindrome"<<endl;
        }
    }

   void armstrong()
    {
        int sum=0,result,remainder;
        cout<<"enter the number= ";
        cin>>n;
        int number=n;
        while(number!=0)
        {
            result=number/10;
            remainder=number%10;
            sum=sum+remainder*remainder*remainder;
            number=result;
        }
        if(sum==n)
        {
            cout<<"Armstrong number"<<endl;
        }
        else{
            cout<<"Not armstrong number"<<endl;
        }
    }

};
int main()
{
    AllNumbers s;
    s.table();
    s.factorial();
    s.prime();
    s.gcd_lcm();
    s.sumOfDigit();
    s.reverseDigit();
    s.palindrome();
    s.armstrong();
    getch();
}
