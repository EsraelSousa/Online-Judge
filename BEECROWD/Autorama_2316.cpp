#include <bits/stdc++.h>

using namespace std;

struct dados{
    int qtd_radar;
    int last;
    int id;
    int qtd_volta;
};

vector<struct dados> control(1005);

bool comp(struct dados a, struct dados b){
    return  (a.qtd_radar == b.qtd_radar)? a.last < b.last : a.qtd_radar > b.qtd_radar;
}

int main(void){
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int number_car, number_points, qtd_read, id_car, point;
    cin >> number_car >> number_points >> qtd_read;
    for(int i=0; i<=number_car; i++) control[i].id = i, control[i].last = -1, control[i].qtd_radar=0;
    for(int i=0; i<qtd_read; i++){
        cin >> id_car >> point;
        if(point == ((control[id_car].qtd_radar % number_points)+1)) control[id_car].last = i, control[id_car].qtd_radar++;
    }
    sort(control.begin()+1, control.begin()+number_car+1, comp);
    cout << '\n';
    for(int i=1; i<=number_car; i++) cout << control[i].id << ' ';
    cout << '\n';
    return 0;
}