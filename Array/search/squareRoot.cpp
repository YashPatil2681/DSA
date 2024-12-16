/* suppose num=16
    1    to 16           mid = 8
    1    to    8         mid = 4 

        */
/* suppose num=49  
    1         to          49    mid = 24       24*24 = 576   end = mid -1 
    1         to          23    mid = 11      11*11 = 121   end = mid -1
    1         to          10    mid = 5        5 * 5 = 25    ans = 5  start = 5 + 1 = 6
    6         to          10    mid = 8        8 * 8 = 64    end = mid -1   
    6         to          7     mid = 6        6 * 6 = 36   start = 6 + 1 = 7
      7 to 7        mid = 7                    7 * 7 = 49
    */


#include<iostream>
using namespace std;
int SquareRoot(int x){
    int ans = -1;
    int start = 0;
    int end = x-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        int square = mid*mid;
        if(square == x){
            return mid;
        }
        else if(square < x){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter value of Num : ";
    cin>>num;
    cout<<"\nSquare root of "<<num<<" : "<<SquareRoot(num);
}

/*          num = 121
0       to       121         mid = 60 (mid*mid>121)       end = mid - 1
0       to       60          mid = 30 (mid*mid>121)       end = mid - 1
0       to       29          mid = 14 (mid*mid>121)       end = mid -1 
0       to       14          mid = 7  (mid*mid<121)       start = mid + 1 ans=7
8       to       14          mid = 11  (mid*mid==121)     ans = mid
*/