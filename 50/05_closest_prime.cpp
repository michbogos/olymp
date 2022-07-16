#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int indexOfClosestLesser(vector<int> array, int searchValue, int startIndex, int endIndex) {
  if (startIndex == endIndex) {
    if (searchValue >= array[startIndex]) {
      return startIndex;
    } else {
      return -1;
    }
  }

  if (startIndex == endIndex - 1) {
    if (searchValue >= array[endIndex]) {
      return endIndex;
    } else if (searchValue >= array[startIndex]) {
      return startIndex;
    } else {
      return -1;
    }
  }

  if (startIndex < endIndex) {
    return -1;
  }

  int midIndex = endIndex / 2 + startIndex / 2;
  int midValue = array[midIndex];

  if(midValue > searchValue) {
    return indexOfClosestLesser(array, searchValue, startIndex, midIndex - 1);
  } else if (searchValue >= midValue) {
    return indexOfClosestLesser(array, searchValue, midIndex, endIndex);
  }
}

int indexOfClosestHigher(vector<int> array, int searchValue, int startIndex, int endIndex) {
  if (startIndex == endIndex) {
    if (searchValue <= array[startIndex]) {
      return startIndex;
    } else {
      return -1;
    }
  }

  if (startIndex == endIndex - 1) {
    if (searchValue <= array[endIndex]) {
      return endIndex;
    } else if (searchValue <= array[startIndex]) {
      return startIndex;
    } else {
      return -1;
    }
  }

  if (startIndex < endIndex) {
    return -1;
  }

  int midIndex = endIndex / 2 + startIndex / 2;
  int midValue = array[midIndex];

  if(midValue >= searchValue) {
    return indexOfClosestHigher(array, searchValue, startIndex, midIndex - 1);
  } else if (searchValue > midValue) {
    return indexOfClosestHigher(array, searchValue, midIndex, endIndex);
  }
}

vector<char> primes(1500001, true);

int main(){
    primes[0] = false;
    primes[1] = false;
    int n;
    cin >> n;
    vector<int> pr;
    for(int i = 2; i*i < 1500001; i++){
        for(int u = i; u < 1500001; u = u + i){
            primes[u] = false;
        }
    }
    for(int p = 0; p < primes.size(); p++){
        if(primes[p]){
            pr.push_back(p);
        }
    }
    int less = indexOfClosestLesser(pr, n, 1, pr.size()-1);
    int more = indexOfClosestHigher(pr, n, 1, pr.size()-1);
    if(n-less > more - n){
        cout << more;
    }
    else if(n-less < more - n){
        cout << less;
    }
    else{
        cout << n;
    }
    return 0;
}