#include <iostream>
using namespace std;

class Object1
{
    public:
        int a = 7;
        int b = 5;
};

class Object2 : public Object1
{
    public:
        int c;
        void get_data()
        {
            cout << "Enter the value of c: ";
            cin >> c;
        }
};

int main()
{
    Object2 obj2;
    obj2.get_data();
    cout << "Area of the Object 1 = " << obj2.a * obj2.b << endl;
    cout << "Volume of the Object 2 = " << obj2.a * obj2.b * obj2.c;
    return 0;
}
