#include<bits/stdc++.h> 
using namespace std;     

void frequencyCounter(string arr,int sizeofstring,char key){

    unordered_map<char,int> m;

    for (int i = 0; i < sizeofstring; i++)
    {
        if(m.find(arr[i])== m.end()){
            m[arr[i]]=1;
        }
        else{
            m[arr[i]]++;
        }
    }
    
        if(m.find(key)==m.end()){
            cout<<"Key Not Found";
        }
        else{
            cout<<"The Number of times "<<key<<" Appeared is "<<m[key]<<endl;
        }
   
    
    cout<<"FrequencyCounterOfEveryCharacter"<<endl;
    for (auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    
}

void stringCompression(string arr,int sizeofstring){

    map<char,int> m;
    for (int i = 0; i < sizeofstring; i++)
    {
        if(m.find(arr[i])==m.end()){
            m[arr[i]]=1;
        }
        else{
            m[arr[i]]++;
        }
    }
    cout<<"CharcterCompression"<<endl;
    for (auto x:m)
    {
        cout<<x.first<<x.second;
    }
  }  


int main(){
int sizeofstring;
cin>>sizeofstring;
char key;
cin>>key;
string arr;
cin>>arr;
frequencyCounter(arr,sizeofstring,key);
stringCompression(arr,sizeofstring);
return 0;
}

