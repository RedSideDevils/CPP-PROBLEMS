#include <iostream>

using namespace std;

int n;
int nums[100];
int res;
int temp = 1;

int main(){

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for(int i = 0; i <= n - 1; i++){
        if(nums[i] == nums[i + 1]){
            temp++;
        }
        else{
            if(temp > res){
                res = temp;
            }
            temp = 1;
        }
    }
    
    if(temp > res){
        res = temp;
    }

    cout << res << endl;
    return 0;
}
