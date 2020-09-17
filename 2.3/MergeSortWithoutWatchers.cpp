//2.3-2
#include <iostream>

using namespace std;

void Merge(int * tab, int p, int q, int r){
  int n1 = q - p + 1;
  int n2 = r - q;

  int * L = (int*)malloc(sizeof(int) * n1);
  int * R = (int*)malloc(sizeof(int) * n2);

  for(int i = 0;i < n1;i++)
    L[i] = tab[p + i];

  for(int i = 0;i < n2;i++)
    R[i] = tab[q + i + 1];

  int i = 0;
  int j = 0;
  int k = 0;
  for(k = p; k <= r; k++){
    if(L[i] <= R[j]){
      tab[k] = L[i];
      i++;
    }
    else{
      tab[k] = R[j];
      j++;
    }

    if(i > n1 || j > n2)
      break;
  }

  if(i > n1){
    for(k = k;k <= r;k++){
      tab[k] = R[j];
      j++;
    }
  }
  else if(j > n2){
    for(k = k;k <= r;k++){
      tab[k] = L[i];
      i++;
    }
  }
}

void MergeSort(int * tab, int p, int r){
  if(p < r){
    int q = (p+r)/2;
    MergeSort(tab, p,q);
    MergeSort(tab, q + 1, r);
    Merge(tab,p,q,r);
  }
}

int main(){
  int n;
  cin >> n;
  int * tab = (int*)malloc(sizeof(int) * n);
  for(int i = 0;i < n;i++){
    cin >> tab[i];
  }
  MergeSort(tab, 0, n-1);
  for(int i = 0;i < n;i++){
    cout << tab[i] << " ";
  }
  return 0;
}