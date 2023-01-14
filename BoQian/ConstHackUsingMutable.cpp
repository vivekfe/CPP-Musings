// #include<iostream>
// #include <vector>
// class BigArray{
//   private:
//     std::vector<int> v;  //huge vector
//     mutable int accessCounter;   // by making mutable this can be changed fromn const function
//   public:
//     int getItem(int index) const {
//         accessCounter++;
//         return v[index];
//     }
// };

// int main(){
//     BigArray b;
//     return 0;
// }

// what if c++ does not support mutable

// #include<iostream>
// #include <vector>
// class BigArray{
//   private:
//     std::vector<int> v;  //huge vector
//      int accessCounter;   // by making mutable this can be changed fromn const function
//   public:
//     int getItem(int index) const {
//         const_cast<BigArray*> (this)->accessCounter++ ;  
//         return v[index];
//     }
// };

// int main(){
//     BigArray b;
//     return 0;
// }


#include<iostream>
#include <vector>
class BigArray{
  private:
    std::vector<int> v;  //huge vector
    int accessCounter;   // by making mutable this can be changed fromn const function
    int *v2;
  public:
    int getItem(int index) const {
        const_cast<BigArray*> (this)->accessCounter++ ;  
        return v[index];
    }
  void setV2Item(int index, int x) const  /// this will run even if it seems logical not to, but it works on a bitwise constantness because it did not change any member functions
  {
    *(v2+index)= x;
  }
};

int main(){
    BigArray b;
    return 0;
}
