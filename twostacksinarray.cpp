class twoStacks {
  public:
 stack<int>st1,st2;
        int arr[100];
        int l,r;
    twoStacks() {
       
         l=0;
         r=99;
        
    }

   
    void push1(int x) {
        if(l<=r){
        arr[l]=x;
        l++;
        }
        
        
    }

   
    void push2(int x) {
        if(l<=r){
        arr[r]=x;
        r--;
        }
    }

  
    int pop1() {
        if(l>0){
        l--;
        int curr=arr[l];
        return curr;
        }else return -1;
    }

   
    int pop2() {
        if(r<99){
        r++;
        int curr=arr[r];
        return curr;}else return -1;
    }
};
