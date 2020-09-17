//2.3-6
#include <iostream>

using namespace std;

int BinarySearch(int * tab,int p, int r, int value){
  if(p <= r){
    int mid = (p+r)/2;
    if(tab[mid] == value)
      return mid+1;
    else{
      if(tab[mid] > value){
        return BinarySearch(tab,p,mid-1,value);
      }
      else{
        return BinarySearch(tab,mid+1,r,value);
      }
    }
  }
  return p;
}

void InsertionSort(int * tab, int n){
   for(int i = 1;i < n;i++){
    int j = i-1;
    int key = tab[i];
    int pos = BinarySearch(tab, 0, i-1, key);
    while(j >= pos){
      tab[j+1] = tab[j];
      j--;
    }
    tab[pos] = key;
  }
}

int main(){
  int n;
  cin >> n;
  int * tab = (int*)malloc(sizeof(int) * n);
  for(int i = 0;i < n;i++){
    cin >> tab[i];
  }

  InsertionSort(tab,n);
  
  for(int i = 0;i < n;i++){
    cout << tab[i]<<" ";
  }
  cout << endl;

  return 0;
}