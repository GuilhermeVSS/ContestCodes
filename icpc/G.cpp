// C++ implementation of the approach
#include <bits/stdc++.h>
#define llu long long int
#define x first
#define y second
using namespace std;


// struct Point {
 
//     llu x, y;
 
//     bool operator<(Point p)
//     {
//         return x < p.x || (x == p.x && y < p.y);
//     }
// };

typedef pair<int, int> Point;

vector<Point> points;
map<Point, int> mapPoint;
 
// Cross product of two vectors OA and OB
// returns positive for counter clockwise
// turn and negative for clockwise turn
llu cross_product(Point O, Point A, Point B)
{
    return (A.x - O.x) * (B.y - O.y)
           - (A.y - O.y) * (B.x - O.x);
}
 
// Returns a list of points on the convex hull
// in counter-clockwise order
vector<Point> convex_hull(vector<Point> A)
{
    int n = A.size(), k = 0;
 
    if (n <= 3)
        return A;
 
    vector<Point> ans(2 * n);
 
    // Sort points lexicographically
    sort(A.begin(), A.end());
 
    // Build lower hull
    for (int i = 0; i < n; ++i) {
 
        // If the point at K-1 position is not a part
        // of hull as vector from ans[k-2] to ans[k-1]
        // and ans[k-2] to A[i] has a clockwise turn
		// cout<<"lower A[i]: ("<<A[i].x<<","<<A[i].y<<")"<<endl;
        while (
            k >= 2
            && cross_product(ans[k - 2], ans[k - 1], A[i])
                   < 0){
					// cout<<"Cross:"<<"("<<ans[k-2].x<<","<<ans[k-2].y<<"), "<<"("<<ans[k-1].x<<","<<ans[1-2].y<<")"<<"("<<A[i].x<<","<<A[i].y<<")"<<"="<<cross_product(ans[k - 2], ans[k - 1], A[i])<<endl;
            k--;
				   }
        ans[k++] = A[i];
		// for(auto w : ans){
		// 	cout<<w.x<<","<<w.y<<endl;
		// }
    }
 
    // Build upper hull
    for (size_t i = n - 1, t = k + 1; i > 0; --i) {
 
        // If the point at K-1 position is not a part
        // of hull as vector from ans[k-2] to ans[k-1]
        // and ans[k-2] to A[i] has a clockwise turn
		cout<<"upper A[i]: ("<<A[i].x<<","<<A[i].y<<")"<<endl;
        while (k >= t
               && cross_product(ans[k - 2], ans[k - 1],
                                A[i - 1])
                      < 0){
//cout<<"Cross:"<<"("<<ans[k-2].x<<","<<ans[k-2].y<<"), "<<"("<<ans[k-1].x<<","<<ans[1-2].y<<")"<<"("<<A[i].x<<","<<A[i].y<<")"<<"="<<cross_product(ans[k - 2], ans[k - 1], A[i])<<endl;
            			k--;
					  }
        ans[k++] = A[i - 1];
		// for(auto w : ans){
		// 	cout<<w.x<<","<<w.y<<endl;
		// }
    }
 
    // Resize the array to desired size
    ans.resize(k - 1);
 
    return ans;
}
 
// Driver code
// int main()
// {
//     vector<Point> points;
 
//     // Add points
//     points.push_back({ 3, 2 });
//     points.push_back({ 1, 5 });
//     points.push_back({ 3, 6 });
//     points.push_back({ 3, 5 });
// 	// points.push_back({ 1, 2 });
//     // points.push_back({ 4, 2 });
//     // points.push_back({ 1, 6 });
//     // points.push_back({ 4, 6 });
//     // points.push_back({ 3, 0 });
//     // points.push_back({ 0, 0 });
//     // points.push_back({ 3, 3 });
 
//     // Find the convex hull
//     vector<Point> ans = convex_hull(points);
 
//     // Print the convex hull
//     for (int i = 0; i < ans.size(); i++)
//         cout << "(" << ans[i].x << ", " << ans[i].y << ")"
//              << endl;
 
//     return 0;
// }


int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        points.push_back({a, b});
        mapPoint[{a, b}] = i;
    }

	for(auto w: points){
        //cout<<mapPoint[make_pair(w.x, w.y)]<<" ";
		cout<<w.x<<" "<<w.y<<endl;
    }
	vector<Point> convex = convex_hull(points);
    for(auto w: convex){
        cout<<mapPoint[make_pair(w.x, w.y)]<<" ";
		//cout<<w.x<<" "<<w.y<<endl;
    }

    return 0;
}