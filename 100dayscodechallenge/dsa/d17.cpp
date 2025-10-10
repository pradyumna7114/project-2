#include<iostream>
using namespace std;

string sr(string st){
    
  for(int i=0; i<st.length(); i++){
    if(st[i] == ','){
        st.erase(i,1);
    }
    
  }
  return st;
}

int main(){
    string s="a,b,b,c";
    string r= sr(s);
    cout<<" "<< r;
    int c = 1;
    for(int i=0; i<r.length(); i++){
        if(r[i]!=r[i+1]){
            cout<<" "<<r[i] ;
            cout<< " "<< c ;
        }
        
        else
        c ++;
        cout<< " " << c;


    }
    return 0;
}