<<<<<<< HEAD
#include <bits/stdc++.h>

#define f first
#define s second

using namespace std;

int pow_2(int x){
	int e=log2(x);
	if(pow(2, e) == x) return 0;
	return 1;
}

struct j{
    int v;
    int n;
    int id;
};

bool com(j a, j b){
	if(a.v == b.v)
	    return a.n > b.n;
	else
	    return a.v < b.v;
}

int main(){
	int mat[2][5], po[5], rod;
	j jog[5];
	ios_base::sync_with_stdio(0);
	while(cin >> rod && rod){
		memset(po, 0, sizeof(po));
		for(int i=0; i<rod; i++){
			cin >> jog[0].n >> jog[1].n >> jog[2].n;
			jog[0].v=pow_2(jog[0].n), jog[0].id=0;
			jog[1].v=pow_2(jog[1].n), jog[1].id=1;
			jog[2].v=pow_2(jog[2].n), jog[2].id=2;
			sort(jog, jog+3, com);
			if(!jog[0].v){
				 po[jog[0].id]++;
				 //for(int j=0; j<3; j++)
			        //cout << jog[j].v << " " << jog[j].n << " " << jog[j].id << endl;
				 //cout << "ve " << jog[0].s.s <<  " " << jog[0].s.f << endl;
			}
		}
		if(po[0]>po[1] && po[0]>po[2])
			cout << "Uilton\n";
		else if(po[1]>po[0] && po[1]>po[2])
			cout << "Rita\n";
		else if(po[2]>po[0] && po[2]>po[1])
			cout << "Ingred\n";
		else
			cout << "URI\n";
	}
	return 0;
}
=======
#include <bits/stdc++.h>

#define f first
#define s second

using namespace std;

int pow_2(int x){
	int e=log2(x);
	if(pow(2, e) == x) return 0;
	return 1;
}

struct j{
    int v;
    int n;
    int id;
};

bool com(j a, j b){
	if(a.v == b.v)
	    return a.n > b.n;
	else
	    return a.v < b.v;
}

int main(){
	int mat[2][5], po[5], rod;
	j jog[5];
	ios_base::sync_with_stdio(0);
	while(cin >> rod && rod){
		memset(po, 0, sizeof(po));
		for(int i=0; i<rod; i++){
			cin >> jog[0].n >> jog[1].n >> jog[2].n;
			jog[0].v=pow_2(jog[0].n), jog[0].id=0;
			jog[1].v=pow_2(jog[1].n), jog[1].id=1;
			jog[2].v=pow_2(jog[2].n), jog[2].id=2;
			sort(jog, jog+3, com);
			if(!jog[0].v){
				 po[jog[0].id]++;
				 //for(int j=0; j<3; j++)
			        //cout << jog[j].v << " " << jog[j].n << " " << jog[j].id << endl;
				 //cout << "ve " << jog[0].s.s <<  " " << jog[0].s.f << endl;
			}
		}
		if(po[0]>po[1] && po[0]>po[2])
			cout << "Uilton\n";
		else if(po[1]>po[0] && po[1]>po[2])
			cout << "Rita\n";
		else if(po[2]>po[0] && po[2]>po[1])
			cout << "Ingred\n";
		else
			cout << "URI\n";
	}
	return 0;
}
>>>>>>> refs/remotes/origin/master
