// // This is the first program 
// //-do not dig deep too much into a certain things





// //--------------------------------BASIC I/O------------------------------------





// /*

// -#include<iostream>  -->  input and output

// -std::cout<<"hello joy";   (using namespace std;)

// -skeleton of the code

// islower()
// isupper()

// M_PI

// */



// /*

// // take a lot of time this library as compary to #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     cout<<"Hello World!";

//     cout<<endl;

//     cout<< "hey joy" << endl << "hey jain\n" << endl << "hello bitches\n";

//     int x;

//     //input into this variable
//     cin >> x;
//     cout << x;

//     return 0;
// }

// */





// //--------------------------------Data Type------------------------------------





// /*

// int - 4 Bytes - Range of values { -2,147,483,648 to 2,147,483,647 } 
// -->32 bit

// long - 64 bit

// Type Name
// unsigned short
// long 
// unsigned long
// long long

// Bytes
// 2
// 4
// 4
// 8

// Range of Values
// 0 to 65,535
// -2,147,483,648 to 2,147,483,647
// 0 to 4,294,967,295
// -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807


// Floating-Point Types

// Туре
// float
// double
// long double

// Storage size
// 4 byte
// 8 byte
// 10 byte

// Value range
// 1.2E-38 to 3.4E +38
// 2.3E-308 to 1.7E+308
// 3.4E-4932 to 1.1E+4932

// */



// /*

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     //int
//     int x = 10;

//     //give ERROR when we define x twice like (long x = 9)

//     //long
//     long y = 10;

//     //long long
//     long long j = 8;

//     //float, double
//     // we can also asign float to integer value also it is not necessary to use decimal value into float.
//     // --> it means that integer can also be define as float, double.
//     float t = 3.0;
//     double u = 4;

//     //string and getline

//     //sting - anything before the space that can be picked up, after a space it is new string
//     // Hey joy - Hey is s1, joy is s2

//     //take everything together - gerline() internal function in c++
//     //picked up till the line break.
//     //string taking some more space as compare to a char , that's why in char we use single quotes instead of using double quotes.   
//     string str;     // declaration of string is in double quotes (" ") 
//     getline(cin, str);  //input: hey joy  
//     cout << str;        //output: hey joy
//     cout<< endl;

//     //char - single quotes is used to declare the character (' ')
//     char ch = 'g';
//     cout << ch;


//     //Everything take certain memory, depending on that we decide what to use
    
//     //int  -10^9 to 10^9
//     //long -10^12 to 10^12
//     //long long -10^18 to 10^18

 
//     return 0;
// }

// */





// //--------------------------------If / Else------------------------------------





// /*

// when we write if statements it is not mandatory to write else statements.
// if
// else if
// else

// // nested if else condition

// */



// /*

// // Write a program that takes an input of age
// // and prints if you are adult or not
// // >= 18, yes
// // < 18, no


// // A school has following rules for grading system:
// // a. Below 25 - F
// // b. 25 to 44 - E
// // C. 45 to 49 - D
// // d. 50 to 59 - C
// // e. 60 to 79 - B
// // f. 80 to 100 - A
// // Ask user to enter marks and print the corresponding grade.

// -in marks type problem, we're using multiple (if - &&) , (else if not use &&) 
// - marks < 25
// - marks <= 44
// - marks <+ 55
// - assending order


// // Take the age from the user and then decide accordingly
// // 1. If age < 18, print-> not eligible for job
// // 2. If age >= 18,
// // print-> "eligble for job"
// // 3. If age >= 55 and age <= 57,
// // print-> "eligible for job, but retirement soon."
// // 4. If age > 57
// // print-> "retirement time"

// */





// //-----------------------------------SWITCH------------------------------------





// /*

// - in switch statement its stats from the case and continue to the end, thats where "break;".

// - break statements  - it breaks out all the conditional statements that we have written, -case, -switch.
//                     - default:

// */





// //-----------------------------------Arrays------------------------------------





// /*

// - When we use aay - when we have same/similay dataTypes being stored myltiple times.
// - int a, b, c, d;
// - cin >> a >> b >> c >> d;
//     takes lots of efforts thats where aay comes.

