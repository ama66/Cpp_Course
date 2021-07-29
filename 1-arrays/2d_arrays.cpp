#include<iostream>
using namespace std; 

void printArray(int A[][3],int m , int n){

    for (int i=0; i<m; i++){
    for (int j=0; j<n ; j++){
        cout <<" "<< A[i][j];
    }
    cout <<endl;
} 
}

int main(){

    int A[][3]={{3,4,5},
                {2,3},
                {}
                };
    printArray(A,3,3);
/*int a[100][100];
int m ; int n ; 
cout << " Enter array dimensions rows m followed by columns n \n"; 
cin>> m >> n; 
cout<<" Now enter elements of the array \n"; 
for (int i=0; i<m; i++){
    for (int j=0; j<n ; j++){
        cin>> a[i][j];
    }
} */ 


/* cout << " Now spit out the array column wise \n";

for (int i=0; i<n; i++){
    for (int j=0; j<m ; j++){
        cout <<" "<< a[j][i];
    }
    cout <<endl;
} */ 

return 0 ;
}