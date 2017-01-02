#include<iostream>
#include<list>
using namespace std;

class dfs{
	int V;
	list<int> *adj;
	
	public:
		dfs(int Val);
		//void dfsfunc();
		void dfsfunc(int );
		void dfsutil(int v,bool visited[]);
		void add_edge(int,int);
		
	
};

dfs::dfs(int Val){
	this->V=Val;
	adj= new list<int>[V];
	}

void dfs::add_edge(int v,int w){
	adj[v].push_back(w);
}

void dfs::dfsutil(int v,bool visited[]){
	visited[v] = true;
	cout<<v<<" ";
	
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end(); i++){
		if(!visited[*i])
		dfsutil(*i,visited);
	}
}

/*
void dfs::dfsfunc(){
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
	visited[i] = false;
	
	for(int i=0;i<V;i++){
		if(visited[i]==false)
		dfsutil(i,visited);
	}
}
*/

void dfs::dfsfunc(int start){
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
	visited[i] = false;
	
	
		dfsutil(start,visited);
}



int main()
{
	dfs d(4);
	d.add_edge(0,1);
	d.add_edge(0,2);
	d.add_edge(1,2);
	d.add_edge(2,0);
	d.add_edge(2,3);
	d.add_edge(3,3);
	
	d.dfsfunc(2);
	return 0;
}
