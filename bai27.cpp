#include<iostream>

using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Nhap so:";
        cin >> n;
        (n>0 && n%5==0) ? cout << "Ket qua phep chia:" << n/5 << endl : cout << "-1" << endl;
        if (n==-1)
        {
            cout << "Bye";
            break;
        }
    } while (n!=-1);
    return 0;
}
