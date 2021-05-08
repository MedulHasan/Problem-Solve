#include<bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
/*#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)*/

struct position{
    int id;
    int M;
    int E;
};

bool operator < (position a, position b){
    if(a.M > b.M) {
        return true;
    }
    else if(a.M == b.M && a.E > b.E) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    position rl;
    cin>>n;
    vector<position> vec;
    for(i=1; i<=n; i++){
        cin>>rl.id>>rl.M>>rl.E;
        vec.push_back(rl);
    }
    sort(vec.begin(), vec.end());
    cout<<endl;
    for(i=0; i<vec.size(); i++){
        cout<<vec[i].id<<" "<<vec[i].M<<" "<<vec[i].E<<endl;
    }
    return 0;
}

