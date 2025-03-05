#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define endl "\n"

void solve() {
// Count maximum consecutive one's in an given array
// Arr[] = {1, 1, 0, 1, 1, 1}
// Output = 3

// Arr[] = {0 , 0}
// Output = 0

vector<int> arr = {1,1,1,1,1, 0, 1 , 1,0, 1, 1,1,1};

int size = arr.size();
int answer = 1;


bool firstOne = false;
int CurrCount = 1;


for(int i = 0; i < size; i++) {
if(arr[i] == 1 && arr[i + 1] == 1) {
CurrCount++;
firstOne = true;
} else {
answer = max(answer, CurrCount);
CurrCount = 1;
}
}

if(!firstOne) {
cout << 0;
} else {
cout << answer;
}

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

solve();
return 0;
}