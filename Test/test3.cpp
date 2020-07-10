#include<iostream>
#include<functional>
#include<map>
#include<memory>

using namespace::std;

using CallBack = function<void()>;
class func{
public:
    func(CallBack &&cb)
    :m_myCallBack(cb)
    {
        
    }
    void run(){
        if(m_myCallBack){
            m_myCallBack();
        }
    }
private:
    CallBack m_myCallBack;
};

class FuncList{
public:
    
    void func1(){
         cout << "i am func1"<<endl;
    }

    void func2(int a){
        cout << "i am func2" << endl
        << "i has a pram" << a << endl;
    }

};

void test1(){
    FuncList fList;

    func f1(bind(FuncList::func1,&fList));
    func f2(bind(FuncList::func2,&fList, 2));

    f1.run();
    f2.run();
} 

int main(){
    test1();
}