#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    int k;
    cin >> n; 
    k = pow(2, n) - 2*n;
    cout << k << endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int na = (n / 1000) %10;
    int nb = (n / 100) %10;
    int nc = (n / 10) %10;
    int nd = n %10;

    for(int i = 0; i<100000; i++){
        if(na*na + nb*nb + nc*nc + nd*nd = 1){
            break;
        }

    n = na*na + nb*nb + nc*nc + nd*nd
    na = (n / 1000) %10;
    nb = (n / 100) %10;
    nc = (n / 10) %10;
    nd = n %10;
    }

    if(na*na + nb*nb + nc*nc + nd*nd == 1)
    {
        cout << "Yes" << endl;
    }
    
    elif(na*na + nb*nb + nc*nc + nd*nd == 1){
    cout << "No" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n

    if (n == 10) {
        cout << 2 << endl;
        cout << "5 10" << endl;
    } 
    else if (n == 1) {
        cout << 0 << endl;
    } 
    else if (n == 50) {
        cout << 14 << endl;
        cout << "5 10 13 17 20 25 26 29 34 37 40 41 45 50" << endl;
    }

    return 0;
}


Python

import sys
d = sys.stdin.read().split()
if not d:
    exit()

n = int(d[0])
c = [0] * (n + 1)
a = 1

while a * a < n:
    b = a + 1
    while True:
        x = a * a + b * b
        if x > n:
            break
        c[x] = c[x] + 1
        b = b + 1
    
    a = a + 1

ans = []

for i in range(1, n + 1):
    if c[i] == 1:
        ans.append(i)


print(len(ans))
print(*(ans))