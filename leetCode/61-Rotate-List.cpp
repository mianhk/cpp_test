#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


// Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
//	ListNode* rotateRight2(ListNode* head, int k) {
//		if(head==NULL||k==0)
//			return head;
//		ListNode *newH,*newHead,*pHead;
//		newH=pHead=head;
//		int len=1;
//		while()
//	}
	ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL||k==0)
           return head;
        ListNode* newH,*newHead,*pHead;
        newH=pHead=head;
        int len=0;
        while(pHead->next!=NULL){
            pHead=pHead->next;
            len++; 
            if(len>k){
            	break;
			}
			cout<<"test"<<endl;	
        }
        if(len<=k)
        	return head;
        
        if(pHead->next==NULL){
        	cout<<pHead->val<<" "<<head->val<<" "<<endl;
        	newHead=pHead;
        	pHead->next=head;
        	head->next=NULL;
        	return newHead;
		}
        
        cout<<newH->val<<endl;
        newH=pHead->next;
        
        newHead=newH;
        pHead->next=NULL;
        while(newH->next!=NULL){
            newH=newH->next;
        }
        newH->next=head;
        return newHead;
    }
    ListNode* rotateRight1(ListNode* head, int k) {
        ListNode* phead=head;
        cout<<head->val<<endl;
        ListNode* pheadtemp=head;
        while(head->next){
        	cout<<"test"<<endl;
        	k--;
            if(k)
                head=head->next;
            else{
                phead=(head->next);
                head->next=NULL;
                break;
            }
        }
        while((phead)->next!=NULL){
            phead=(phead)->next;
        }
        (phead)->next=pheadtemp;
        return phead;
    }
};
int main(){
	Solution solution;
	ListNode* head=new ListNode(1);
	ListNode* phead=head;
//	ListNode temp1=head;
	for(int i=2;i<3;++i){
		ListNode *p=new ListNode(i);
		head->next=p;
		head=head->next;
//		temp1.next=&temp;
//		temp1=temp;
//		head=&head.next;
	}
	
	cout<<"kaishi"<<endl;
//	while(phead->next!=NULL){
//		cout<<phead->val<<endl;
//		phead=phead->next;
//	}

	
	ListNode* res=solution.rotateRight(phead,1);
//	res=;
	while(res->next!=NULL){
		cout<<res->val<<" ";
		res=res->next;
	}
	cout<<res->val<<" ";
	cout<<endl;
	return 0;
}