// - aay elements are stored in consecutive memory address but i am not sure where the first one is,
//     it can be at any randomized location.

// */
                    


// /*

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// // 1-D Array
//     int a[5];

//     cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

//     a[2] += 10;   //modified the aay YES

//     cout<< a[2];

//     //long long ar[3];


// // 2-D Array     -    matrix problem , graphs problem   -  0 Zero based indexing.
//     int a[3][5]; 
//     //[row][column]
//     a[1][3] = 69;
//     cout << a[1][3];

//     return 0;
// }

// */






// //-----------------------------------String------------------------------------






// /*

// - string also stores every charactere in term of indexes.
//     first index is the zero index  

// */



// /*

// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     string s = "Joy";
//     int len = s.size();     //length() function is also there in c++
//     cout << len << endl;

//     //these are characters , and these characteres are add makes up a string
//     s[len-1] = 'b';     // if we do "b" it will give ERROR we have to assign as character (' ')
//     cout << s[len - 1];     //last index print

//     return 0;
// }

// */





// //-----------------------------------For Loop----------------------------------





// /*

// for(initialization ; condition ; updation){
//     body of loop
//     }

// - variable declaration only get executed for the first iteration
// - initialization -> codition -> body of loop -> updation
// - how many times i have to run the loop that's matter

// */





// //--------------------------------While Loop-----------------------------------





// /*

// - check -> print -> increase.

// */





// //---------------------------------Do While Loop-------------------------------





// /*

// - do it for the first go ahead->
//     first time it get executed... irrespective of what condition are givern.

// */





// //---------------------------------Function------------------------------------





// /*

// // Functions are set of code which performs something for you
// // Functions are used to modularise code
// // Functions are used to increase readability
// // Functions are used to use same code multiple times
// // void -> which does not returns anything
// // return -> flow will go to the function()
// // parameterised
// // non parameterised

// */





// //-------------------------Pass by Value and Reference------------------------- 





// /*

// value -> copy goes (original memory did not go)
//         - function took the copy and did everything with the copy
//         - original value still the same

// reference -> make changes to the original one, 
//             - attach & to it,
//             - it takes the address,
//             - it takes the original

// */

// // Array allways goes with reference.
// // -vector, map, list not.


// /*

// #include <bits/stdc++.h>
// using namespace std;

// void doSomething(int a[], int n){
//     a[0] += 100;
//     cout << "Value inside function: " << a[0] << endl;
// }

// int main(){

//     int n = 5;
//     int a[n];
//     for(int i = 0; i<n; i = i+1){
//         cin >> a[i];
//     }

//     doSomething(a, n);

//     cout<< "Value inside int main: " << a[0] << endl;

//     return 0;
// }

// */





// //------------------------------Time Complexity--------------------------------





// /*



// */





// //----------------------------------Patterns-----------------------------------





// /*

// - master the Loops
// nested loops
// 1 outer loop - rows - count the no. of lines
// 2 inner loop - column - &connect somehow to the rows
// 3 print inside the inner for loop
// 4 observe symmetry [optional]
 
// */


// #include <bits/stdc++.h>
// using namespace std;


// // * * * * 
// // * * * * 
// // * * * * 
// // * * * * 

// void print1(int n){
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << "* ";
//         }
//         cout << endl; 
//     }
// }



// // * 
// // * * 
// // * * * 
// // * * * *

// void print2(int n) {
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }



// /*

// int main() {
//     int t;      //how the backend looks, no. of test cases - t
//     cin >> t;
//     for(int i = 0; i < t; i++) {
//         int n;      //input for how many stars.
//         cin >> n;
//         print2(n);
//     }

//     return 0;
// }

// */






// //----------------------------------Fibonacci----------------------------------





// // - https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

// // - https://www.geeksforgeeks.org/check-number-fibonacci-number/?ref=lbp





// //------------------------------------STL--------------------------------------






// /*

// #include<bits/stdc++.h> - library

// std::cin >> a;
// std::cout << a;

