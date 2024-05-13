//loops and patterns
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j = i;
        while(j<2*i){
            cout<<j<<" ";
            j =j+1;
        }
        cout<<endl;
        i =i+1;
    }
}
/*
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of columns: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        cout << "* ";
        i++;
    }
    return 0;
}
4
****
#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int i=2;

while(i<=n)
{
 if(n%i==0){
    cout<<"not prime number for"<<i<<endl;
 }
 else{
    cout<<"prime number for"<<i<<endl;
 }
i=i+1;

}
}

//farnheit to celsius coversion with while

int main() {
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        double fahrenheit, celsius;

        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        cout << "Temperature in Celsius: " << celsius << endl;

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;
    }

    cout << "Goodbye!" << endl;

    return 0;
}
*/