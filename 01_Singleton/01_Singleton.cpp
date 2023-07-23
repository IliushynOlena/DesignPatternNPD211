#include <iostream>
using namespace std;
/*
* Default methods in class
* - default c-tor
* - destructor
* - copy constructor
* - operator =
*/
class Singleton
{
private:
    static Singleton* p_instance;
    Singleton() {}
    Singleton(const Singleton& other) = delete;
    Singleton operator =(const Singleton& other) = delete;
   
public:
    static Singleton* GetInstance()
    {
        if (p_instance == nullptr)
            p_instance = new Singleton();
        return p_instance;
    }
    void Log(string msg)
    {
        cout << "Msg  : " << msg << endl;
    }

};
Singleton* Singleton::p_instance = nullptr;
int main()
{
    Singleton * s1 = Singleton::GetInstance();
    Singleton * s2 = Singleton::GetInstance();

    s1->Log("Hello world");

    Singleton::GetInstance()->Log("Insert new user ar 17:30");
    Singleton::GetInstance()->Log("zdsfh dkgh iudhgid");
    Singleton::GetInstance()->Log("dsgks u9gdui 9ds");
    //Singleton test(*s1);//copy ctor
    //Singleton test = *s1;//operator =
    //test.Log("I create two objects!!!!!!");
    delete s1;
   
   
  
}

