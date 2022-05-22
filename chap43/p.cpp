#include <iostream>
#include <vector>

using namespace std;

int n, m, tmp, sum = 0;
vector <int> v;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        v.push_back(tmp);
        sum += tmp;
    }
    sum = sum / 2;
    cout << sum << "\n";

}