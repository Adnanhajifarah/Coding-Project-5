#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include<ctime>
#include <fstream>
using namespace std;
//problem1 

void inputc(int x){
  while(x!=1&&x!=2&&x!=3&&x!=4&&x!=5){
    cout<<"\n invalid input please read directions and re-enter\n";
    cin>>x;
  }
}
int main() {

int u=33;
int sd=0; 
 for(int y=33; y<128; y++){ 
   int z=sd%16;
   if(z==0){
     cout<<endl;
   }
   sd=sd+1;
 cout<<char(u);
 u=u+1;
 }
//problem 2
int choice;
double num1;
double num2;
double ans;
char cn;
string op;
while(0==0){
cout<<"\n\n\n Press a number to make a choice\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Quit\n";
cin>>choice;
if (choice==5){
break;
}
cout<<"\n Please enter the first number that you want to use in the operation you chose above\n";
cin>>num1;
cout<<"\n Please enter the second number that you want to use in the operation you chose above\n";
cin>>num2;
inputc(choice);
if (choice==1){
ans=num1+num2;
op="+";
}
else if(choice==2){
  ans=num1-num2;
  op="-";
}
else if(choice==3){
  ans=num1*num2;
  op="x";
}
else if (choice==4){
ans=num1/num2;
op="÷";
}
if (choice==5){
break;
}

cout<<endl<<num1<<"\n"<<num2<<op<<"\n-----\n"<<"\npress enter to see answer\n";
cin.ignore();
cin.get(cn);
cout<<"\n"<<num1<<"\n"<<num2<<op<<"\n-----\n"<<ans<<"\n";
}

//problem 3
 for(double C=0;C<21;C++){
 double F;
 cout<<C<<" ";
F=((9.0/5.0) * C) + 32;
cout<<F<<"\n";
 }
 
//problem 4
int rnd;
int guess;
rnd=rand()%100;
cout<<"\nPlease take a guess 1-10\n";
cin>>guess;
while(guess!=rnd){
if(guess<1||guess>100){
cout<<"\nPlease take a guess 1-100 ONLY\n";
cin>>guess;
}
if(guess>rnd){
  cout<<"\nToo high try again\n";
  cin>>guess;
}
else if(guess<rnd){
  cout<<"\nToo low try again\n";
  cin>>guess;
}
}
 if(guess==rnd){
cout<<"\nCongratualtions you got it right!\n";
}
//problem 5
int y;
  int x=0;
  int d;
  int t=0;
  cout<<"\nenter a number 1-15 \n";
  cin>>y;
while(y<1||y>15){
cout<<"\nenter a number 1-15 please. \n";
cin>>y;
}
 while(t<y){

 
  while(y>x){
    cout<<"X ";
    x=x+1;
    d=x%y;
    if(d==0){
      cout<<endl;
    }
    

  }
  x=0;
  t=t+1;
 }  
 //Part 2
 ifstream randomtxt;
 int print;
 randomtxt.open("random.txt");
double sum=0;
double average;
double amount=0;
while(randomtxt >> print) {
  cout<<print<<endl;
  sum=sum+print;
  amount=amount+1;
}
average=sum/amount;
cout<<endl<<"\nThe amount of numbers in the file is "<<amount<<"\n\nThe sum of all the number in the file is "<<sum<<"\n\nand the average of all the numbers in the file is "<<average;
} 