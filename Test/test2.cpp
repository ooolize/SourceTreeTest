#include<iostream>
#include<vector>

using namespace ::std;
int main(){
    vector<int> v;
    int n=0,total=0;
    while(cin>>n){
        v.push_back(n);
    }

    for (size_t i = 0; i < v.size();++i){
        total += v[i];
    }
    cout << "total ans = " << total << endl;
}