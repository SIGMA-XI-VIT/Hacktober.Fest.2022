#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y;
    cin>>x;
    vector<int> bruh{};
    for(int i=0;i<x;i++){
        cin>>y;
        bruh.push_back(y);
    };
   
      sort(bruh.begin(), bruh.end());
    
      //for_each(bruh.begin(), bruh.end(), [](int z) {
       // cout << z << " ";
    //  });
    for (int i=0;i<x;i++){
        cout<<bruh[i]<<" ";
    }
    
    return 0;
}