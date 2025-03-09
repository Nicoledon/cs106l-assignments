#include<memory>
class My_vector {
	public :
	      My_vector(int capacity);
	      My_vector();
              ~My_vector();      
             int getCapacity() const ;
            void setPtr(int value);
	private:
	   int *ptr;
	   int size ;
	   int capacity;
	   int getsize(); 
};
