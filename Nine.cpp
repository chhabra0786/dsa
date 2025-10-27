// #include <iostream>
// using namespace std;

// int main(){
//     int dost[15];
//     cout<<"value of 13th array is :"<<dost[13]<<endl;
//     cout<<"value of 19th array is :"<<dost[19]<<endl;


//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=15;
//     int array[15]={2,3};
//     for(int i=0;i<=n;i++){
//         cout<<array[i];
//     }
//     return 0;
    
// // }
// //intializing all with zero
// #include <iostream>
// using namespace std;
// int main(){
//     int n=15;
//     int array[15]={0};
//     for(int i=0;i<=n;i++){
//         cout<<array[i];
//     }
//     return 0;
    
// }
//intializing all with one
// #include <iostream>
// using namespace std;
// int main(){
//     int n=15;
//     int array[15]={1};
//     for(int i=0;i<=n;i++){
//         cout<<array[i];
//     }
//     return 0;
    
// }

//working arrays with functions
// #include <iostream>
// using namespace std;
// void printArray(int arr[],int size){

//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;

// }
// int main(){
//     int first[15]={2,6};
//     int n=15;
//     printArray(first,n);
//     int second[15]={0};
    
//     printArray(second,n);
//     int sizeofArray=size of (arr)/size of (arr[0]);

//     return 0;
    
// }

//Linear search
 
// #include <iostream>
// using namespace std;
// bool search(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if (arr[i]==key){
//         return 1;
//     }
//     }
//     return 0;

// }
// int main(){
//     int arr[6]={63,78,86,68};
//     int key;
//     cout<<"Enter Element:";
//     cin>>key;
//     bool found=search(arr,6,key);
//     if (found){
//         cout<<"Element is present";
//     }
//     else {
//         cout<<"Element is absent";
//     }

//     return 0;

// }

//Reverse the element 

// #include <iostream>
// using namespace std;
// void Reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
      
//       }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<""<<endl;
// }
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     Reverse(arr,6);
//     printArray(arr,6);
//     return 0;
// }