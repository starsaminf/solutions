#include <algorithm>
#include <iostream>
#include <iterator>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <list>
#include <set>
#include <map>
//#include <unordered_map>


#define 	ll long long
#define 	lld long long int
#define 	sc scanf
#define 	pi 2*acos(0.0)
#define 	f first
#define 	s second
#define 	sz size()
#define 	mp make_pair
#define 	r(input) freopen("b.in","r",stdin)
#define 	w(output) freopen("b.out","w",stdout)
#define 	maxall(v) *max_element(v.begin(),v.end())
#define 	minall(v) *min_element(v.begin(),v.end())
#define 	Sort(v) sort(v.begin(),v.end())
#define 	clr(a)  memset(a,0,sizeof(a))
#define 	pb push_back
#define 	inf 1000000000 
#define 	mod 1000000009
using namespace std;
//unordered_map<int,int> unmap;
int main(){
	#ifndef ONLINE_JUDGE
	//r(input);
	#endif
	int n,dat;
	while(sc("%d",&n)==1){
		vector<int> vec;
		int ans=0;
		for(int i=0;i<n;i++){
			sc("%d",&dat);
			if(dat==4)ans++;
			else {
				vec.pb(dat);
			}

		}
		if(vec.size()!=0){
			
			sort(vec.begin(),vec.end());
			int j=0;
			int aux=vec[0];
			bool sw=true;
			for (int i = 1; i < vec.size(); i++){
				if(aux+vec[i]<=4){
					aux+=vec[i];
					sw=true;
				}else {
					ans++;
					sw=false;
					aux=vec[i];
				}
			}
			if(n%2==1 or sw)ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}