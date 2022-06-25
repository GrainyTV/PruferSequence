#include <iostream>
#include <vector>
#include <string>

using namespace std;

static int randomnumber(int min, int max)
{
    return min + rand() % ((max + 1) - min);
}

int main()
{
    srand((unsigned int)time(0));
    vector<int> nodes;
    vector<int> in_graph;
    vector<string> lines;
    int length = randomnumber(2, 8);

    printf("Number of indices:\n");
    printf("%d\n", length);
    printf("\n");

    for (int i = 0; i < length; ++i)
    {
        nodes.push_back(i);
    }

    printf("Generation process:\n");

    for (int i = 0; i < length - 1; ++i)
    {
        int n, m;

        if (i == 0)
        {
            n = randomnumber(0, (int)nodes.size() - 1);
            nodes[n] = nodes[nodes.size() - 1];
            nodes.pop_back();

            int random = randomnumber(0, (int)nodes.size() - 1);
            m = nodes[random];
            nodes[random] = nodes[nodes.size() - 1];
            nodes.pop_back();

            in_graph.push_back(n);
            in_graph.push_back(m);
            lines.push_back(to_string(n) + to_string(m));

            printf("%d.) Chosen node: %d, Created edge: --\n", i, n);
            printf("%d.) Chosen node: %d, Created edge: %s\n", i, m, lines[i].c_str());
        }
        else
        {
            n = in_graph[randomnumber(0, (int)in_graph.size() - 1)];
            int random = randomnumber(0, (int)nodes.size() - 1);
            m = nodes[random];
            nodes[random] = nodes[nodes.size() - 1];
            nodes.pop_back();

            in_graph.push_back(m);
            lines.push_back(to_string(n) + to_string(m));

            printf("%d.) Chosen node: %d, Created edge: %s\n", i, m, lines[i].c_str());
        }
    }

    printf("\n");
    printf("Edges in tree:\n");

    for (int i = 0; i < lines.size(); ++i)
    {
        printf("%d.) %s\n", i + 1, lines[i].c_str());
    }

    return 0;
}
