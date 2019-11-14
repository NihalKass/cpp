#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    return a.size()<b.size();
}

int main() {
	int T;
	cin>>T;
	for(int tc=1; tc<=T; tc++){
	    int N, P;
	    cin>>N>>P;
	
	    string str;
	    std::vector<string> s;
	
	    for(int i=0; i<P; i++){
	        cin>>str;
	        s.push_back(str);
	    }
	
    	sort(s.begin(), s.end(), cmp);
	
	    for(auto i=s.begin(); i!=s.end(); i++){
	        string c = *i;
	        int cs = c.size();
	        
	        for(auto j=i+1; j!=s.end(); j++){
	            string k = *j;
	            string temp = k.substr(0, cs);
	            
	            if(temp == c){
	                s.erase(j);
	                j--;
	            }
	        }
	    }
	    
	    uint64_t res = pow(2, N);
	    for(auto i=s.begin(); i!=s.end(); i++){
	        string k = *i;
	        int sz = k.size();
	        res -= pow(2, N-sz);
	    }
	    cout<<"Case #"<<tc<<": "<<res<<endl;
	}
	return 0;
}
