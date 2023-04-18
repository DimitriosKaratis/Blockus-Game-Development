#include <iostream>
#include <cstdlib>

using namespace std;


template <class X> void shuffle(X** myArray, int myArraySize){

    X* temp;

    for(int i=myArraySize-1;i>=1;i--)
    {
        for(int j=0;j<=i;j++)
        {
            temp=myArray[i];
            myArray[i]=myArray[j];
            myArray[j]=temp;
        }
    }

}


template <class X> X* getElementWithMaxScore(X** myArray, int* myArrayScore, int myArraySize){

   int MAX,index;

   MAX = myArrayScore[0];
   index = 0;

   for(int i=0;i<myArraySize;i++)
   {
       if(myArrayScore[i]>MAX)
       {
           MAX = myArrayScore[i];
           index = i;
       }
   }

    return myArray[index];
}
