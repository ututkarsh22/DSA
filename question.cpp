 #include<bits/stdc++.h>
 using namespace std;

 class ListNode{

    public:
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
 };
 
 void printll(ListNode* head){

    ListNode* tail=head;
    while(tail)
    {
        cout<<tail->val<<" ";
        tail=tail->next;
    }
    cout<<endl;
 }
 ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> hold;
        ListNode* temp=head;
        while(temp)
        {
            hold.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
       int j=i+k-1;
        while(i<hold.size() && j<hold.size()-1)
        {
            
            while(i<j)
            {
                swap(hold[i++],hold[j--]);
            }
            i=i+(k-i);
            j=i+k-1;
        }

        temp=head;
        for(int i=0;i<hold.size();i++)
        {
            temp->val=hold[i];
            temp=temp->next;
        }
    return head;        
}

int main()
{
        ListNode* head=new ListNode(2);
        int arr[6]={3,4,5,6,3,6};

        for(int i=0;i<6;i++)
        {
            ListNode* temp= new ListNode(arr[i]);
            temp->next=head;
            head=temp;
        }
        
        printll(head);
        head=reverseKGroup(head,2);

       printll(head);

        return 0;
}