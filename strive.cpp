// This is the first program 
//-do not dig deep too much into a certain things





//--------------------------------BASIC I/O------------------------------------





/*

-#include<iostream>  -->  input and output

-std::cout<<"hello joy";   (using namespace std;)

-skeleton of the code

*/



/*

// take a lot of time this library as compary to #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Hello World!";

    cout<<endl;

    cout<< "hey joy" << endl << "hey jain\n" << endl << "hello bitches\n";

    int x;

    //input into this variable
    cin >> x;
    cout << x;

    return 0;
}

*/





//--------------------------------Data Type------------------------------------





/*

int - 4 Bytes - Range of values { -2,147,483,648 to 2,147,483,647 } 
-->32 bit

long - 64 bit

Type Name
unsigned short
long 
unsigned long
long long

Bytes
2
4
4
8

Range of Values
0 to 65,535
-2,147,483,648 to 2,147,483,647
0 to 4,294,967,295
-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807


Floating-Point Types

Туре
float
double
long double

Storage size
4 byte
8 byte
10 byte

Value range
1.2E-38 to 3.4E +38
2.3E-308 to 1.7E+308
3.4E-4932 to 1.1E+4932

*/



/*

#include <bits/stdc++.h>
using namespace std;

int main() {

    //int
    int x = 10;

    //give ERROR when we define x twice like (long x = 9)

    //long
    long y = 10;

    //long long
    long long j = 8;

    //float, double
    // we can also asign float to integer value also it is not necessary to use decimal value into float.
    // --> it means that integer can also be define as float, double.
    float t = 3.0;
    double u = 4;

    //string and getline

    //sting - anything before the space that can be picked up, after a space it is new string
    // Hey joy - Hey is s1, joy is s2

    //take everything together - gerline() internal function in c++
    //picked up till the line break.
    //string taking some more space as compare to a char , that's why in char we use single quotes instead of using double quotes.   
    string str;     // declaration of string is in double quotes (" ") 
    getline(cin, str);  //input: hey joy  
    cout << str;        //output: hey joy
    cout<< endl;

    //char - single quotes is used to declare the character (' ')
    char ch = 'g';
    cout << ch;


    //Everything take certain memory, depending on that we decide what to use
    
    //int  -10^9 to 10^9
    //long -10^12 to 10^12
    //long long -10^18 to 10^18

 
    return 0;
}

*/





//--------------------------------If / Else------------------------------------





#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"helo ";
    
    return 0;
}