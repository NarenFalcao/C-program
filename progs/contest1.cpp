#include<iostream>
#include<list>
#include<conio.h>
using namespace std;

class graph
{
      int V;
      list<int> *adj;
      int DFSUTIL(int v,bool visited[],int c);
      public:
             void DFS();
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
void graph::DFS()
{
     bool *visited = new bool[V];
     int count,c=0;
     for(int i=0;i<V;i++)
     visited[i]= false;
     
     for(int j=0;j<V;j++)
    if(visited[j]==false)
     count = DFSUTIL(j,visited,c);
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
                                              DFSUTIL(*i,visited,count);
                                               count++;
                                              }
                                                return count;
     }

int main()
{
    graph g(7);
     g.add_edge(1,2);
    g.add_edge(1,3);
    g.add_edge(3,4);
    g.add_edge(2,4);
    g.add_edge(2,5);
    g.add_edge(10,11);
    g.add_edge(10,1);
     g.add_edge(10,3); 
    g.DFS();
    getch();
}
    
    
    

