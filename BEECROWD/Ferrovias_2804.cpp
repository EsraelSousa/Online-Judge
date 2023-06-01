#include <bits/stdc++.h> 
  
using namespace std; 
  
typedef long long ll; 
#define all(x) x.begin(), x.end() 
  
const int MAX = 455; 
int distancia[MAX][MAX], distanciaCopia[MAX][MAX]; 
int n; 

void floydWarshall(int m[][MAX]){
    for(int k=1; k<=n; k++) 
        for(int i=1; i<=n; i++) 
            for(int j=1; j<=n; j++) 
                m[i][j] = min(m[i][j], m[i][k]+m[k][j]);
}
  
int main(){ 
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
    int flag=1, k, ans=0; 
    cin >> n >> k; 
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=n; j++){ 
            cin >> distancia[i][j]; 
            distanciaCopia[i][j] = distancia[i][j]; 
        }
        
    for(int i=1; i<=n && flag; i++) 
        for(int j=i; j<=n && flag; j++){
            if(i != j)
                flag &= (distancia[i][j] == distancia[j][i]);
            else
                flag &= (distancia[i][j] == 0); // a distancia para ele é diferente de 0
        }

   floydWarshall(distanciaCopia);
    for(int i=1; i<=n && flag; i++) 
        for(int j=i; j<=n && flag; j++) 
            flag &= (distanciaCopia[i][j] == distancia[i][j]); // checa se pode fazer um caminho com uma distância menor
    
    if(!flag){ // a malha possui um erro
        cout << "*\n"; 
        return 0; 
    } 
    // vamos passar por todas as arestas e ver se podemos remove-la     
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            flag = 0;
            for(int k=1; k<=n; k++){
                if(k == i || k == j) continue;
                // poso ir de I a J passando por um vertice intermediario sem aumentar a distância
                flag |= (distanciaCopia[i][k] + distancia[k][j] == distanciaCopia[i][j]); // desigualdade triângular
            }
            if(flag) // a aresta pode ser removida sem aumentar as distancias minimas entre todos os vertices
                distanciaCopia[i][j] = distanciaCopia[j][i] = 1e9;   
        }
    } 
    // verificar quantas arestas ficaram no grafo
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            ans += (distanciaCopia[i][j] != (int)1e9);
    
    cout << ans * k << '\n'; 
    return 0;
} 
  
 /* 
 Para o segundo caso, * indica que a aresta está no grafo final
 5 8 
 0 3 4 9 5 
 3 0 5 6 2 
 4 5 0 11 7 
 9 6 11 0 4 
 5 2 7 4 0 
  
 2-5 2 *
 1-2 3 *
 1-3 4 *
 4-5 4 *
 1-5 5 
 2-3 6 *
 2-4 6 
 3-5 7 
 1-4 9
 3-4 11
 */