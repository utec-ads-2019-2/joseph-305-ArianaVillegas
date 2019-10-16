#include <iostream>

using namespace std;

int main() {
    int josephNumbers[]={2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
    int n; cin>>n;
    while(n){
        cout<<josephNumbers[n-1]<<'\n';
        cin>>n;
    }
    return 0;
}