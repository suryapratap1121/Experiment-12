#include<iostream>
using namespace std;

int count = 0;

class destruct {
public:
    destruct() {
        count++;
        cout << "No of objects created: " << count << endl;
    }

    ~destruct() {
        count--;
        cout << "No of objects destroyed: " << count << endl;
    }
};

int main() {
    destruct obj1; 
    destruct obj2; 
    destruct obj3; 

    {
        destruct obj4;  
    } 

    return 0;
}
// Output
// No of objects created: 1
// No of objects created: 2
// No of objects created: 3
// No of objects created: 4
// No of objects destroyed: 3
// No of objects destroyed: 2
// No of objects destroyed: 1
// No of objects destroyed: 0
// Note: The output may vary in order due to the timing of destructor calls when objects go out of scope.
