#include <iostream>

using namespace std;

int n, a[1001];

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int count(int s){
    int i, cnt = 1, sum = 0;
    for(i = 1; i <= n; ++i){
        if(sum + a[i] > s){
            cnt++;
            sum = a[i];
        }else sum += a[i];
    }

    return cnt;
}

int main(){
    freopen("p.txt", "rt", stdin);

    int m, i, lt = 1, rt = 0, mid, res;
    cin >> n >> m;
    for(i = 1; i <= n; ++i) { 
        cin >> a[i];
        rt = rt + a[i]; 
    }

    while(lt <= rt){
        mid = (lt + rt)/2;
        
        if(count(mid) <= m){
            res = mid;
            rt = mid - 1;
        }else lt = mid + 1;
    }
}