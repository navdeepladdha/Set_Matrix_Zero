#include <bits/stdc++.h>
using namespace std;

void mark_Row(int arr[][3],int n,int i){
   
   for(int j=0;j<n;j++){
     if(arr[i][j]!=0) arr[i][j]=-1;
   }
  
}

void mark_Col(int arr[][3],int n,int j){
  
  for(int i=0;i<n;i++){
    if(arr[i][j]!=0) arr[i][j]=-1;
  }
  
}

void zero_Matrix(int arr[][3],int n){
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            
        if(arr[i][j]==0){
          mark_Row(arr,n,i);
          mark_Col(arr,n,j);
        }  
    }
  }
  
  
  
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            
        if(arr[i][j]==-1){
         arr[i][j]=0;
        }  
    }
  }
  
  
}

void Zero_Matrix2(int arr[][3],int n){
  int row[n]={0};
  int col[n]={0};
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      
      if(arr[i][j]==0){
        row[i]=1;
        col[j]=1;
      }

    }
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        
        if(row[i] || col[j] ){
          arr[i][j]=0;
        }
      
    }
  }
  
}

void Zero_Matrix3(int arr[][3],int n){
  
  int col0=1;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       
       if(arr[i][j]==0){
         
         arr[i][0]=0;
         
         if(j!=0) arr[0][j]=0;  
    
         else   col0=0;
         
         
       }
      
    }
  }
  
  for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
      
      if(arr[i][j]!=0){
         
         if(arr[i][0]==0 || arr[0][j]==0 ){
           arr[i][j]=0;
         }
        
      }
      
    }
  }
  
  
  if(arr[0][0]==0){
    for(int j=0;j<n;j++){
      arr[0][j]=0;
    }
  }
  
  if(col0==0){
    for(int i=0;i<n;i++){
      arr[i][0]=0;
    }
  }
  
  
}

int main() 
{   int n=3;
    int arr[3][3]={ {1, 1, 1},
                    {1, 0, 1},
                    {1, 1, 1} 
                       };
                       
                       
     
                       
       cout<<"before"<<endl;                
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<arr[i][j]<<" ";
        }cout<<endl;
      } cout<<endl<<endl<<endl;                
    
     Zero_Matrix3(arr,n);
    
     cout<<"After"<<endl;                
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<arr[i][j]<<" ";
        }cout<<endl;
      } 
    
    return 0;
}