#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
double mean(int N, vector<int> myVector)
{
    double mean=0;
    for(int i=0; i<N; i++)
    {
        mean=mean+myVector[i];
    }
    return mean/N;
};
double median(int N, vector<int> myVector)
{ 
    double median=0;
    if(N%2==0)
    {
        median=(myVector[N/2-1]+myVector[N/2])/2.0;
    }
    else median=myVector[N/2];
    return median;
};
int mode(int N, vector<int> myVector)
{
    double mode = myVector[0];
    int current = 0;
    int mostCured = 0;
    for(int i = 0; i<N; i++){
        if(myVector[i]==myVector[i+1]){
            current++;
        }else{
            if(current>mostCured){
                mostCured = current;
                mode = myVector[i];
            }
            current = 0;
        }
    }
    return mode;
};
int main() {
    int N, a;
    cin>>N;
    vector<int> myVector;
    for(int i=0; i<N; i++)
    {
        cin>>a;
        myVector.push_back(a);
    } 
    sort(myVector.begin(), myVector.end());
    cout<<mean(N, myVector)<<endl;
    cout<<median(N, myVector)<<endl;
    cout<<mode(N, myVector)<<endl; 
    return 0;
}
