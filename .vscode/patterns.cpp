
#include <iostream>
using namespace std;

int main(){
int n, count = 4;
cout << "Enter Lines Number: ";
cin >> n;

for (int i = 1; i <= n; i++)
{
if (count == 4)
{
count = 1;
cout << " * " << endl;
continue;
}
if (i % 2 == 0)
cout << " ";
else
cout << " ";
count++;
cout << " * " << endl;
}

return 0;

}