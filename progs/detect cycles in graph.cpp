#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<list>
using namespace std;

class graph
{
     list <int> *adj;
      int V;
      bool iscyclicdetect(int s,bool arr[],bool arr1[]);
             
      public:
             void addEdge(int v,int w);
             graph(int V);
             bool iscyclic();
             
      };

graph::graph(int V)
{
                 this->V = V;
                 adj = new list <int>[V];
                 }

void graph::addEdge(int v,int w)
{
     adj[v].push_back(w);
          }

bool graph::iscyclic()
{
     bool *visited =  new bool[V];
     bool *rstack = new bool[V];
     
     for(int i=0;i<V;i++)
     {
             visited[i] = false;
             rstack[i] = false;
             }
     for(int j=0;j<V;j++)
     {
             if(iscyclicdetect(j,visited,rstack))
             return true;
             }
             return false;
     
     
     }

bool graph::iscyclicdetect(int k,bool visited[],bool rstack[])
{
     if(visited[k] ==false)
     {
                   visited[k] = true;
                   rstack[k] = true;
                   
                   list <int>:: iterator i;
                   
                   for(i=adj[k].begin();i!= adj[k].end();i++)
                   {
                                
                                if(!visited[*i] && iscyclicdetect(*i,visited,rstack))
                                return true;
                                else if(rstack[*i])
                                return true;
                                
                                            
                                            }
                
                
                }
     rstack[k]=false;
     return false;
     }
          
          
int main()
{
    graph g(4);
     g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    if(g.iscyclic())
       printf( "Graph contains cycle");
    else
        printf( "Graph doesn't contain cycle");
    getch();
}

    
    

