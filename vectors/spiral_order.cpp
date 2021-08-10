#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
// Time complexity O(mn), space complexity O(1)
class Solution{
    public: 
    vector<int> SpiralOrder(vector<vector<int>>  &matrix){
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        // define start row,column and end row , column
        // print sr then ec then er then sc and repeat
        //until all elements are printed and 
        int sr=0, sc=0, ec=n-1, er=m-1;
        int count=0;  // number of elements written total = m * n 
        while (sr<=er && sc <=ec){
           //Step one print sr
            for (int i=sc; i<=ec; i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr+=1; 
            if (count==m*n)return ans;         
            for (int i=sr; i<=er; i++){
                ans.push_back(matrix[i][ec]);
            }
            ec-=1; 
            if (count==m*n)return ans;         
            //step 3 print ending row 
            for (int i=ec ; i>=sc ; i--){
                ans.push_back(matrix[er][i]);
            }
            er-=1; 
            if (count==m*n)return ans;         
            // step 4 print start column
            for (int i=er; i>=sr ; i--)
            {
                ans.push_back(matrix[i][sc]);
            }
            sc+=1;
            if (count==m*n)return ans;         

        }
        return ans; 
    }

};

int main(){
class Solution S;
vector<vector<int>> mat
 {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
vector<int> ans; 
ans=S.SpiralOrder(mat);

for(int i=0; i<ans.size();i++){
    cout<< ans[i]<<" ";
}  
cout <<endl; 
return 0 ;
}