// C++ STL is divided into 4 parts-
// 1) Container: vector, queue, list etc., which are used to store data in dynamic memory.    
// 2) Algorithm:
// 3) Function:
// 4) Iterator:


// */





// //--------------Pairs - utility library


// void explainPair() {

//     pair<int, int> p = {1, 3};

//     cout << p.first << " " << p.second;

//     pair<int, pari<int, int>> p = {1, {3, 4}};

//     cout << p.first << " " << p.second.second << " " << p.second.first;

//     pair<int, int> a[] = { {1, 2}, {2, 5}, {5, 1}};

//     cout << a[1].second;

// }





// //--------------Vector


// void explainVector() {

//         //declaration of vector.

//     vector<int> v;

//     v.push_back(1);
//     v.emplace_back(2);  //fast

//     vector<pair<int, int>> vec;

//     vec.push_back({1, 2});
//     vec.emplace_back(1,2);

//     vector<int> v(5, 100);      //[100, 100, 100, 100, 100]

//     vector<int> v(5);

//     vector<int> v1(5, 20);
//     vector<int> v2(v1);

//         //access element in the vector.

//     vector<int>::iterator it = v.begin();

//     it++;
//     cout<< *(it) << " ";

//     it = it +  2;
//     cout<< *(it) << " ";

//         //use iterator in vector

//     vector<int>::iterator it = v.end();
//     vector<int>::iterator it = v.rend();
//     vector<int>::iterator it = v.rbegin();

//     cout << v[0] << " " << v.at(0);

//     cout << v.back() << " ";

//         //printing the vector.

//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//         cout << *(it) << " ";
//     }

//     for (auto it = v.begin(); it != v.end(); it++) {
//         cout << *(it) << " ";
//     }

//     for (auto it : v) {
//         cout << it << " ";
//     }

//         //erase
    
//     v.erase(v.begin()+1);   // {10, 20, 12, 23}    ->   {10, 12, 23}

//     v.erase(v.begin() + 2, v.begin() + 4);  //{10, 20, 12, 23, 35} -> {10, 20, 35} [start, end]

//         //insert function

//     vector<int> v(2, 100);  //{100, 200}
//     v.insert(v.begin(), 300);   //{300, 100, 100}
//     v.insert(v.begin() + 1, 2, 10);     //{300, 10, 10, 100, 100}

//     vector<int> copy(2, 50); //{50, 50}
//     v.insert(v.begin(), copy.begin(), copy.end());  //{50, 50, 300, 10, 10, 100, 100}

//     cout << v.size();   //{10, 20} -> 2

//     v.pop_back();      // {10} 

//     //v1 -> {10, 20}
//     //v2 -> {30, 40}
//     v1.swap(v2);    //v1->{30, 40} , v2->{10, 20}

//     v.clear();  //erase the entire vector, trims it down to a empty vector.

//     cout << v.empty();
//     // 1 -> false, is not empty
//     // 0 -> True,  is empty
    
// }





// //--------------List






// void explainList() {

// // -main diff is front operation.
// // -insert func in vector is very costly.
// // -doubly linked list is maintained for a list
// // -single linked list is maintained for a vactor
// // -push_front is very very cheap in terms of time complexity wise as compare it to a vector

//     list<int> ls;

//     ls.push_back(2); 
//     ls.emplace_back(4);

//     ls.push_front(5);

//     ls.emplace_front(); 

//     //begin, end, rbegin, rend, clear, insert, size, swap

// }





// //--------------Deque





// void explainDeque() {

//     deque<int> dq;

//     // all the things are same.

// }





// //--------------Stack





// void explainStack() {

// // L I F O
// // push     pop     top
// // all the ooperations are TC: O(1) - everuthing happens in constant time.

//     stack<int> st;
//     st.push(1);     // {1}
//     st.push(2);     // {2, 1}
//     st.push(3);     // {3, 2, 1}
//     st.push(4);     // {4, 3, 2, 1}
//     st.emplace(5);  // {5, 4, 3, 2, 1}

//     cout << st.top();   //print 5  " st[2] is invalid "

//     st.pop();       // st looks like {4, 3, 2, 1}

//     cout << st.top();

//     cout << st.size();

