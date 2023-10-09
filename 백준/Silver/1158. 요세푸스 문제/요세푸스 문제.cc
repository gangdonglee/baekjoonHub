#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int n,k;
  cin >> n >> k; 
  vector <int> V, ans;
  for (int i = 1; i <= n; i++)
    V.push_back(i);

  for (int i = 0; ans.size() < n; i++){ //정답벡터에 n개의 원소가 쌓이면 종료
    if(i % k == k-1) ans.push_back(V[i]); // k번째 사람일 때 
    else V.push_back(V[i]);
  }

  cout << "<";
  for(int i = 0; i < n; i++){
    if(i == n-1) cout << ans[i]; //마지막 요소는 콤마 없이 출력
    else cout << ans[i] << ", ";
  }
  cout << ">";
}
  