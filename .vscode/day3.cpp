//dabangg pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n; 
      //first triangle 
      int row=1;
      while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col=col+1;

        }
            //second triangle(half of stars ke liye)
            int star1=row-1;
            while(star1){
                cout<<"*";
                star1=star1-1;
            }


             //third triangle(rest of stars ke liye)

             int star2=row-1;
             while(star2){
                cout<<"*";
                star2=star2-1;
             }


             // last triangle

             int start=col-1;
             while(start){
                cout<<start;
                start=start-1;
             }
              
        cout<<endl;
        row=row+1;
      }

}