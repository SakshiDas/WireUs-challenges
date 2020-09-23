#include<iostream>
using namespace std;

int MAXSIZE = 10;
int top = -1;
int st[10] ;


bool isempty() {
   if(top == -1)
      return true;
   else
      return false;
}

int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}
void push(int data) {
   if(!isfull()) {
      top = top + 1;
      st[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int pop() {
   int data;

   if(!isempty()) {
      data = st[top];
      top = top - 1;
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int main(){
    int hist[] = {6,2,5,4,5,1,6};
    int temp;
    int n = sizeof(hist)/sizeof(hist[0]);


    int max_area = 0;
    int tp;
    int area_with_top;


    int i = 0;
    while (i < n)
    {
        if (isempty() || hist[top] <= hist[i])
            push(i++);


        else
        {
            tp = top;
            int de = pop();

            area_with_top = hist[tp] * (isempty() ? i : i - top - 1);


            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }


    while (isempty() == false)
    {
        tp = top;
        pop();
        area_with_top = hist[tp] * (isempty() ? i : i - top - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    cout<< max_area;

    return 0;

}


