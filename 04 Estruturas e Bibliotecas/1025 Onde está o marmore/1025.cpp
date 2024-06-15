# include <iostream>

using namespace std;

void quick_sort(int arr[], int left, int right) {
  int i = left, j = right;
  int pivot = arr[(left + right) / 2];

  while (i <= j) {
    while (arr[i] < pivot) i++;
    while (arr[j] > pivot) j--;
    if (i <= j) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }

  if (left < j) quick_sort(arr, left, j);
  if (i < right) quick_sort(arr, i, right);
}

int binary_search_first(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            if (mid == 0 || arr[mid - 1] < x) {
                return mid;
            } else {
                return binary_search_first(arr, l, mid - 1, x);
            }
        } else if (arr[mid] > x) {
            return binary_search_first(arr, l, mid - 1, x);
        } else {
            return binary_search_first(arr, mid + 1, r, x);
        }
    }
    return -1;
}

int main(){
  int vector[10000], N, Q, X, cases = 1;
  cin >> N >> Q;
  while (N != 0 or Q != 0){
    for (int i = 0; i < N; i++){
      int num;
      cin >> num;
      vector[i] = num;
    }

    quick_sort(vector, 0, N - 1);
    int buscas[Q];
    for (int i = 0; i < Q; i++){
      cin >> buscas[i];
    }

    cout << "CASE# " << cases << ":" << endl;
    for (int i = 0; i < Q; i++){
      int index = binary_search_first(vector, 0, N-1, buscas[i]);
      if (index == -1) cout << buscas[i] << " not found" << endl;
      else cout << buscas[i] << " found at " << index+1 << endl;
    }

    cin >> N >> Q;
    cases += 1;
  }

}

// https://www.beecrowd.com.br/judge/pt/problems/view/1025
// Ranking 03021º, Time 0.517, Submiss Date 17/04/2023 08:36:30 (C++17)