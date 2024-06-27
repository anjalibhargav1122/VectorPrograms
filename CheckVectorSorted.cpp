#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int n;
        cout << "Enter size of Vector: ";
        cin>>n;
    
    vector<int> vec ;
    int a;
    for(int i =0; i<n;i++){
        
        cout << "Enter value"<<i+ 1<<": ";
        cin>>a;
        vec.push_back(a);
    }

    if (is_sorted(vec.begin(), vec.end())) {
        cout << "Vector vec is sorted." << endl;
    } else {
        cout << "Vector vec is not sorted." << endl;
    }




}
