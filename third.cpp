// #include <iostream>
// using namespace std;
// int main(){
//     int n=8;
//     int i=2;
//     // int sum=0;
//     while(i<n){
//         if(n%i==0 )
//         {
//             cout<<"it is not prime number"<<i<<endl;
            
//     //   sum+=i;
//     //   cout<<i<<endl;
    
//         }
        
//         else{
//             cout<<"it is an prime"<<i<<endl;
//         }
//         i=i+1;
     
//     }
//     // cout<<"value of sum is:"<<sum<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     char value;
//     cout<<"Enter your value";
//     cin>>value;
//     if(value>='a' && value<='z'){
//         cout<<"This is small alphabets";
//     }
    
//     else if(value>='A' && value<='Z'){
//         cout<<"This is large  alphabets";
//     }
    
//     else if (value>='1' && value<='9'){
//         cout<<"This is  number";
//     }
    
//     else{
//         cout<<"Something else";
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     int sum=0;
//     int i=2;
//     while(i<=n){
//         sum=sum+i;
//         i=i+1;
//  cout<<sum;
//     }
//         // cout<<sum;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     int i=1;
//     int sum=0;
//     while(i<=n){
//         // sum=sum+i;
    
//      if(i%2==0){
//     sum=sum+i;
//      }   
//      i=i+1;
//      }
//      cout<<sum;
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"not prime"<<endl;
//         }
//         else{
//             cout<<"  Prime number";
//         }
//         i=i+1;
// cout<<i<<endl;
//     }
//  return 0;
// }
   
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
    cout<<endl;
        i++;

    }
    return 0;
}