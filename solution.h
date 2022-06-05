
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol200
{

  class Solution
  {
  private:
    void _visit(int x, int y, vector<vector<char>> &grid);

  public:
    int numIslands(vector<vector<char>> &grid);
  };
}
#endif