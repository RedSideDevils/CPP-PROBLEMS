#include <iostream>

using namespace std;

int signs[10];
int nums[10];

int n, res;

int main(){
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> nums[i];
		signs[i] = 1;
	}	

	cin >> res;

	int i = n;

	while(i > 0){
		i = n;
		while(signs[i-1] == -1){
			i--;
		}

		signs[i-1] = -1;

		for(int j = i; j < n; j++)
			signs[j] = 1;

		int sum = 0;

		for(int j = 0; j < n; j++){
			sum += nums[j] * signs[j];
		}

		if(sum == res){
			for(int j = 0; j < n; j++){
				if(nums[j] * signs[j] > 0){
					if(j != 0)
						cout << "+" << nums[j] * signs[j];
					else
						cout << nums[j] * signs[j];

				}else{
					cout << nums[j] * signs[j];
				}
				
			}
			cout << " = " << res << endl;
			break;
		}
	}

	return 0;
}
