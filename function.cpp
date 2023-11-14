#include <iostream>
using namespace std;

int main()
{
    int a ,b;
    cin >>a>>b;
    int ans = 1;
    for(int i=1 ; i<=b   ; i++)
    {
        ans =ans * a;
    }
    cout<<"answer is"<< ans <<endl;
    // return 0;



    int c,d;
    cin >> c >> d;
    int ans = 1;
    for (int i = 1; i <= d; i++)
    {
        ans = ans * c;
    }
    cout << "answer is" << ans << endl;
    // return 0;



    

int e, f;
cin >> e >> f;
int ans = 1;
for (int i = 1; i <= f; i++)
{
    ans = ans * e;
}
cout << "answer is" << ans << endl;
return 0;

}
