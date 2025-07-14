// //by friend  functipm
// #include<bits/stdc++.h>
// using namespace std;

// class Num{
  
//   private:
//   int x,y;

// public:
//   Num(int a,int b)
//   {
//       x=a;
//       y=b;
//       cout<<x<<" "<<y<<endl;
//   }
//   friend void operator --(Num);
//   };

// void operator --(Num obj)
// {
//     cout<<--obj.x<<" "<<--obj.y;
// }

// int main()
// {
//     Num N(3,4);
//     --N;
    
// }


//By member funcion
#include<bits/stdc++.h>
using namespace std;

// class Num{
  
//   private:
//   int x,y;
  
//   public:
//   Num(int a,int b)
//   {
//       x=a;
//       y=b;
//   }
//    void operator --(){ //postfix me agrument pss kr dete h int ar fir parameter me koi integer value ko pss kr denge
//       x= --x;
//       y= --y;
//   }
//   void display(){
//       cout<<x<<endl<<y<<endl;
//   }
  
// };
class Num{
  
  private:
  int x,y;
  
  public:
  Num(int a,int b)
  {
      x=a;
      y=b;
  }
   void operator ++(int){ //postfix me agrument pss kr dete h int ar fir parameter me koi integer value ko pss kr denge
       x++;
       y++;
  }
  void display(){
      cout<<x<<endl<<y<<endl;
  }
  
};

int main()
{
    Num N(3,4);
    N.display();
    N++;
    N.display();
    
}

