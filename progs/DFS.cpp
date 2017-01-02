#include<iostream>
#include<list>
#include<conio.h>
using namespace std;

class graph
{
      int V;
      list<int> *adj;
      int DFSUTIL(int v,bool visited[],int count);
      public:
             void DFS(int v);
             graph(int V);
             void add_edge(int v,int w);
             
      
      
      };

graph::graph(int V)
{
     this->V = V;
     adj = new list<int>[V];
     }

void graph::add_edge(int v,int w)
{
     
     adj[v].push_back(w);}
void graph::DFS(int v)
{
     int c=0,count;
     bool *visited = new bool[V];
     for(int i=0;i<V;i++)
     visited[i]= false;
    count = DFSUTIL(v,visited,c);
    printf("%d",count);
   }
int graph::DFSUTIL(int v,bool visited[],int count)
{
   
     visited[v]=true;
     cout<<v<<" ";
     list<int>::iterator i;
     for(i=adj[v].begin();i!=adj[v].end();++i)
     {
                                              if(!visited[*i])
                                              {
                                              DFSUTIL(*i,visited,count);
                                              
                                              }
                                              count++;
                                              }
                                            return count;
     }

int main()
{
    graph g(4);
     g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);
    
    g.DFS(2);
    getch();
}
    
    
    

