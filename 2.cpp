#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,y,z;
    cout << "Vvedi X i Y" << endl;
    cin >> x >> y;
    z = (pow(sin(x),2)+pow(cos(y),2))*2;
    cout << z;
    return 0;
}
