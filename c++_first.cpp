//INTRODUCTION TO C++

/*#include <iostream>
using namespace std;
int main()
{
   cout<<"hello world"<<endl;
   cout<<"this is awesome";
   return 0; 
}*/

/*/insertion operator is <<

//HEADERS
#include is used for adding a standard or user-defined header files to the program.
The <iostream> header defines the standard stream objects that input and output data.

stdio. h is the header file for standard input and output. This is useful for getting the input from the user(Keyboard) and output result text to the monitor(screen).

//using namespace std
A namespace is a declarative region that provides a scope to the identifiers (names of elements) inside it.
In our code, the line using namespace std; tells the compiler to use the std (standard) namespace

The std namespace includes features of the C++ Standard Library.

//new line
<<endl;
One way to print two lines is to use the endl manipulator, which will put in a line break.*/

/*\n could also be used to print out multiples lines

The backslash (\) is called an escape character, and indicates a "special" character.

# COMMENTS: // SINGLE LINE
/*
 MULTILINE*/

 //integer:

/*#include <iostream>
using namespace std;
int main()
{
   int a=10;
   cout<<a;
   return 0; 
}*/

//C++ IS CASE SENSITIVE PROGRAMMING LANG


//cin 
/*To enable the user to input a value, use cin in combination with the extraction operator (>>). The variable containing the extracted data follows the operator.
The following example shows how to accept user input and store it in the num variable:
ex:
int num;
cin>>num;

As with cout, extractions on cin can be chained to request more than one input in a single statement: cin >> a >> b;*/

//ex:
/*#include <iostream>
using namespace std;
int main()
{
    int a,b,sum;
cout<<"enter 1st number\n";
cin>>a;
cout<<"enter 2nd number\n";
cin>>b;
sum=a+b;
cout<<"sum is:"<<sum<<endl;
return 0;
}*/


/*#include <iostream>
using namespace std;
int main()
{
   int a =100;
   a=50;
   cout<<a;
   return 0;
}

//A variable's value may be changed as many times as necessary throughout the program.

//auto keyword
The auto keyword allows you to automatically deduct the type of the variable being declared. It infers the data type of the variable from its value.
(isme kya hota h, tuje int, float likhne ki zrurt nhi hai, wo automatically value ke type se judge krta h ki float h ya int hai)

Any variable declared with the auto keyword should be initialized at the time of its declaration or there will be an error.

auto num;
num=5;
CODE INVALID//



//basic operations
Division
Fill in the blanks to declare variable x and assign it the value 81 divided by 3:

Modulus


The modulus operator (%) is informally known as the remainder operator because it returns the remainder after an integer division.

//precedence
the multiplication operator has higher precedence over the addition operator.*/

#include<iostream>
using namespace std;
int main()
{
   int x=(5+2)*2;
   cout<<x;
   return 0;
}

here parenthesis gets evaluated first
7*2=14

//Operator Precedence
Parentheses force the operations to have higher precedence. If there are parenthetical expressions nested within one another, the expression within the innermost parentheses is evaluated first.
If none of the expressions are in parentheses, multiplicative (multiplication, division, modulus) operators will be evaluated before additive (addition, subtraction) operators.

//Assignment Operators
The simple assignment operator (=) assigns the right side to the left side.

C++ provides shorthand operators that have the capability of performing an operation and an assignment at the same time.
For example:

x+=4 // x=x+4
x-=5// x=x-5

Assignment operator (=) assigns the right side to the left side.

//increment operator
x++;
x=x+1

#include<iostream>
using namespace std;
int main()
{
   int x=10;
   x++;
   cout<<x;
}

The increment operator has two forms, prefix and postfix.
++x; //prefix
++x; //postfix

Prefix increments the value, and then proceeds with the expression.
Postfix evaluates the expression and then performs the incrementing.

imp:
prefix ex:
x=5;
y==++x;
//x is 6, y is 6
//The prefix example increments the value of x, and then assigns it to y.

postfix ex:
x=5;
y==x++;
//y is 5, x is 6
//The postfix example assigns the value of x to y, and then increments it.


//Decrement value
The decrement operator (--) works in much the same way as the increment operator, but instead of increasing the value, it decreases it by one.
--x;
x--;

imp que.
#include<iostream>
using namespace std;
int main()
{
  int a=3;
int b=2;
b=a++;    //b=3
cout<<++b;  //b+1=4
}
ans:4








