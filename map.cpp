#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string , int> m; // use map if want to maintain the oreder

    //insertion
    pair<string , int> p = make_pair("swayam" ,2);
    m.insert(p);

    //2nd way
    pair<string , int > p2("garg" , 3);
    m.insert(p2);

    // 3rd way 
    m["best"] = 1;

    //search 
    cout<<m["garg"]<<endl;
    cout<<m.at("swayam")<<endl;
    // cout<<m.at("savage")<<endl; gives error
    cout<<m["savage"]<<endl;// creates a new entry 

    //count to check the presence
    cout<<m.count("swayam")<<endl;

    //size
    cout<<m.size()<<endl;

    //erase
    m.erase("garg");
    cout<<m.size()<<endl;


    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //making iterator
    unordered_map<string , int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<< it->second<<endl;
        it++;
    }
    return 0;
}