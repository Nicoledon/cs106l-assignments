#include"class.h"
   My_vector::My_vector(int capacity){
              ptr = new int(capacity);
              size = 0 ;
              this ->capacity = capacity;

      }
    My_vector::My_vector(){
	    ptr  = new int (8);
	    size =0 ;
	    this -> capacity = capacity;
    }
    My_vector::~My_vector(){
             size = 0;
             capacity = 0;
             delete []ptr;
    }
    int My_vector::getCapacity() const {
         return capacity;   
    }
    void My_vector::setPtr(int value){
           ptr[size++] = value;  
    }
    int My_vector::getsize(){
	    return size ;
    }
