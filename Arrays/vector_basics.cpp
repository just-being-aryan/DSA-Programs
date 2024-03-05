#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    //Pushing elements into a Vector

    for(int i = 1; i<=5 ; i++)
    {
        v.push_back(i);
    }


    //Checks if the vector is empty or not

    if(v.size() != 0)
    {
        cout<<"\nVector is not Empty";
    }
    else
    {
        cout<<"\nVector is Empty";
    }

    cout<<endl;

    //Gets the element of Vector present at the start and end

    for(auto i = v.begin(); i != v.end() ; ++i)
    {
        cout<<*i<<" ";
    }


    //Inserts at the beginning 

    v.emplace(v.begin(),75);
    cout<<"\nElement at the beginning is "<<v[0];

    //Inserts 20 at the end

    v.emplace_back(20);
    int n = v.size();
    cout<<"\nThe element at the end of vector is "<<v[n-1];


    //Clears the vector

    v.clear();
    cout<<"\nThe size of the current vector is "<<v.size();

    return 0;


}