//     cout << st.empty();

//     stack<int> st2;

//     st1.swap(st2);

// }





// //--------------Queue





// void explainQueue() {

// // F I F I

//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.emplace(4);

//     q.back() += 5;

//     cout << q.front();

//     q.pop();

//     cout << q.front();

//     // size, swap, empty same as stack.


// }





// //--------------Priority Queue





// void explainPQ() {

// // largest value stays at the top, lexicographically largest string
// // it is NOT a linear data structure - it is a Tree Data Structure.
// // push   top   pop
// // log n   O(1)  log n      <-//happenc TC:

//     priority_queue<int> pq;

//     pq.push(5);     //maximum Heap
//     pq.push(2);
//     pq.push(8);
//     pq.emplace(10);

//     cout << pq.top();

//     pq.pop();

//     cout << pq.top();

// // size, swap, empty func same as others

//     // Minimum Heap
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(5);
//     pq.push(2);
//     pq.push(8);
//     pq.emplace(10);

//     pq.top();

// }




// //--------------SET





// void explainSet() {

// // -stores everything in the sorted order       sorted
// // -stores Unique       unique
// // -tree ds

// // in SET everything happens in logarithmic time complexity -   (log n)

// // find(), insert(), count(), erase()   -   imp. func

//     set<int> st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);   // x
//     st.insert(4);
//     st.insert(3);   //{1, 2, 3, 4}
//     //functionality of insert in vector,
//     // can be used also, that only increases
//     // efficiency

//     // begin(), end(), rbegin(), rend(), size()
//     // empty() and swap() are same as those of above

//     auto it = st.find(3);   //return an iterator rmember this returns an iterator which points to this 3.
//     //iterator - points to the address

//     //element is not there in the set then it return st.end()
//     auto it = st.find(6);   //-> st.end()

//     st.erase(5);    //delete 5 and maintain the sorted order

//     int cnt = st.count(1);      // exist = 1, not exist = 0

//     auto it = st.find(3);
//     st.erase(it)    //it take constant time


//     // {1, 2, 3, 4, 5}
//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1, it2);     // -> after erase {1, 4, 5}   [first, last)

//     // lower_bound() and upper_bound() function work in the same way, as in vector it does.

//     //this is the syntax
//     auto it = st.lower_bound(2);

//     auto it = st.upper_bound(3);

//             // -https://www.youtube.com/watch?v=edJ19qIL8WQ  (Lower Bound & Upper Bound) - YT explained.

// }






// //--------------Multiset





// void explainMultiSet() {

//     //everything is same as set
//     // only stores duplicate elements also

//     multiset<int> ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);

//     ms.erase(1);    // all 1's erased

//     int cnt = ms.count(1);

//     //find out the just first occurence of one...
//     ms.erase(ms.find(1));       //erase that iterator -> which is the address . 
//     ms.erase(ms.find(1), ms.find(1)+2);

//     //rest all the function same as set...

// }





// //--------------Unordered SET





// void explainUSet() {

//         // Lower_bound and Upper_bound function does NOT work , rest all the functions are same.
//         // TC: O(1),,,,, worst case O(1)->very rare,,,... once in a blue moon...

//         // as above, it does not stores in any particular order, it has a better complexity then set in most cases, except some when collision happens.



//     unordered_set<int> st;



// }





// //--------------Map





// void explainMap(){


//     //key value pair
//     // key - unique (key = roll no. , value = name) in sorted order...      something similar to set ds.
//     // -> key, value -  can be of any DataType


//     map<int, int> mpp;

//     mpp[1] = 2;
//     mpp.emplace({3, 1});    // 3 = key, 1 = value
//     mpp.insert({2,4});

//     map<int, pait<int, int>> mpp;



//     map< pait<int, int>, int> mpp;
//     mpp[{2,3}] = 10;        // {2,3} = key, 10 = value



//     for(auto it : mpp) {
//         cout << it.first << " " << it.second << endl;
//     }


//     cout << mpp[1];     // print the value
//     cout << mpp[5];     // 0 / NULL     ->      does not exist


//     auto it = mpp.find(3);
//     cout << *(it).second;   // value

