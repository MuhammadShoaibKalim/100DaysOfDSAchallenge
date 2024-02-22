#include <iostream>
#include <vector>
using namespace std;
vector <int> reverse(vector<int> v ){
        int s=0; 
        int e=v.size()-1;
        while(s<=e)
        {
            swap(v[s],v[e]);
            s++;
            e--;
        }
        return v;

        
    }
    void print(vector <int> v)
    {
          for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }
int main() {
    
    vector <int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);

    cout<<" Printing the original array :";
    print(v);

    vector <int> ans=reverse(v);
    cout<<" Printing the reverse an array :";
    print(ans);

    return 0;
}
