#include<iostream>
using namespace std;
class Num{
    public:
    virtual int n(int num)=0;
};
class Pal:public Num{
    public:
    int n(int num){
        int x=num;
        int rev=0;
        while(num>0){  
            rev=(rev*10)+(num%10);
            num=num/10;
        }
        if(x==rev){
            cout<<"Palindrome";
        }
        else{
            cout<<"Not Palindrome";
        }
        return 0;
    }
};
int main(){
    Num *p;
    Pal obj;
    p=&obj;
    (*p).n(121);
    return 0;
}