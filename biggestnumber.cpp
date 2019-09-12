//Author:
#include<iostream>
using std::cin; 
using std::cout;
int main()
{
  //declare variables here
  int firstNumber = 0;
  int secondNumber  = 0;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
cin>>firstNumber;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
cin>>secondNumber;
  //determine if first or second is bigger and store that in a third variable
int thirdNumber = 0;
if ( firstNumber > secondNumber) {
 thirdNumber = firstNumber;}
 else if  (firstNumber < secondNumber){ thirdNumber = secondNumber;
} else { cout<<" They are equal" ;}

 if  (firstNumber != secondNumber) { 
  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
cout<<thirdNumber;
  std::cout<<std::endl<<"Thank you for playing.\n";
 }
  return 0;
}
