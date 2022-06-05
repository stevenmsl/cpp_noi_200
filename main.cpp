#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol200;

/*
Input:
11110
11010
11000
00000

Output: 1
*/

tuple<vector<vector<char>>, int>
testFixture1()
{
  auto input = vector<vector<char>>{
      {'1', '1', '1', '1', '0'},
      {'1', '1', '0', '1', '0'},
      {'1', '1', '0', '0', '0'},
      {'0', '0', '0', '0', '0'}};

  return make_tuple(input, 1);
}

/*
Input:
11000
11000
00100
00011

Output: 3
*/

tuple<vector<vector<char>>, int>
testFixture2()
{
  auto input = vector<vector<char>>{
      {'1', '1', '0', '0', '0'},
      {'1', '1', '0', '0', '0'},
      {'0', '0', '1', '0', '0'},
      {'0', '0', '0', '1', '1'},
  };

  return make_tuple(input, 3);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;

  cout << "Expect to see : " << get<1>(f) << endl;
  cout << sol.numIslands(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;

  cout << "Expect to see : " << get<1>(f) << endl;
  cout << sol.numIslands(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}