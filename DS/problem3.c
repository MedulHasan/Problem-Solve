#include<stdio.h>

struct rankList{
    int id;
    int M;
    int E;
};

bool operator < (rankList a, rankList b){
    if(a.M > b.M)return true;
    else if(a.M == b.M && a.E > b.E) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    rankList rl;

    int n;
    //cin>>n;
    scanf("%d", &n)

    vector<rankList> vec;

    for(int i=1; i<=n; i++){
        //cin>>rl.id>>rl.M>>rl.E;
        scanf("%d %d %d", &rl.id, &rl.M, &rl.E);
        vec.push_back(rl);
    }

    sort(vec.begin(), vec.end());
    cout<<endl;
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i].id<<" "<<vec[i].M<<" "<<vec[i].E<<endl;
    }

    return 0;
}


