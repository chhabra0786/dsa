// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
        
//             cout<<n-j+1<<endl;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
        
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<endl;
//             count=count+1;
        
            
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
        
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//          int value=row;
//         while(col<=row){
            
//             cout<<value;
// value=value+1;
//             col=col+1;

//         }
//         cout<<endl;
//         row=row+1;

//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
// cout<<i-j+1<<"  ";
// j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// // }
// #include <iostream>
// using  namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//     char ch='A'+col-1;
//     cout<<ch;
//     col=col+1;

//         }
//         cout<<endl;
//         row=row+1;

//     }
//     return 0;
// // }'
// #include <iostream>
// using  namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch='A'+i+j-2;
//             cout<<ch;
//         j=j+1;
//         }
//         cout<<endl;
//     i=i+1;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        
        }
        int col=1;
        while(col<=row){
            cout<<"*";
             col=col+1;
        
        }

    cout<<endl;
    row=row+1;
    }
    return 0;
}