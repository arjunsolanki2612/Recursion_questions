#include<iostream>
using namespace std;
void toh(int n,char src, char dest, char helper){
    if(n>0){
        toh(n-1,src,helper,dest);
        cout<<"move disk "<< src<<" to "<<dest<<endl;
        toh(n-1,helper,dest,src);
    }
}
int main(){
    toh(3,'A','C','B');
    cout<<endl;
    toh(3,'A','B','C');
    
    return 0;
}