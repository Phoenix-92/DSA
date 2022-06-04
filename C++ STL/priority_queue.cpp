#include <iostream>
#include <queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(6);
    maxi.push(3);
    maxi.push(4);

    cout<<"size->"<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(6);
    mini.push(3);
    mini.push(4);

    cout<<"size->"<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"is empty or not ->"<<mini.empty()<<endl;


return 0;
}