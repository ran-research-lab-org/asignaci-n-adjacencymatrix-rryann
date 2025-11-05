#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0,9);
  G.addEdge(4, 2);
  G.addEdge(2, 4);

  G.print();
  cout << "\nNum de aristas: " << G.numEdges() << endl;

  cout << "In-degree de " << 4 << ": " << G.inDegree(4) << endl;

  cout << "Is " << 2 << " influencer: " << G.isInfluencer(2) << endl;

  return 0;
}
