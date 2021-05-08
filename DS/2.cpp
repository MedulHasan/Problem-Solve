#include<bits/stdc++.h>
using namespace std;

#define lld long long
#define u32 unsigned long
#define u64 unsigned long long
#define FI freopen("input.txt", "r", stdin)
#define FO freopen("output.txt", "w", stdout)

struct rankList{
    int id;
    int math;
    int english;
};

bool operator < (rankList a, rankList b){
    if(a.math > b.math)return true;
    else if(a.math == b.math && a.english > b.english) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //FI;
    //FO;

    rankList rl;

    int n;
    cin>>n;

    vector<rankList> vec;

    for(int i=1; i<=n; i++){
        cin>>rl.id>>rl.math>>rl.english;
        vec.push_back(rl);
    }

    sort(vec.begin(), vec.end());
    cout<<endl;
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i].id<<" "<<vec[i].math<<" "<<vec[i].english<<endl;
    }

    return 0;
}