//     auto it = mpp.find(5);      // mpp.end() -> after the map... afterwards...

//     auto it = mpp.lower_bound(2);
//     auto it = mpp.upper_bound(3);

//     // erase, swap, size, empty, are same as above...

// }





// //--------------MultiMap





// void explainMultimap() {
//     //everything same as map,  only it can store multiple keys. - duplicates keys

//     // only mpp[key] cannnot be used here

//     // log n
// }





// //--------------UnorderedMap






// void explainUnorderedMap() {

//     // same as set and unordered_Set difference...

//     // unique - keys...     -> randomized       -> not duplicate

//     // unsorted...

//     //TC: almost all cases constant time - O(1),   
//     // worst case: O(n) - once in a blue moon
// }







// //-------------------<<<< Algorithm >>>>





// bool comp(pair<int, int> p1, pair<int, int> p2) {
//     if(p1.second < p2.second) return true;
//     if(p1.second > p2.second) return false;

//     if(p1.first > p2.first) return true;
//     return false;
// }





// void explainExtra() {

//         //sort
//         //  ->all the containers,, not the map... mainly "vector". "Array"

//     sort(a, a+n);
//     sort(v.begin(), b.end());       // [ )

//     sort(a+2, a+4);



//     // sort in dexcending order
//     sort(a, a+n, greater<int>);     // inbuilt comparator.



//     pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};         
//             //sort in according to second element
//             //if second element is same, then sort
//             //it according to first element but in descending

//     sort(a, a+n, comp)          //comp - self written comparator - Boolean function
//     // {4,1}, {2,1}, {1,2}
    

    
// //how many ones are there 11111 or how many set bits are there
//     int num = 7;
//     int cnt = __builtin_popcount();

//     long long num = 12312313113;
//     int cnt = __builtin_popcountll();




//     string s = "123";       // 3! - 3 factorial-formula
//     sort(s.begin(), s.end());   //first we have to sort,,, if we have to print all the permutations...

//     do {
//         cout << s << endl;
//     } while(next_permutation(s.begin(), s.end()));


//     int maxi = *max_element(a, a+n);

//     int mini = *min_element(a, a+n);






//     // ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~      Binary Search function inbuilt 

//     A[] = {1, 4, 5, 8, 9};

//     bool res = binary_search(a, a+n, 3);

//     bool res = binary_search(a, a+n, 4);



//     // lower_bound is that STL which return the first element if its occure, and if is doesn't occures, then it will the iterator pointing to the element which is immediate next greater than of the given element.
//     a[] = {1, 4, 5, 9, 9};

//     int ind = lower_bound(a, a+n, 4) - a;   // index of 1
//     int ind = lower_bound(a, a+n, 7) - a;   // index of 4
//     int ind = lower_bound(a, a+n, 10) - a;   // index of 6


//     int ind = lower_bound(a.begin(), a.end(), a) - a.begin();





//     //upper_bound -> it will always the iterator pointing to the element which is immediate next greater than of the given element.
//     a[] = {1, 4, 5, 9, 9};
//     //TC; log n

//     int ind = upper_bound(a, a+n, 4) - a;   // return for 5
//     int ind = upper_bound(a, a+n, 7) - a;   // return for 9
//     int ind = upper_bound(a, a+n, 10) - a;   // return for end -> point to an iterator which is greater than 10.


//     int ind = upper_bound(a.begin(), a.end(), a) - a.begin();



//     /*
    
// Q. Find the first occurrence of a X in a sorted aay. If it does not exits, print -1.
// A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}
// int ind = lower_bound(a, a+n, X) - a;
// if(ind != n && a[ind] == X) cout << ind; 
// else cout << -1;
// X = 4       // return index which is 1
// × = 2    // -1
// X = 12  // -1

//             // -> think all about the edge cases "ind != n" when we use LB and UB.


// Q. Find the smallest number greater than X in a sorted aay. If no number exists print -1.
// A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}
// int ind = upper_bound (a, a+n, X) - a;
// if(ind<n) cout << a [ind];
// else cout << -1;
// X= 4    //return 9
// × = 2   //return 4
// X = 1   //return 4
// X = 11  //return -1




