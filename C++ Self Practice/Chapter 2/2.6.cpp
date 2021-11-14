#include <iostream>
using namespace std;
class temp
{ public:
    void cels()
    { 
        float celsius;
        float temp;
        cin>> temp;
        celsius=(temp-32)*5/9;
        cout<< celsius;
    }
};
int main()
{ temp ob;
ob.cels();

    return 0;
}



98.6
37
