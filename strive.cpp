// This is the first program 
//-do not dig deep too much into a certain things





//--------------------------------BASIC I/O------------------------------------





/*

-#include<iostream>  -->  input and output

-std::cout<<"hello joy";   (using namespace std;)

-skeleton of the code

islower()
isupper()

M_PI

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





/*

when we write if statements it is not mandatory to write else statements.
if
else if
else

// nested if else condition

*/



/*

// Write a program that takes an input of age
// and prints if you are adult or not
// >= 18, yes
// < 18, no


// A school has following rules for grading system:
// a. Below 25 - F
// b. 25 to 44 - E
// C. 45 to 49 - D
// d. 50 to 59 - C
// e. 60 to 79 - B
// f. 80 to 100 - A
// Ask user to enter marks and print the corresponding grade.

-in marks type problem, we're using multiple (if - &&) , (else if not use &&) 
- marks < 25
- marks <= 44
- marks <+ 55
- assending order


// Take the age from the user and then decide accordingly
// 1. If age < 18, print-> not eligible for job
// 2. If age >= 18,
// print-> "eligble for job"
// 3. If age >= 55 and age <= 57,
// print-> "eligible for job, but retirement soon."
// 4. If age > 57
// print-> "retirement time"

*/





//-----------------------------------SWITCH------------------------------------





/*

- in switch statement its stats from the case and continue to the end, thats where "break;".

- break statements  - it breaks out all the conditional statements that we have written, -case, -switch.
                    - default:

*/





//-----------------------------------Arrays------------------------------------





/*

- When we use array - when we have same/similay dataTypes being stored myltiple times.
- int a, b, c, d;
- cin >> a >> b >> c >> d;
    takes lots of efforts thats where array comes.

- array elements are stored in consecutive memory address but i am not sure where the first one is,
    it can be at any randomized location.

*/



/*

#include<bits/stdc++.h>
using namespace std;

int main(){
// 1-D Array
    int arr[5];

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[2] += 10;   //modified the array YES

    cout<< arr[2];

    //long long ar[3];


// 2-D Array     -    matrix problem , graphs problem   -  0 Zero based indexing.
    int a[3][5]; 
    //[row][column]
    a[1][3] = 69;
    cout << a[1][3];

    return 0;
}

*/






//-----------------------------------String------------------------------------






/*

- string also stores every charactere in term of indexes.
    first index is the zero index  

*/



/*

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "Joy";
    int len = s.size();     //length() function is also there in c++
    cout << len << endl;

    //these are characters , and these characteres are add makes up a string
    s[len-1] = 'b';     // if we do "b" it will give ERROR we have to assign as character (' ')
    cout << s[len - 1];     //last index print

    return 0;
}

*/





//-----------------------------------For Loop----------------------------------





/*

for(initialization ; condition ; updation){
    body of loop
    }

- variable declaration only get executed for the first iteration
- initialization -> codition -> body of loop -> updation
- how many times i have to run the loop that's matter

*/





//--------------------------------While Loop-----------------------------------





/*

- check -> print -> increase.

*/





//---------------------------------Do While Loop-------------------------------





/*

- do it for the first go ahead->
    first time it get executed... irrespective of what condition are givern.

*/





//---------------------------------Function------------------------------------





/*

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return -> flow will go to the function()
// parameterised
// non parameterised

*/





//-------------------------Pass by Value and Reference------------------------- 





/*

value -> copy goes (original memory did not go)
        - function took the copy and did everything with the copy
        - original value still the same

reference -> make changes to the original one, 
            - attach & to it,
            - it takes the address,
            - it takes the original

*/

// Array allways goes with reference.
// -vector, map, list not.


/*

#include <bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main(){

    int n = 5;
    int arr[n];
    for(int i = 0; i<n; i = i+1){
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout<< "Value inside int main: " << arr[0] << endl;

    return 0;
}

*/





//------------------------------Time Complexity--------------------------------





/*



*/





//----------------------------------Patterns-----------------------------------





/*

- master the Loops
nested loops
1 outer loop - rows - count the no. of lines
2 inner loop - column - &connect somehow to the rows
3 print inside the inner for loop
4 observe symmetry [optional]

*/


#include <bits/stdc++.h>
using namespace std;


// * * * * 
// * * * * 
// * * * * 
// * * * * 

void print1(int n){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl; 
    }
}



// * 
// * * 
// * * * 
// * * * *

void print2(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}



/*

int main() {
    int t;      //how the backend looks, no. of test cases - t
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;      //input for how many stars.
        cin >> n;
        print2(n);
    }

    return 0;
}

*/






//----------------------------------Fibonacci----------------------------------





// - https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

// - https://www.geeksforgeeks.org/check-number-fibonacci-number/?ref=lbp





//------------------------------------STL--------------------------------------






/*

#include<bits/stdc++.h> - library

std::cin >> a;
std::cout << a;

C++ STL is divided into 4 parts-
1) Container: vector, queue, list etc., which are used to store data in dynamic memory.    
2) Algorithm:
3) Function:
4) Iterator:


*/





//--------------Pairs - utility library


void explainPair() {

    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pari<int, int>> p = {1, {3, 4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;

}





//--------------Vector


void explainVector() {

        //declaration of vector.

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);  //fast

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1,2);

    vector<int> v(5, 100);      //[100, 100, 100, 100, 100]

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

        //access element in the vector.

    vector<int>::iterator it = v.begin();

    it++;
    cout<< *(it) << " ";

    it = it +  2;
    cout<< *(it) << " ";

        //use iterator in vector

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " ";

        //printing the vector.

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it : v) {
        cout << it << " ";
    }

        //erase
    
    v.erase(v.begin()+1);   // {10, 20, 12, 23}    ->   {10, 12, 23}

    v.erase(v.begin() + 2, v.begin() + 4);  //{10, 20, 12, 23, 35} -> {10, 20, 35} [start, end]

        //insert function

    vector<int> v(2, 100);  //{100, 200}
    v.insert(v.begin(), 300);   //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 10);     //{300, 10, 10, 100, 100}

    vector<int> copy(2, 50); //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());  //{50, 50, 300, 10, 10, 100, 100}

    cout << v.size();   //{10, 20} -> 2

    v.pop_back();      // {10} 

    //v1 -> {10, 20}
    //v2 -> {30, 40}
    v1.swap(v2);    //v1->{30, 40} , v2->{10, 20}

    v.clear();  //erase the entire vector, trims it down to a empty vector.

    cout << v.empty();
    // 1 -> false, is not empty
    // 0 -> True,  is empty
    
}





