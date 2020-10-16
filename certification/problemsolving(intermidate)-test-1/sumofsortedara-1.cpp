#include <bits/stdc++.h>
#include <map>
using namespace std;
//This is a test for certification  in hackerrank prbolem solving (intermidate)
//Didnt pass beacuse time exceed , need optimization 
//using namespace std;
/*
 * Complete the 'sortedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */
 std::map<int, int> mymap;

int sortedSum(vector<int> ara) {
    long long int sum=0;
    int tempara[ara.size()];
    for(int i=0;i<ara.size();i++)
    {
        for(int j=0;j<=i;j++) tempara[j]=ara[j];
        //for(int j=0;j<=i;j++) cout<<tempara[j]<<" ";
        sort(tempara,tempara + i+1);
        //for(int j=0;j<=i;j++) cout<<tempara[j]<<" ";
        for(int j=0;j<=i;j++)
        {   
                sum = sum + (long long)(j+1)*tempara[j];
                sum = sum%1000000007;
        }
        //cout<<sum<<endl;
    }
    return sum;
}

int main()
{
    int n,element;
    cin>>n;
    vector<int> ara; 
    for(int i=0;i<n;i++)
    {
        cin>>element;
        ara.push_back(element);
        mymap[element]=0;
    }
     
    //sort(ara.begin(), ara.end(), greater<int>()); 
    cout<<sortedSum(ara);
}
