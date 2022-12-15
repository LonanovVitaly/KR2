#include <bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    char Pol;
    int uspevaemost;
};

int main()
{
    Student st[4];

    int k = 0;
    st[0].name = "Pasha";
    st[0].Pol = true;
    st[0].uspevaemost = 5;
    st[1].name = "Sasha";
    st[1].Pol = true;
    st[1].uspevaemost = 3;
    st[2].name = "Glasha";
    st[2].Pol = false;
    st[2].uspevaemost = 4;
    st[3].name = "Dasha";
    st[3].Pol = false;
    st[3].uspevaemost = 5;
    /*for(int i = 0; i < 4; i++){
        cout << i <<" Student: vvedi imya Pol uspevaemost" << endl;
        cin >> st[i].name >> st[i].Pol>> st[i].uspevaemost;
    }*/
    for (int  i = 0; i < 4; i++){
        if((st[i].Pol) && (st[i].uspevaemost >= 4)){
            if (k == 0)
                cout << "DA est parni-molodci; imena:"<<endl;
            k++;
            cout << st[i].name << endl;
        }
    }
    if (k == 0)
        cout << "Net parnei-molodcovv";
    return 0;
}
