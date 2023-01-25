#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
const int IFN = 1e9;
int lastDay[4*MAXN], ans[MAXN];
bool mark[4*MAXN];
int T;

void push(int no, int l, int r){
    if(mark[no] && l != r){
        if(lastDay[2*no] != IFN){
            lastDay[2*no] = lastDay[no];
            mark[2*no] = true;
        }
        if(lastDay[2*no+1] != IFN){
            lastDay[2*no+1] = lastDay[no];
            mark[2*no+1] = true;
        }
        mark[no] = false;
    }
}

void update(int no, int l, int r, int a, int b, int day){
    if(l > r || l > b || r < a || lastDay[no] == IFN){
        return;
    }
    push(no, l, r);
    
    if(a <= l && r <= b){
        lastDay[no] = day;
        mark[no] = true;
        return;
    }
    int m = l + (r-l)/2;
    update(2*no, l, m, a, b, day);
    update(2*no+1, m+1, r, a, b, day);
    lastDay[no] = min(lastDay[2*no], lastDay[2*no+1]);
}

void findOver(int no, int l, int r, int day){
	if(lastDay[no] >= day - T ) return;
	push(no, l, r);
	if(l == r){
		lastDay[no] = IFN;
		return;
	}
	int m = l + (r-l)/2;
	findOver(2*no, l, m, day);
	findOver(2*no+1, m+1, r, day);
	lastDay[no] = min(lastDay[2*no], lastDay[2*no+1]);	
}

int query(int no, int l, int r, int i, int day){
    if(lastDay[no] == IFN){
        return lastDay[no];
    }
    push(no, l, r);
    if(l == r) return day - lastDay[no];
    
    int m = l + (r-l)/2;
    if(i<=m) return query(2*no, l, m, i, day);
    return query(2*no+1, m+1, r, i, day);
}

int read_int() {
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar();
    while (1) {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (1) {
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

int main(){
    int n, k, l, r, t;
    while(scanf("%d %d %d", &n, &k, &T) == 3){
        memset(lastDay, 0, sizeof(lastDay));
        memset(mark, 0, sizeof(mark));
        for(int i=1; i<=k; i++){
            l = read_int();
            r = read_int();
            findOver(1, 1, n, i);
            update(1, 1, n, l, r, i);
        }
        t = 0;
        for(int i=1; i<=n; i++){
            l = query(1, 1, n, i, k);
            if(l < T) ans[t++]=i;
        }
        printf("%d", t);
        for(int i=0; i<t; i++) printf(" %d", ans[i]);
        puts("");
    }
    return 0;
}
