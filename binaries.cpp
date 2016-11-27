#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

vector <int> bin;

void tobin(int n)
    {
    if (n > 0)
        {
        bin.push_back(n % 2);
        tobin(n / 2);
    }
}

int main(){
    int n, count = 0, aux = 0;
    cin >> n;

    tobin(n);

    for (int i=bin.size() - 1; i >= 0; i-- )
        {
//            if (bin[i] == 1  && count == 0)
//                count++;
            if ((bin[i] == bin[i+1] || count == 0) && bin[i] == 1)
                count++;
            else if (count > aux)
                {
                    aux = count;
                    count = 0;
                }
                //cout << bin[i];

        }

    if (aux > count)
        cout << aux;
    else
        cout << count;



    return 0;
}
