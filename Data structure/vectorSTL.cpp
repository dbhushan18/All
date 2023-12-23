#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1); //size of vector is 5 and all the values are 1

    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    } cout<<endl;

    vector<int> last(a);
     cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    } cout<<endl;


    cout<<"Capacity:" << v.capacity()<< endl;

    v.push_back(1);
    cout<<"Capacity:" << v.capacity()<< endl;

    v.push_back(2);
    cout<<"Capacity:" << v.capacity()<< endl;

    v.push_back(3);
    cout<<"Capacity:" << v.capacity()<< endl;
    cout<<"size:" << v.size()<<endl;

    cout<<"element at second index:"<< v.at(2) <<endl;

    cout<<"front: " << v.front()<< endl;
    cout<<"back: "  << v.back() << endl;

    cout<<"before pop: "<< endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

     v.erase(v.begin(),v.begin()+1);

    cout<<"after erase: "<< endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

   
    v.pop_back();
    cout<<"after pop: "<< endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size: "<< v.size()<<endl;
    v.clear();
    cout<<"after clear size: "<< v.size()<<endl;


 }

 