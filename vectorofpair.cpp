// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<pair<int, int>> pr = {
//         {1, 20},
//         {2, 10},
//         {3, 30}
//     };

//     // Sort in decreasing order of the second value
//     sort(pr.begin(), pr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
//         return a.second > b.second;
//     });

//     // Print sorted pairs
//     for (const auto& p : pr) {
//         cout << p.first << " " << p.second << endl;
//     }

//     return 0;
// }
// 3 30
// 1 20
// 2 10

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<pair<int, int>> pr = {
//         {1, 20},
//         {2, 10},
//         {3, 30}
//     };

//     // Sort in decreasing order of the first value
//     sort(pr.begin(), pr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
//         return a.first > b.first;
//     });

//     // Print sorted pairs
//     for (const auto& p : pr) {
//         cout << p.first << " " << p.second << endl;
//     }

//     return 0;
// }
// 3 30
// 2 10
// 1 20
