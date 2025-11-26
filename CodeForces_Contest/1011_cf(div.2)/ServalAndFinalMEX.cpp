#include <iostream>
#include <vector>
using namespace std;

int cMex(const vector<int> &a,int c,int b){
    bool pr[4]={false,false,false,false};
    for(int i=c;i<=b;++i){
        if(a[i]<4){
            pr[a[i]]=true;
        }
    }
    for(int j=0;j<4;++j){
        if(!pr[j]){
            return j;
        }
    }
    return 4;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector <int> a(n);
        for(auto &y:a)
            cin >>y;
    
        vector <pair<int,int>> op;
        while((int)a.size()>3){
            bool is_zero = false;
            for(auto y:a){
                if(y==0){
                    is_zero=true;
                    break;
                }
            }
            if(is_zero){
                int pos=-1;
                for(int i=0;i<(int)a.size();++i){
                    if(a[i]==0){
                        pos =i;
                        break;
                    }
                }
                if(pos==0){
                    int z = cMex(a,0,1);
                    op.push_back({1,2});
                    vector <int> na;
                    na.push_back(z);
                    for(int i=2;i<(int)a.size();++i){
                        na.push_back(a[i]);
                    }
                    a=na;
                }else{
                    int z=cMex(a,pos-1,pos);
                    op.push_back({pos,pos+1});
                    vector <int> na;
                    for(int i=0;i<pos-1;++i){
                        na.push_back(a[i]);
                    }
                    na.push_back(z);
                    for(int i = pos+1;i<(int)a.size();++i){
                        na.push_back(a[i]);
                    }
                    a=na;
                }
            }else{
                int z=cMex(a,0,a.size()-1);
                op.push_back({1,(int)a.size()});
                vector <int> na;
                na.push_back(z);
                a=na;
                break;
            }
            if(a.size()==3){
                int n = cMex(a,0,1);
                if(n!=0 && a[2]!=0){
                    op.push_back({2,3});
                    vector <int> na;
                    na.push_back(n);
                    na.push_back(a[2]);
                    a=na;
                }else{
                    int s = cMex(a,1,2);
                    if(a[0]!=0 && s !=0){
                        op.push_back({2,3});
                        vector <int> na;
                        na.push_back(a[0]);
                        na.push_back(s);
                        a=na;
                    }else{
                        op.push_back({1,3});
                        int n = cMex(a,0,2);
                        vector <int> na;
                        na.push_back(n);
                        a=na;
                    }
                }
            }
        if(a.size()==2){
            int z = cMex(a,0,1);
            op.push_back({1,2});
            vector <int> na;
            na.push_back(z);
            a=na;
        }
    }
        cout << op.size() << endl;
        for(auto &op : op){
            cout << op.first << " " << op.second << endl;
        }
    }
    return 0;
}