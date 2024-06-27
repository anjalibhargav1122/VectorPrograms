#include <iostream>
#include <vector>
using namespace std;

int main(){
     int n;
        cout << "Enter size of Vector: ";
        cin>>n;
    
    vector<int> arr ;
    int a;
    for(int i =0; i<n;i++){
        
        cout << "Enter value"<<i+ 1<<": ";
        cin>>a;
        arr.push_back(a);
    }
 int sum = 0;
    for (int i = 0; i < n; ++i) {
        
        sum += arr[i];
    }
    
     float s = sum/n;

    cout << "Average: " << s << endl;

}

