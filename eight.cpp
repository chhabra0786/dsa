// #include <iostream>
// using namespace std;
// int main(){
//     int num=2;
//     cout<<endl;
//     switch(num){
//         case 1: cout<<"First" <<endl;
//         break;
//          case 2: cout<<"Second"<<endl;
//          break;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter vlaue of a is :";
//     cin>>a;
    
//     int b;
//     cout<<"Enter vlaue of b is :";
//     cin>>b;
    
//     char op;
//     cout<<"Enter operrator :";
//     cin>>op;

//    switch (op){
//     case '+': cout<<(a+b)<<endl;
//     break;
//     case '-': cout<<(a-b);
//     break;
//     case '/': cout<<(a/b);
//     break;
//     case '%': cout<<(a%b);
//     break;
// //     case '*': cout<<(a*b);
// // break;

// //    }
// //    return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int ruppees;
// //     int count;
// //     cout<<"Enter ruppees";
// //     cin>>ruppees;
// //     switch (count){
// //         case 1 : cout<<( int rupees/100);
// //         break;
// //         case 2 : cout<<(int rupees/50);
// //         break;

// //     }
// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // int power(int num1,int num2){
// //     int a ,b;
// //     cin>>a>>b<<endl;
// //     int ans=1;
// //     for (int i=1;i<=num2;i++){
// // ans=ans*num1;
// // return ans;
// //     }
// // }
// // int main(){
// //     int a ,b ;
// //     cin>>a >>b;
// //     int ans
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int factorial(int n){
// //     int fact=1;
// //     for(int i=1;i<=n;i++){
// //         fact=fact*i;
// //     }
// //     return fact;
// // }
// // int nCr(int n,int r){
// //     int neominator=factorial(n);
// //     int deominator=factorial(r)*factorial(n-r);
// //     int vlaue= neominator/deominator;
// // }
// // int main(){
// //     int n,r;
    
// //     cout << "Enter n: ";
// //     cin >> n;
// //     cout << "Enter r: ";
// //     cin >> r;

// //     cout << "nCr = " << nCr(n, r) << endl;
// //     return 0;
// // } 
// #include <iostream>
// using namespace std;
// int fact(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
// }
// return fact;
// }
// int nCr(int n,int r){
//     int num=fact(n);
//     int dum=fact(n-r)*fact(r);
//     int ans=num/dum;
//     return ans;
// }
// int main(){
//     int n, r;
//     cout<<"Enter number of n:";
//     cin>>n;
//     cout<<"Enter value of r:";
//     cin>>r;
//     cout<<"nCr="<<nCr(n,r);


//     return 0;
// }

// #include <iostream>
// using namespace std;
// void  printNumber(int n){
//     for (int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// int main(){
//     int number;

//     cout<<"Enter number:";
//     cin>>number;

//     printNumber(number);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// //1-prime 
// //0-not prime
// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"it is an not prime number";
//             return 0;
//         }
//         return 1;
//     }

// }
// int main(){
//     int n;
    
//     cout<<"Enter number:";
//     cin>>n;
//     isPrime(n);
//     return 0;
// // }
// #include <iostream>
// using namespace std;
// int value(int n){
// for(int i=0;i<=n;i++){
//     cout<<(3*i)+1<<endl;
    
// }

// }
// int main(){
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     value(n);
    
//     return 0;

// }
//find number of two bits 
// #include <iostream>
// using namespace std;

// int bitcount(int n) { 
//     int count = 0;
//     while (n > 0)  {
//         count += n & 1;  // check last bit (agar 1 hai toh add karo)
//         n = n >> 1;      // right shift to move to next bit
//     }
//     return count;
// }

// int main() {
//     int a, b;
//     cout << "Enter your a number: ";
//     cin >> a;
//     cout << "Enter your b number: ";
//     cin >> b;

//     int sum = bitcount(a) + bitcount(b);
//     cout << "Sum of 1 bits in both numbers = " << sum << endl;

//     return 0;
// }
