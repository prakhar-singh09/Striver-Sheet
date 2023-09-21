QUESTION
// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix
ANSWER  
//In this solution we make the 1st row and 1st col of that index 0 where the value is 0 for first rows 0s we make a boolean value to represent them seprately.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool fr = false;
        bool fc = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    if(i==0) fr = true;
                    if(j==0) fc = true; 
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }   
       for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
              if(matrix[i][0]==0 || matrix[0][j]==0){
                  matrix[i][j]=0;
              } 
        }  
       }
        if(fc)  
         for(int i=0;i<n;i++)
                  matrix[i][0]=0;
        if(fr)  
         for(int j=0;j<m;j++)
                  matrix[0][j]=0;
    }
};
