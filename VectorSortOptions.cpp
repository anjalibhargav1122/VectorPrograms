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
     cin.ignore();
     string option;
    cout << "High to Low"<<endl<<"Low to High"<<endl;
        cout << "select one option: ";
         getline(cin , option);

   if(option =="Low to High"){
       
       for(int i=0; i <vec.size(); i++){
    
    for(int j = i+ 1; j<vec.size(); j++){
      if(vec[i]>vec[j]){
       int   temp= vec[i];
         vec[i]  = vec[j];
         vec[j] = temp;
      }
        
    }
}
for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<endl;
}
   }else if(option == "High to Low"){
         for(int i=0; i<vec.size(); i++){
    
    for(int j = i+ 1; j<vec.size(); j++){
      if(vec[i]<vec[j]){
       int   temp= vec[i];
         vec[i]  = vec[j];
         vec[j] = temp;
      }
        
    }
}
for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<endl;
}
   }
   else{
          cout << "Condition not match"; 
   }

}
