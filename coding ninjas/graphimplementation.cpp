#include <bits/stdc++.h>
using namespace std;
void print(int** edges, int v,int sv ) {




}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //nikhil  nikhil


  int v,e;
  std::cin >>v>>e;
  int ** edges = new int[v];
  for(int i=0;i<v;i++){
  edges[i]=new int [v];
  for(int j=0;j<v;j++)
  edges[i][j]=0;

}
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;

    }

   print(edges,v,0);

    return 0;
}
