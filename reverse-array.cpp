#include <iostream>
using namespace std;
  
int main(){
    int input[100000], output[100000], count, i;
      
    cin >> count;
           
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
      
    for(i = 0; i < count; i++){
        output[i] = input[count-i-1];
    }    
    for(i = 0; i < count; i++){
        cout << output[i] << " ";
    }
          
    return 0;
}
