import java.lang.reflect.Array;
import java.util.*;

public class Graph {
    class Edge implements Comparable {
        public int begin;
        public int end;
        public int weight;

        Edge(int begin, int end, int weight) {
            this.begin = begin;
            this.end = end;
            this.weight = weight;
        }

        ;

        @Override
        public int compareTo(Object edge) {
            return this.weight < ((Edge) edge).weight ? -1 : 1;
        }

    }

    private int V;
    private int E;
    private LinkedList<Node>[] adj;
    private Integer[][] adjMatrix;
    private Boolean[] mark;
    private int[] edgeBelong;


    Graph(int V, int E) {
        this.V = V;
        this.E = E;
        adj = (LinkedList<Node>[]) new LinkedList[V];
        mark = new Boolean[V];
        adjMatrix = new Integer[V][V];
        edgeBelong = new int[V];
        for (int i = 0; i < V; i++)
            adj[i] = new LinkedList<Node>();

        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                adjMatrix[i][j] = Integer.MAX_VALUE;

        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < E; i++) {
            int begin = scanner.nextInt();
            int end = scanner.nextInt();
            int weight = scanner.nextInt();
            adjMatrix[begin][end] = weight;
            adjMatrix[end][begin] = weight;

        }
    }

    public void bfsTraversal(int begin) {
        for (int i = 0; i < V; i++) {
            mark[i] = false;
        }
        Queue queue = new LinkedList();
        mark[begin] = true;
        queue.add(begin);
        while (queue.peek() != null) {
            int v = (int) queue.remove();
            System.out.print(v);
            for (int i = 0; i < V; i++) {
                if (adjMatrix[v][i] == 0) continue;
                if (!mark[i]) {
                    mark[i] = true;
                    queue.add(i);
                }
            }
        }
        System.out.println();
    }

    public void dfsTraversal(int begin) {
        for (int i = 0; i < V; i++) {
            mark[i] = false;
        }
        mark[begin] = true;
        Stack stack = new Stack();
        stack.push(begin);
        while (!stack.empty()) {
            int v = (int) stack.pop();
            System.out.print(v);
            for (int i = 0; i < V; i++) {
                if (adjMatrix[v][i] == 0) continue;
                if (!mark[i]) {
                    mark[i] = true;
                    stack.push(i);
                }
            }
        }
        System.out.println();
    }


    public void prim() {
        int[] lowcost = new int[V];
        int[] mst = new int[V];
        int sum = 0;
        for (int i = 0; i < V; i++) {
            mark[i] = false;
        }
        mark[0] = true;

        for (int i = 0; i < V; i++) {
            lowcost[i] = adjMatrix[0][i];
            mst[i] = 0;
        }

        for (int i = 0; i < V; i++) {
            int min = Integer.MAX_VALUE;
            int minId = 0;

            for (int j = 1; j < V; j++) {
                if (lowcost[j] < min && !mark[j]) {
                    min = lowcost[j];
                    minId = j;
                }
            }

            if (minId == 0) continue;

            System.out.println("V" + mst[minId] + "-V" + minId + "=" + min);
            sum += min;
            mark[minId] = true;

            for (int k = 1; k < V; k++) {
                if (adjMatrix[minId][k] < lowcost[k]) {
                    lowcost[k] = adjMatrix[minId][k];
                    mst[k] = minId;
                }
            }
        }

        System.out.println("sum = " + sum);
    }

    public int find(int x) {
        if (x != edgeBelong[x])
            x = find(edgeBelong[x]);
        return edgeBelong[x];
    }

    public void merge(int x, int y) {
        int a = find(x);
        int b = find(y);
        if (a != b)
            edgeBelong[b] = a;
    }

    public void kruskal() {
        List<Edge> edges = new LinkedList<Edge>();
        int sum = 0;
        for (int i = 0; i < V; i++)
            for (int j = i; j < V; j++) {
                if (adjMatrix[i][j] != Integer.MAX_VALUE)
                    edges.add(new Edge(i, j, adjMatrix[i][j]));
            }
        Collections.sort(edges);
        for (int i = 0; i < V; i++)
            edgeBelong[i] = i;
        for (int i = 0; i < edges.size(); i++) {
            int begin = edges.get(i).begin;
            int end = edges.get(i).end;
            if (find(begin) != find(end)) {
                merge(begin, end);
                System.out.println(begin + " -> " + end);
                sum += edges.get(i).weight;
            }
        }

        for (int i = 0; i < edgeBelong.length - 1; i++) {
            if (find(edgeBelong[i]) != find(edgeBelong[i + 1])) {
                System.out.println("NOT A TREE");
                return;
            }
        }
        System.out.println("sum = " + sum);
    }

    public void dijkstra(int begin, int end) {
        int[] lowcost = new int[V];
        int[] pathTo = new int[V+1];
        for (int i = 0; i < V; i++) {
            mark[i] = false;
            lowcost[i] = adjMatrix[begin][i];
            pathTo[i]=begin;
        }
        mark[begin] = true;
        for (int i = 0; i < V; i++) {
            int min = Integer.MAX_VALUE, minId = begin;
            for (int j = 0; j < V; j++)
                if (!mark[j] && lowcost[j] < min) {
                    min = lowcost[j];
                    minId = j;
                }

            mark[minId] = true;

            for (int k = 1; k < V; k++) {
                if (!mark[k] && adjMatrix[minId][k]!=Integer.MAX_VALUE && lowcost[k]>min + adjMatrix[minId][k]) {
                    lowcost[k] = min + adjMatrix[minId][k];
                    pathTo[k]=minId;
                }
            }
        }
        Stack<Integer> stack = new Stack<Integer>();
        stack.push(end);
        for(int i=end; pathTo[i]!=begin;i=pathTo[i])
            stack.push(pathTo[i]);
        System.out.print(begin);
        while (!stack.empty())
            System.out.print(" -> "+stack.pop());
        System.out.println();
        System.out.println(lowcost[end]);
    }

}