// Q. Find the last occurrence of a X in a sorted aay. If it does not exits, print -1.
// A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}
// int ind = upper_bound(a, a+n, X) - a;
// ind--;
// if (ind ›= 0 && a[ind] == X) cout << ind; 
// else cout << -1;
// X = 4   //print the index
// X = 2   // x - this no. doesn't exist
// X  = 0  // x - this no. doesn't exist




// Q. Find the largest number smaller than X in a sorted aay. If no number exists print -1.
// A[] = {1, 4, 4, 4, 4, 9, 9, 10, 117
// int ind = lower_bound(a, a+n, X) - а:
// ind--;
// if(ind>=0) cout << a[ind];
// else cout << -1;
// X = 4       // return 1
// X = 2       // return 1
// X= 1        // -1  doesn't exit smaller element than x

    
//     */




// }




// /*
// Chapters:
// 00:01:02 Libraries
// 00:01:51 namespace std
// 00:02:40 Functions
// 00:05:08 STL
// 00:05:40 pair <int, int>
// 00:10:04 vectors                                           ( 1st container )
// 00:15:25 accessing elements in vector
// 00:19:28 iterators
// 00:24:43 deletion in a vector
// 00:27:00 insertion in a vector
// 00:29:46 other functions in vector
// 00:30:26 list                                                     ( 2nd container )
// 00:31:43 Deque                                                       ( 3rd container )
// 00:32:02 Stack (LIFO)                                                     ( 4th container )
// 00:34:16 Time Complexity of stack operations
// 00:34:27 Queue (FIFO)                                                    ( 5th container )
// 00:35:58 Priority Queue                                                  ( 6th container )
// 00:38:28 Time Complexity of push, pop & top
// 00:38:50 Set                                                                      ( 7th container )
// 00:42:58 Lower bound & Upper bound
// 00:43:40 Multiset                                                             ( 8th container )
// 00:45:35 Unordered set                                                  ( 9th container )
// 00:47:12 Map                                                                   ( 10th container )
// 00:53:22 Multimap                                                          ( 11th container )
// 00:53:46 Unordered map                                               ( 12th container )
// 00:54:53 Algorithms - Sort
// 00:59:18 Comp (For sorting)
// 01:03:26 builtin_popcount( )
// 01:04:18 next_permutation
// 01:06:21 max_element
// 01:06:40 min_element
// 01:07:09 SUBSCRIBE !!!
// */










// //------------------------------Basic Math-------------------------------------







// /*

// Extraction of Digits
// Reversing a no.
// palindeome
// print all divisors
// mathematical observation
// sorting
// prime
// gdc  HCF
// Euclidean algoithm

// */










// //-----------------------------Recursion---------------------------------------









#include <bits/stdc++.h>
#include <iostream>

using namespace std;








// // Reverse of aay using Recursion using one pointer

// void f(int i, int a[], int n) {

//     if(i >= n/2) return;

//     swap(a[i], a[n-i-1]);

//     f(i+1, a, n);
// }



// int main() {


//     int n;
//     cin >> n;

//     int a[n];
//     for(int i = 0; i < n; i++) cin >> a[i];

//     f(0, a, n);

//     for(int i = 0; i < n; i++) cout << a[i] << " ";


//     return 0;
// }











// // recursion , check if a string is palindrom

// bool f(int i, string &s) {

//     if(i >= s.size() / 2) return true;

//     if(s[i] != s[s.size() - i - 1]) return false;

//     return f(i + 1, s);
// }

// int main() {

//     string s = "madasm";

//     cout << f(0, s);

//     return 0;
// }











// // Fibonacci no. - Recursion

// int f(int n) {
//     if(n <=1) return n;
//     int last = f(n-1);
//     int slast = f(n-2);

//     return last + slast;
// }

// int main() {

//     cout << f(4) << endl;

//     cout << f(4) << "\n";

//     return 0;
// }











// //-----------------------------Hashing---------------------------------------










// // Number Hashing

// int main() {

//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i<n; i++){
//         cin >> a[i];
//     }

