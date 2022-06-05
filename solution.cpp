#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol200;
using namespace std;

/*takeaways
  - we borrow the original grid to server as the data
    structure to record which node has been visited
    by changing it to water
  - use DFS to visit the connected nodes
*/

int Solution::numIslands(vector<vector<char>> &grid)
{
  int n = grid.size(), m = grid[0].size();
  auto result = 0;

  for (auto i = 0; i < n; i++)
    for (auto j = 0; j < m; j++)
      /* lands will be marked as water if there
         are connected to grid[i][j] (assume
         grid[i][j] is a land too
         )
      */
      result += (grid[i][j] - '0'),
          _visit(j, i, grid);

  return result;
}

void Solution::_visit(int x, int y, vector<vector<char>> &grid)
{
  /* x is the col, and y is the row */
  /* check if everything is within bound */
  int n = grid.size(), m = grid[0].size();
  if (x < 0 || y < 0 || x >= m || y >= n)
    return;

  if (grid[y][x] == '0')
    return;

  grid[y][x] = '0';

  /* visit neighbors in four directions */
  _visit(x, y - 1, grid);
  _visit(x, y + 1, grid);
  _visit(x - 1, y, grid);
  _visit(x + 1, y, grid);
}