//     // precompute 
//     int hash[13] = {0};
//     for(int i = 0; i<n; i++) {
//         hash[a[i]] += 1;
//     }


//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin>>number;
//         // fetch
//         cout << hash[number] << endl;
//     }

//     return 0;
// }











// Character Hashing

// int main() {

//     string s;
//     cin >> s;

//     // pre compute
//     int hash[26] = {0};
//     for(int i = 0; i < s.size(); i++) {
//         hash[(s[i] - 'a')]++;
//     }


//     int q;
//     cin >> q;
//     while(q--) {
//         char c;
//         cin >> c;
//         // fetch     
//         cout<<hash[(c-'a')];
//     }

//     return 0;
// }















// // Code by MAP

// int main() {

//     int n;
//     cin >> n;
//     int a[n];
//     for (int i=0 ; i<n ; ++i) {
//         cin>>a[i];
//     }

//     // pre - compute
//     map<int, int> mpp;
//     for(int i = 0; i<n; i++) {
//         mpp[a[i]]++;
//     }

//     // iterate in the MAP
//     // for(auto it : mpp){
//     //     cout << "key: " << it.first << " -> value: " << it.second <<endl;
//     // }

//     int q;
//     cin >> q;
//     while(q--) {
//         int number;
//         cin >> number;
//         //fetch
//         cout << mpp[number] << endl;
//     }

//     return 0;
// }

 
 








// // UnOrdered map











//-------------------------------Sorting---------------------------------------











/*


// Selection Sort


//select min... -> swap

void selection_sort(int arr[], int n) {
    for(int i = 0; i<=n-2; i++) {
        int mini = i;
        for(int j = i; j<=n-1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}


int main() {

    // cout << "hello" << endl;

    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/




/*
// Bubble sort

// push ~> max to the last

void bubble_sort(int arr[], int n) {
    for(int i = n-1; i >= 0; i--) {
        // int didSwap = 0;
        for(int j = 0; j <= n-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                // didSwap = 1;
            } 
        }
        // if(didSwap == 0) {
        //     break;
        // }
        // cout << "Runs";
    }
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++) cin >> arr[i];

    bubble_sort(arr,n);

    for(int i = 0; i<n; i++) cout << arr[i] << " ";

    return 0;
}
*/



/*
// insertion sort

// take an element & ~> place it in its correct order.

void insertion_sort(int arr[], int n) {
    for(int i = 0; i<=n-1; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            
            j--;
            // cout << "Runs";
        }
    }
}

int main() {

    int n;
    cin >> n;
    
    int arr[n];

    for(int i = 0; i<n; i++) cin >> arr[i];

    insertion_sort(arr, n);

    for(int i = 0; i<n; i++) cout << arr[i] << " ";

    return 0;
}
*/




/*
// Merge Sort
// divide + Merge    - Recursion

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}
*/





/*
// Quick Sort
// divide and conqure...


int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
*/





// Array 
// Largest element in an array
/*
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
        max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}
*/


/*
// Second Largest Element in Array

int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        // int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    // cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}
*/


// Check array is sorted or Not
/*
bool isSorted(int arr[], int n) {
   for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 6, 5}, n = 5;

  printf("%s", isSorted(arr, n) ? "True" : "False");

    // cout << isSorted(arr, n) << endl;

}
*/


// Remove Duplicates in-place from sorted array
/*
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }

}
*/


// Left Rotate the Array by One
/*
void leftRotateBu1(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    leftRotateBu1(arr, n);

    return 0;
}
*/


// Left rotate an array by D places
/*
void leftRotate(int arr[], int n, int d) {

    if (n == 0) return;

    // Get the effective number of rotations:
    d = d % n;

    //step 1:
    reverse(arr, arr + d);

    //step 2:
    reverse(arr + d, arr + n);

    //step 3:
    reverse(arr, arr + n);
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
*/

// Binary Search
//      must be sorted 
/*
// Iterative Implementation
int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); //size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarySearch(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: " << ind << endl;
    return 0;
}
*/

// Recursive Approach
int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; //Base case.

    // Perform the steps:
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = search(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}
