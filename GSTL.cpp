#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
using namespace std;






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                      // **  Singly Linear Linked list  ** //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T1>
struct node1
{
    T1 data;
    struct node1 * next;
};


template <class T1>
class SinglyLL
{
   private:
     node1 <T1> * first;
     int size;

   public:
      SinglyLL();
     void InsertFirst(T1);
     void InsertLast(T1);
     void InsertAtPos(T1,int);
     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int);
     void Display();
     int  Count();
     int SearchFirstOcc(T1);
     int SearchLastOcc(T1);
     T1 Addition();
     T1 Maximum();
     T1 Minimum();
 
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                     //  **   Singly Cicular Linked list **  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T2>
struct node2
{
    T2 data;
    struct node2 * next;
};

template <class T2>
class ScircularLL
{
    private:
         node2 <T2> * Head;
         node2 <T2> * Tail;
         int size;

    public:
         ScircularLL();
         void InsertFirst(T2);
         void InsertLast(T2);
         void InsertAtPos(T2,int);
         void DeleteFirst();
         void DeleteLast();
         void DeleteAtPos(int);
         void Display();
         int  Count();
         int SearchFirstOcc(T2);
         int SearchLastOcc(T2);
         T2 Addition();
         T2 Maximum();
         T2 Minimum();
         
        
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                      //    Doubly Linear Linked list //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <typename T3>
struct node
{
    T3 data;
    struct node *next;
    struct node *prev;
};

template <class T3>
class DoublyLL
{
    private:
         node <T3> * first;
         int  size;

    public:
     DoublyLL();
     void InsertFirst(T3);
     void InsertLast(T3);
     void InsertAtPos(T3,int);
     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int);
     void Display();
     int  Count();
     int SearchFirstOcc(T3);
     int SearchLastOcc(T3);
     T3 Addition();
     T3 Maximum();
     T3 Minimum();

       

};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                      //    Doubly Circular Linked list  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T4>
struct node4
{
     T4 data;
     struct node4 *next;
     struct node4 *prev;
};


template <class T4>
class DcircularLL
{
   private :
         node4 <T4> * Head;
         node4 <T4> * Tail;
         int size;

    public:
          DcircularLL();
          void InsertFirst(T4); 
          void InsertLast(T4);
          void InsertAtPos(T4,int);
          void DeleteFirst();
          void DeleteLast();
          void DeleteAtPos(int);
          void Display();
          int Count(); 
          int SearchFirstOcc(T4);
         int SearchLastOcc(T4);
         T4 Addition();
         T4 Maximum();
         T4 Minimum();
}; 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                          ///   Stack  ///                                                                         
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T5>
struct node5
{
    T5 data;
    struct node5 * next;
};

template <class T5>
class Stack
{
    private:
        node5 <T5> * first;
        int size;

    public:
        Stack();
        void push(T5);
        T5  pop();
        void Display();
        int Count();
};
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                   //  Queue //                                                                        
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T6>
struct node6
{
    T6 data;
    struct node6 * next;
};


template <class T6>
class Queue
{
    private:
        node6 <T6> * first;
        int size;

    public:
        Queue();
        void EnQueue(T6);
        T6 Dqueue();
        void Display();
        int Count();
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                   //  Binary Serach Tree //                                                                        
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <typename T7>
struct node7 
{
   int data;
   struct node7 * right;
   struct node7 * left;
};

template <class T7>
class BST
{
   private:
      node7 <T7> * first;
      int size;

   public:
       
       BST();
       void Insert(T7);
       bool Search(T7);
       void PreOrder();
       void InOrder();
       void PostOrder();
       int Count();
       int CountParent();
       int CountLeaf();
       int GFfrequency(int);

    private :
        void PreOrderF(node7 <T7>*);
        void InOrderF(node7 <T7>*);
        void PostOrderF(node7 <T7>*);
        int CountF(node7 <T7>*);
        int CountParentf(node7 <T7>*);
        int CountLeaff(node7 <T7>*);
        int GFfrequencyf(node7 <T7>*,int);
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                      //   Sorting and  Searching class    //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T8>
class ArrayX
{
    public:
      T8 * Arr;
      int size;

     public:
      ArrayX(int);
      void Accept();
      void Display();
};

template <class T8>
class Sorting 
{
    private :
    T8 *Arr;
    int size;

    public:
     Sorting(T8*,int);
     void BubbleSort();
     void SelectionSort();
     void InsertionSort();
   
};


template <class T8>
class Searching 
{
   public:
    T8 * Arr;
    int size;

    public : 
    Searching(T8 * , int);
    int LinearSearch(T8);
    int BinarySearch(T8);
  
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                      //    Singly Linear Linked list Functions    //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  template <class T1>
  SinglyLL <T1> :: SinglyLL()
    {
        first=NULL;
        size=0;
    }  

    template <class T1>  
    void SinglyLL <T1> :: InsertFirst(T1 No)
    {
      node1 <T1> * newn=new node1 <T1>;
      
      newn->data=No;
      newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else
      {
          newn->next=first;
          first=newn;
      }
      size++;
    }

    template <class T1>
    void SinglyLL <T1> :: InsertLast(T1 No)
    {
       node1 <T1> * newn=new node1 <T1>;

        newn->data=No;
        newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else
      {
         node1 <T1> * temp = first;
         
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newn;
      }
      size++;

    }

    template <class T1>
    void SinglyLL <T1> :: InsertAtPos(T1 No,int pos)
    {
       if( (pos < 1) || (pos > (size +1)) )
       {
           return;
       }  

       if(pos==1)
       {
           InsertFirst(No);
       }
       else if(pos==(size+1))
       {
           InsertLast(No);
       }
       else
       {
           node1 <T1> * newn=new node1 <T1>;
           newn->data=No;
           newn->next=NULL;

           node1 <T1> * temp = first;
           int i=1;
           while(i!=(pos-1))
           { 
              i++;
              temp=temp->next;
           }
           newn->next=temp->next;
           temp->next=newn;
           size++;

       }

    }

    template <class T1>
    void SinglyLL <T1> :: DeleteFirst()
    {
       node1 <T1> * temp=first;

        if(first!=NULL)
        {
            if((first->next)==NULL)
            {
                  delete (first);
                  first=NULL;
            }
            else
            {
                 first=first->next;
                 delete temp;
                 size--;

            }
            
        }
        else
        {
            return;
        }
    }

    template <class T1>
    void SinglyLL <T1> :: DeleteLast()
    {
       node1 <T1> * temp=first;

      if(first!=NULL)
      {
         if(first->next==NULL)
         {
             delete first;
             first=NULL;
             size--;
         }
         else
         {
             int i=1;
             while(i!=(size-1))
             {
               i++;
               temp=temp->next;
             }
             delete(temp->next);
             temp->next=NULL;
             size--;
         }
      }
      else
      {
          return;
      }
    }

    template <class T1>
    void SinglyLL <T1> :: DeleteAtPos(int pos)
    {
        if( (pos < 1) || (pos > (size+1)) )
        {
            return;
        }

        if(pos==1)
        {
            DeleteFirst();
        }
        else if (pos==size)
        {
            DeleteLast();
        }
        else
        {
             node1 <T1> * temp=first;
             node1 <T1> * target=NULL;
            int i=1;
            while(i!=(pos-1))
            {
               i++;
               temp=temp->next;
            }
             target=temp->next;
             temp->next=target->next;
             delete(target);
             size--;
        }
        

    }

    template <class T1>
    void SinglyLL <T1> :: Display()
    {
        if(first==NULL)
        {
            cout<<"Linked list is empty\n";
        }
       else
       {
           node1 <T1> * temp =first;

              while (temp!=NULL)
             {
                 cout<<"|"<<temp->data<<"|->";
                 temp=temp->next;
              }
                 cout<<"NULL\n";
       }
       
    }

    template <class T1>
    int SinglyLL <T1> :: Count()
    {
       return size;
    }

    template <class T1> 
    int SinglyLL <T1> :: SearchFirstOcc(T1 No)
    {
        if(first!=NULL)
        {
             node1 <T1> * temp =first;
             int icnt=1;
             while (temp!=NULL)
             {
           
                 if((temp->data)==No)
                 {
                   break;
                 } 
                 icnt++; 
                 temp=temp->next;
             } 

             if(icnt > (size+1)) 
             {
                 return 0;
             } 
             else
             {
                 return icnt;
             }
            
        }
        else
        {
            return -1;
        }

    }

    template <class T1> 
    int SinglyLL <T1> :: SearchLastOcc(T1 No)
    {
        if(first!=NULL)
        {
             node1 <T1> * temp =first;
             int icnt=1,i=0;;
             while (temp!=NULL)
             {
                 if((temp->data)==No)
                 {
                    i=icnt;
                 } 
                 icnt++; 
                 temp=temp->next;
             } 

             if(i==0) 
             { 
                 return 0;
              } 
             else
             {
                 return i;
             }
        }
        else
        {
            return -1;
        }
    }

    template <class T1>
    T1 SinglyLL <T1> :: Addition()
    {
        node1 <T1> * temp =first;
        T1 iAdd;
       while (temp!=NULL)
       {
           iAdd=iAdd+(temp->data);
           temp=temp->next;
       }
       return iAdd;
    }

    template <class T1>
    T1 SinglyLL <T1> :: Maximum()
    {
        node1 <T1> * temp =first;
        T1 iMax=temp->data;
       while (temp!=NULL)
       {
           if(iMax < (temp->data))
           {
               iMax=(temp->data);
           }
           temp=temp->next;
       }
       return iMax; 
    }

    template <class T1>
    T1 SinglyLL <T1> :: Minimum()
    {
         node1 <T1> * temp =first;
         T1 iMin=temp->data;
       while (temp!=NULL)
       {
           if(iMin > (temp->data))
           {
               iMin=(temp->data);
           }
           temp=temp->next;
       }
       return iMin;
    }


 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                 //         Singly Circular Linked list functions   //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 template <class T2>
        ScircularLL <T2> :: ScircularLL()
         {
             Head=NULL;
             Tail=NULL;
             size=0;
         }   

         template <class T2>
         void ScircularLL <T2> :: InsertFirst(T2 No)
         {
             node2 <T2> * newn =new node2 <T2>;
             newn->data=No;
             newn->next=NULL;

             if((Head==NULL) && (Tail==NULL))
             {
                 Head=newn;
                 Tail=newn;
             }
             else
             {
                 newn->next=Head;
                 Head=newn;
             }
             Tail->next=Head;
             size++;
         }    

         template <class T2>
         void ScircularLL <T2> :: InsertLast(T2 No)
         {
              node2 <T2> * newn =new node2 <T2>;
             newn->data=No;
             newn->next=NULL;

             if((Head==NULL) && (Tail==NULL))
             {
                 Head=newn;
                 Tail=newn;
             }
             else
             {
                 Tail->next=newn;
                 Tail=newn;
                 
             }
              Tail->next=Head;

              size++;
         }
 
         template <class T2> 
         void ScircularLL <T2> :: InsertAtPos(T2 No,int pos)
         {
             if((pos < 1) || (pos > (size+1)))
             {
                 return;
             }

             if(pos==1)
             {
                 InsertFirst(No);
             }
             else if (pos==(size+1))
             {
                  InsertLast(No);
             }
             else
             {
                 node2 <T2> * newn=new node2 <T2>;
                 newn->data=No;
                 newn->next=NULL;

                 node2 <T2> * temp=Head;
                 int i=1;

                 while(i!=(pos-1))
                 {
                     i++;
                     temp=temp->next;
                 }
                  newn->next=temp->next;
                  temp->next=newn;
                  size++;
                  Tail->next=Head;
             }
             
             
         }

         template <class T2>
         void ScircularLL <T2> :: DeleteFirst()
         {
             if((Head!=NULL) && (Tail!=NULL))
             {
                  if((Head==Tail))
                 {
                     delete(Head);
                     Head=NULL;
                     Tail=NULL;
                 }
                 else
                 {
                     Head=Head->next;
                     delete(Tail->next);
                     Tail->next=Head;
                 }
                 size--;
             }
             else
             {
                 return;
             }
         }

         template <class T2>
         void ScircularLL <T2> :: DeleteLast()
         {
             if((Head!=NULL) && (Tail!=NULL))
             {
                 if((Head==Tail))
                 {
                     delete(Head);
                     Head=NULL;
                     Tail=NULL;
                 }
                 else
                 {
                     node2 <T2> * temp=Head;
                     while((temp->next)!=Tail)
                     {
                         temp=temp->next;
                     }
                     delete(Tail);
                     Tail=temp;
                     
                 }
                  Tail->next=Head;
                 size--;
             }
             else
             {
                 return;
             }
         }

         template <class T2>
         void ScircularLL <T2> :: DeleteAtPos(int pos)
         {
             if((pos < 1) || (pos > size))
             {
                 return;
             }

             if(pos==1)
             {
                 DeleteFirst();
             }
             else if (pos==size)
             {
                  DeleteLast();
             }
             else
             {
                 node2 <T2> * temp=Head;
                 node2 <T2> * target=NULL;
                 int i=1;
                  while(i!=(pos-1))
                  {
                      i++;
                      temp=temp->next;
                  }
                 target=temp->next;
                 temp->next=target->next;
                 delete(target);
               size--;
             }
             
         }
          
         template <class T2>
         void ScircularLL <T2> :: Display()
         {
             if(size!=0)
             {
                 node2 <T2> * temp=Head;
                 do
                 {
                      cout<<"|"<<temp->data<<"|-> ";
                      temp=temp->next;
                  }while(temp!=(Tail->next));
             }
             else
             {
                 return;
             }
         }

         template <class T2>
         int ScircularLL <T2> :: Count()
         {
             return size;
         }


          template <class T2> 
             int ScircularLL <T2> :: SearchFirstOcc(T2 No)
            {
                 if(Head!=NULL)
                 {
                     node2 <T2> * temp =Head;
                     int icnt=1;
                     do
                     {
           
                         if((temp->data)==No)
                         {
                             break;
                         } 
                         icnt++; 
                         temp=temp->next;
                     }while (temp!=(Tail->next)); 

                     if(icnt > (size+1)) 
                     {
                         return 0;
                     } 
                     else
                     {
                         return icnt;
                     }
            
                 }
                 else
                 {
                    return -1;
                  }

            }

             template <class T2> 
             int ScircularLL <T2> :: SearchLastOcc(T2 No)
            {
                 if(Head!=NULL)
                 {
                     node2 <T2> * temp =Head;
                     int icnt=1,i=0;
                     do
                     {
           
                         if((temp->data)==No)
                         {
                             i=icnt;
                         } 
                         icnt++; 
                         temp=temp->next;
                     }while (temp!=(Tail->next)); 

                     if(i==0) 
                     {
                         return 0;
                     } 
                     else
                     {
                         return i;
                     }
            
                 }
                 else
                 {
                    return -1;
                  }

            }


             template <class T2> 
             T2 ScircularLL <T2> :: Addition()
            {
                 if(Head!=NULL)
                 {
                     node2 <T2> * temp =Head;
                     T2 Add;
                     int icnt=1,i=0;
                     do
                     {
                        Add = Add + (temp->data);  
                        temp=temp->next; 
                     }while (temp!=(Tail->next));

                     return Add; 

                 }
                 else
                 {
                    return -1;
                  }

            }          

            template <class T2> 
             T2 ScircularLL <T2> :: Maximum()
            {
                 if(Head!=NULL)
                 {
                     node2 <T2> * temp =Head;
                     T2 iMax =temp->data;
                     int icnt=1,i=0;
                     do
                     {
                        if(iMax < (temp->data))
                        {
                            iMax = (temp->data);
                        }   
                        temp=temp->next;
                     }while (temp!=(Tail->next));

                     return iMax; 

                 }
                 else
                 {
                    return -1;
                  }

            }  

            template <class T2> 
             T2 ScircularLL <T2> :: Minimum()
            {
                 if(Head!=NULL)
                 {
                     node2 <T2> * temp =Head;
                     T2 iMin=temp->data;
                     int icnt=1,i=0;
                     do
                     {
                        if(iMin > (temp->data))
                        {
                            iMin = (temp->data);
                        }   
                        temp=temp->next;
                     }while (temp!=(Tail->next));

                     return iMin; 

                 }
                 else
                 {
                    return -1;
                  }

            }  


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                           //               Doubly Linear Linked list  functions  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  template <class T3> 
         DoublyLL <T3> ::  DoublyLL()
         {
            first=NULL;
            size=0;
         }

         template <class T3>
         void DoublyLL <T3> :: InsertFirst(T3 No)
        {
          node <T3> * newn = new node <T3>;
          newn->data=No;
          newn->next=NULL;
          newn->prev=NULL;
          
          if(first==NULL)
          {
              first=newn;
          }
          else
          {
              newn->next=first;
              first->prev=newn;
              first=newn;
          }
          size++;

        }

        template <class T3>
        void DoublyLL <T3> :: InsertLast(T3 No)
        {
            node <T3> * newn = new node <T3>;
            newn->data=No;
            newn->next=NULL;
            newn->prev=NULL;

            if(first==NULL)
            {
                first=newn;
            }
            else
            {
                node <T3> * temp=first;
                int i=1;
                while (i!=size)
                {
                    i++;
                    temp=temp->next;
                }
                temp->next=newn;
                newn->prev=temp;
                
            }
            size++;

        }   

         template <class T3>
        void DoublyLL <T3> :: InsertAtPos(T3 No,int pos)
        {
          if( (pos < 1 ) || (pos > (size+1)) )
          {
              return;
          }

          if(pos==1)
          {
              InsertFirst(No);
          }
          else if(pos==(size+1))
          {
              InsertLast(No);
          }
          else
          {
              node <T3> * temp=first;
              int i=1;
              node <T3> * newn=new node <T3>;
              newn->data=No;
              newn->next=NULL;
              newn->prev=NULL;

             while(i!=(pos-1))
             {
                i++;
                temp=temp->next;
             }
             newn->next=temp->next;
             newn->next->prev=newn;
             newn->prev=temp;
             temp->next=newn;
            
              size++;
          }

        }

        template <class T3>
        void DoublyLL <T3> :: DeleteFirst()
        {
            if(first!=NULL)
            {
                if(first->next==NULL)
                {
                    delete(first);
                    first=NULL;
                }
                else
                {
                    first=first->next;
                    delete(first->prev);
                    first->prev=NULL;
                     size--;
                }
               
            }

        }

        template <class T3>
        void DoublyLL <T3> :: DeleteLast()
        {
            if(first!=NULL)
            {
                if(first->next==NULL)
                {
                    delete(first->next);
                    first=NULL;
                }
                else
                {
                    node <T3> * temp=first;
                    int i=1;

                    while(i!=size)
                    {
                        i++;
                        temp=temp->next;
                    }
                     temp->prev->next=NULL;
                     delete(temp);
                     size--;
                    
                }
               

            }

        }

         template <class T3>
        void DoublyLL <T3> :: DeleteAtPos(int pos)
        {
            if((pos < 1) || (pos > size))
            {
                return;
            }

            if(pos==1)
            {
                DeleteFirst();
            }
            else if(pos==size)
            {
                DeleteLast();
            }
            else
            {
                node <T3> * temp=first;
                int i=1;
                while(i!=(pos))
                {
                    i++;
                    temp=temp->next;
                }
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev; 
                delete(temp);
                size--;
            }

        }

         template <class T3>
        void DoublyLL <T3> :: Display()
        {
          node <T3> * temp=first;

          while (temp!=NULL)
          {
              cout<<"|"<<temp->data<<"|->";
              temp=temp->next;
          }
          cout<<"NULL\n";
          
        }

        template <class T3>
        int DoublyLL <T3> :: Count()
        {
            return size;
        }

        template <class T3> 
    int DoublyLL <T3> :: SearchFirstOcc(T3 No)
    {
        if(first!=NULL)
        {
             node <T3> * temp =first;
             int icnt=1;
             while (temp!=NULL)
             {
           
                 if((temp->data)==No)
                 {
                   break;
                 } 
                 icnt++; 
                 temp=temp->next;
             } 

             if(icnt > (size+1)) 
             {
                 return 0;
             } 
             else
             {
                 return icnt;
             }
            
        }
        else
        {
            return -1;
        }

    }

    template <class T3> 
    int DoublyLL <T3> :: SearchLastOcc(T3 No)
    {
        if(first!=NULL)
        {
             node <T3> * temp =first;
             int icnt=1,i=0;
             while (temp!=NULL)
             {
           
                 if((temp->data)==No)
                 {
                   i=icnt;
                 } 
                 icnt++; 
                 temp=temp->next;
             } 

             if(i==0) 
             {
                 return 0;
             } 
             else
             {
                 return i;
             }
            
        }
        else
        {
            return -1;
        }

    }


    template <class T3>
    T3 DoublyLL <T3> :: Addition()
    {
        node <T3> * temp =first;
        T3 iAdd=0;
       while (temp!=NULL)
       {
           iAdd=iAdd+(temp->data);
           temp=temp->next;
       }
       return iAdd;
    }


    template <class T3>
    T3 DoublyLL <T3> :: Maximum()
    {
        node <T3> * temp =first;
        T3 iMax=temp->data;
       while (temp!=NULL)
       {
           if(iMax < (temp->data))
           {
               iMax=(temp->data);
           }
           temp=temp->next;
       }
       return iMax; 
    }

      template <class T3>
    T3 DoublyLL <T3> :: Minimum()
    {
        node <T3> * temp =first;
        T3 iMin=temp->data;
       while (temp!=NULL)
       {
           if(iMin > (temp->data))
           {
               iMin=(temp->data);
           }
           temp=temp->next;
       }
       return iMin; 
    }




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                 //         Doubly Cicular Linked list functions  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


   template <class T4>  
         DcircularLL <T4> :: DcircularLL()
          {
              Head=NULL;
              Tail=NULL;
              size=0;
          }  


          template <class T4>  
          void DcircularLL <T4> :: InsertFirst(T4 No)
          {
               node4 <T4> * newn=new node4 <T4>;
               newn->data=No;
               newn->next=NULL;
               newn->prev=NULL;

              if((Head==NULL) && (Tail==NULL))
               {
                   Head=newn;
                   Tail=newn;
               }
               else
               {
                   newn->next=Head;
                   Head->prev=newn;
                   Head=newn;
               }
                 Head->prev=Tail;
                 Tail->next=Head;
                 size++;
          }  
          
          template <class T4>  
          void DcircularLL <T4> :: InsertLast(T4 No)
          {
                node4 <T4> * newn=new node4 <T4>;
               newn->data=No;
               newn->next=NULL;
               newn->prev=NULL;

               if((Head==NULL) && (Tail==NULL))
               {
                   Head=newn;
                   Tail=newn;
               }
               else
               {
                   Tail->next=newn;
                   newn->prev=Tail;
                   Tail=newn;
               }
                 Head->prev=Tail;
                 Tail->next=Head;
                 size++;
              
          } 
           
          template <class T4>  
          void DcircularLL <T4> :: InsertAtPos(T4 No,int pos)
          {
              if((pos < 1) || (pos > (size+1)))
              {
                  return;
              }

              if(pos==1)
              {
                  InsertFirst(No);
              }
              else if(pos==(size+1))
              {
                  InsertLast(No); 
              }
              else
              {
                  node4 <T4> * newn=new node4 <T4>;
                  newn->data=No;
                  newn->next=NULL;
                  newn->prev=NULL;

                  node4 <T4> * temp=Head;
                  int i=1;
                  while(i!=(pos-1))
                  {
                      i++;
                      temp=temp->next;
                  }

                  newn->next=temp->next;
                  newn->prev=temp;
                  newn->next->prev=newn;
                  temp->next=newn;
                   size++;

                 Head->prev=Tail;
                 Tail->next=Head;
              }
          }

          template <class T4>  
          void DcircularLL <T4> :: DeleteFirst()
          {
              if((Head!=NULL) && (Tail!=NULL))
              {
                 if((Head==Tail))
                  {
                      delete(Head);
                      Head=NULL;
                      Tail=NULL;
                  }
                  else
                  {
                      Head=Head->next;
                      delete(Head->prev);
                      Head->prev=Tail;
                      Tail->next=Head;
                  }
                    
                  size--;
              }
              else
              {
                  return;
              }
          }

          template <class T4>  
          void DcircularLL <T4> :: DeleteLast()
          {
                if((Head!=NULL) && (Tail!=NULL))
              {
                  if((Head==Tail))
                  {
                      delete(Head);
                      Head=NULL;
                      Tail=NULL;
                  }
                  else
                  {
                      Tail=Tail->prev;
                      delete(Tail->next);
                      Tail->next=Head;
                      Head->prev=Tail;

                  }
                  size--;
              }
              else
              {
                  return;
              }
          }

          template <class T4>    
          void DcircularLL <T4> :: DeleteAtPos(int pos)
          {
                if((pos < 1) || (pos > size))
              {
                  return;
              }

              if(pos==1)
              {
                  DeleteFirst();
              }
              else if(pos==size)
              {
                  DeleteLast(); 
              }
              else
              {
                  node4 <T4> * temp=Head;
                  int i=1;
                  while(i!=(pos-1))
                  {
                      i++;
                      temp=temp->next;
                  }
                  temp->next=temp->next->next;
                  delete(temp->next->prev);
                  temp->next->prev=temp;

                  /*
                   while(i!=pos)
                   {
                       temp=temp->next;
                   }
                   temp->prev->next=temp->next;
                   temp->next->prev=temp->prev;
                   delete(temp);

                  */
                  size--;
                      Tail->next=Head;
                      Head->prev=Tail;
              }
          }

          template <class T4>  
          void DcircularLL <T4> :: Display()
          {
              if(size!=0)
             {
                 node4 <T4> * temp=Head;
                 do
                 {
                      cout<<" <-|"<<temp->data<<"|-> ";
                      temp=temp->next;
                  }while(temp!=(Tail->next));
                  cout<<"\n";

                 /*
                   ** using for loop **
                  for(int i=1;i<=size;i++)
                  {
                      cout<<" <-|"<<temp->data<<"|-> ";
                      temp=temp->next;   
                  }
                  cout<<"\n";

                  */
             }
             else
             {
                 return;
             }
               
              
          }

          template <class T4>  
          int DcircularLL <T4> :: Count()
          {
              return size;
          }


           template <class T4> 
             int DcircularLL <T4> :: SearchFirstOcc(T4 No)
            {
                 if(Head!=NULL)
                 {
                     node4 <T4> * temp =Head;
                     int icnt=1;
                     do
                     {
           
                         if((temp->data)==No)
                         {
                             break;
                         } 
                         icnt++; 
                         temp=temp->next;
                     }while (temp!=(Tail->next)); 

                     if(icnt > (size+1)) 
                     {
                         return 0;
                     } 
                     else
                     {
                         return icnt;
                     }
            
                 }
                 else
                 {
                    return -1;
                  }

            }

            template <class T4> 
             int DcircularLL <T4> :: SearchLastOcc(T4 No)
            {
                 if(Head!=NULL)
                 {
                     node4 <T4> * temp =Head;
                     int icnt=1,i=0;
                     do
                     {
           
                         if((temp->data)==No)
                         {
                             i=icnt;
                         } 
                         icnt++; 
                         temp=temp->next;
                     }while (temp!=(Tail->next)); 

                     if(i==0) 
                     {
                         return 0;
                     } 
                     else
                     {
                         return i;
                     }
            
                 }
                 else
                 {
                    return -1;
                  }

            }

            template <class T4> 
             T4 DcircularLL <T4> :: Addition()
            {
                 if(Head!=NULL)
                 {
                     node4 <T4> * temp =Head;
                     T4 Add;
                     int icnt=1,i=0;
                     do
                     {
                        Add = Add + (temp->data);  
                        temp=temp->next; 
                     }while (temp!=(Tail->next));

                     return Add; 

                 }
                 else
                 {
                    return -1;
                  }

            }  

            template <class T4> 
             T4 DcircularLL <T4> :: Maximum()
            {
                 if(Head!=NULL)
                 {
                     node4 <T4> * temp =Head;
                     T4 iMax=temp->data;
                     int icnt=1,i=0;
                     do
                     {
                        if(iMax < (temp->data))
                        {
                            iMax = (temp->data);
                        }   
                        temp=temp->next;
                     }while (temp!=(Tail->next));

                     return iMax; 

                 }
                 else
                 {
                    return -1;
                  }

            }  

            template <class T4> 
             T4 DcircularLL <T4> :: Minimum()
            {
                 if(Head!=NULL)
                 {
                     node4 <T4> * temp =Head;
                     T4 iMin= temp->data;
                     int icnt=1,i=0;
                     do
                     {
                        if(iMin > (temp->data))
                        {
                            iMin = (temp->data);
                        }   
                        temp=temp->next;
                     }while (temp!=(Tail->next));

                     return iMin; 

                 }
                 else
                 {
                    return -1;
                  }

            }  


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                       //   Stack Functions //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T5>
Stack <T5> :: Stack()
        {
            first=NULL;
            size=0;
        }


template <class T5>
 void Stack <T5> :: push(T5 No)  
 {
     node5 <T5> * newn=new node5 <T5>;
      
      newn->data=No;
      newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else
      {
          newn->next=first;
          first=newn;
      }
      size++;

 }

template <class T5>
 T5 Stack <T5> :: pop()   
 {
     node5 <T5> * temp=first;
     T5 idata=0;
        if(first!=NULL)
        {
            first=first->next;
            idata=(temp->data);
            delete temp;
            size--;
        }
        return idata;

 }


template <class T5>
 void Stack <T5> :: Display()
 {
     if(first!=NULL)
     {
         node5 <T5> * temp =first;

       while (temp!=NULL)
       {
           cout<<"|"<<temp->data<<"|->";
           temp=temp->next;
       }
       cout<<"NULL\n";

     }
     else
     {
         printf("Stack is empty\n");
         return;
     }
     
 }


template <class T5>
 int Stack <T5> :: Count()
 {
   return size;
 }
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                         // Queue functions //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <class T6>
 Queue <T6> :: Queue()
        {
            first=NULL;
            size=0;
        }

template <class T6>
 void Queue <T6> :: EnQueue(T6 No) 
 {
     node6 <T6> * newn=new node6 <T6>;

        newn->data=No;
        newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else
      {
         node6 <T6> * temp = first;
         
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newn;
      }
      size++;

 }

template <class T6>
 T6 Queue <T6> :: Dqueue()  
 {
     node6 <T6> * temp=first;
     T6 Data;
        if(first!=NULL)
        {
            if((first->next)==NULL)
            {
                  Data=(first->data);
                  delete (first);
                  first=NULL;
            }
            else
            {
                 first=first->next;
                 Data=(temp->data);
                 delete temp;
                 size--;

            }
            return Data;
            
        }
        else
        {
            return -1;
        }
 }


template <class T6>
 void Queue <T6> :: Display()
 {
     if(first!=NULL)
     {
         node6 <T6> * temp =first;

       while (temp!=NULL)
       {
            cout<<"<-|"<<temp->data<<"|";
           temp=temp->next;
       }
       cout<<"<-NULL\n";

     }
     else
     {
         printf("Stack is empty\n");
         return;
     }
     
 }

template <class T6>
 int Queue  <T6> :: Count()
 {
   return size;
 }
 


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                      //    Binary search Tree Functions    //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T7>
BST <T7> :: BST()
{
   first=NULL;
   size=0;
  
}

template <class T7>
void BST <T7> :: Insert(T7 No)
{
   node7 <T7> * newn = new node7 <T7>;
   newn->data=No;
   newn->left=NULL;
   newn->right=NULL;

   if(first==NULL)
   {
      first=newn;
   }
   else
   {
      node7<T7> * temp = first;

      while(1)
      {
         if(No == (temp->data))
         {
            delete newn;
            break;
         }
         else if(No > (temp->data))
         {
            if((temp->right)==NULL)
            {
               temp->right=newn;
               break;
            }
             temp=temp->right ; 
         }
         else if (No < (temp->data))
         {
            if((temp->left)==NULL)
            {
               temp->left=newn;
               break;
            }
            temp=temp->left;
         }
         
      }
   }
}

template <class T7>
bool BST <T7> :: Search(T7 No)
{
   if(first!=NULL)
   {
      node7 <T7>* temp=first;
      bool flag=false;
      while(temp!=NULL)
      {
         if(No == (temp->data))
         {
            flag=true;
            break;
         }
         else if(No > (temp->data) )
         {
            temp=temp->right;
         }
         else if(No < (temp->data))
         {
            temp=temp->left;
         }
      }
      if(temp==NULL)
      {
         return false;
      }
      else
      {
         return flag;
      }

   }
   else
   {
      return false;
   }
}

template <class T7>
void BST <T7> ::PreOrderF(node7 <T7> * temp)
{ 
    if(temp!=NULL)
     {
         if(temp!=NULL)
         {
             cout<<temp->data<<"\t";  
             PreOrderF(temp->left);
             PreOrderF(temp->right);
         }

     }
     else
     {
         return;
     }
}

template <class T7>
void BST<T7> ::InOrderF(node7 <T7> * temp)
{ 
     if(temp!=NULL)
     {
         if(temp!=NULL)
         {
             InOrderF(temp->left);
             cout<<temp->data<<"\t";
             InOrderF(temp->right);
         }
     }
     else
     {
         return;
     }
}

template <class T7>
void BST<T7> ::PostOrderF(node7 <T7> * temp)
{ 
     if(temp!=NULL)
     {
         if(temp!=NULL)
         {
             PostOrderF(temp->left);
             PostOrderF(temp->right);
             cout<<temp->data<<"\t";  
         }
     }
     else
     {
         return;
     }
}

template <class T7>
void BST <T7> :: PreOrder()
{
   PreOrderF(first);
} 
template <class T7>
void BST <T7> :: InOrder()
{
   InOrderF(first);
} 
template <class T7>
void BST <T7> :: PostOrder()
{
   PostOrderF(first);
} 

template <class T7>
int BST <T7> :: CountF(node7 <T7> * temp)
{
     static int icnt=0;
   if(temp!=NULL)
   {
     
      if(temp!=NULL)
      {
          icnt++;
          CountF(temp->left);
          CountF(temp->right);
      } 
   }
   return icnt;
}

template <class T7>
int BST <T7> :: Count()
{
   int iRet = CountF(first);
   return iRet;
}

template <class T7>
int BST<T7> :: CountParentf(node7 <T7>* temp)
{
   if(first!=NULL)
   {
       static int icnt=1;
     if(temp!=NULL)
     {
        if(((temp->left)!=NULL) || ((temp->right)!=NULL))
        {
           icnt++;
        }
        CountParentf(temp->left);
        CountParentf(temp->right);
     }   
     return icnt;
   }
   else
   {
      return -1;
   }
}

template <class T7>
int BST<T7> :: CountParent()
{
   int iRet = CountParentf(first);
   return iRet;
}

template <class T7>
int BST<T7> :: CountLeaff(node7 <T7>* temp)
{
  if(first!=NULL)
  {
    static int icnt=0;
    if(temp!=NULL)
    {
      if(((temp->left)==NULL)  && ((temp->right)==NULL))
      {
          icnt++;
      }
      
      CountLeaff(temp->right);
      CountLeaff(temp->left);
    }
    return icnt;
  }
  else
  {
    return -1;
  }
}

template <class T7>
int BST <T7>:: CountLeaf()
{
   int iRet = CountLeaff(first);
   return iRet;
}


template <class T7>
int BST<T7> ::  GFfrequencyf(node7 <T7>*temp,int No)
{
  if(first!=NULL)
  {
    static int icnt=0;
    if(temp!=NULL)
    {
       if(No <= (temp->data) )
       {
           icnt++;
       }
           GFfrequencyf(temp->right,No); 
           GFfrequencyf(temp->left,No);    
     }
    return icnt;
  }
  else
  {
    return -1;
  }

}

template <class T7>
int BST<T7> :: GFfrequency(int No)
{
   int iRet = GFfrequencyf(first,No);
   return iRet;
} 


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                             // Function of Sorting and searching     //                            
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T8>
 ArrayX <T8>:: ArrayX(int size)
      {
         this->size=size;
         Arr = new T8[size];
      } 

template <class T8>
 void  ArrayX <T8>::  Accept()
      {
          int i=0;
          for(i=0;i<size;i++)
          {
              cin>>Arr[i];
          }
      }
template <class T8>
void ArrayX<T8> :: Display()
      {
          int i=0;
          for(i=0;i<size;i++)
          {
              cout<<Arr[i]<<"\t";
          }
          cout<<"\n";
      }

template <class T8>
Sorting<T8> :: Sorting(T8 * Arr,int size)
     {
          this->Arr = Arr;
          this->size = size;
     }

template <class T8>
void Sorting<T8> :: BubbleSort()
     {
         int pass=0,j=0;
         T8 temp;
         bool flag = false;
         for(pass=0,flag=true;((pass<size) && (flag==true));pass++)
         {
            
            for(j=0,flag=false;j<((size-pass)-1);j++)
            {
                 if(Arr[j] > Arr[j+1])
                 {
                     flag = true;
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                 }
            }
            if(flag == false)
                break;            
         }
         
     }

template <class T8>
void Sorting<T8> :: SelectionSort()
     {
         int i=0,j=0,miniindex=0;
         T8 temp;
         for(i=0;i<size;i++)
         {
             miniindex = i;
             for(j=i;j<size;j++)
             {
                 if(Arr[miniindex] > Arr[j])
                 {
                     miniindex = j;
                 }

             }
             temp = Arr[i];
             Arr[i]=Arr[miniindex];
             Arr[miniindex] = temp; 
         }
     }

template <class T8>
void Sorting<T8> :: InsertionSort()
     {
         int i=0,j=0;
         T8 key;
         for(i=0;i<size;i++)
         {
             key = Arr[i];
             for(j=(i-1);((j>=0) && (Arr[j] > key));j--)
             {
                Arr[j+1]=Arr[j];
             }
             Arr[j+1]=key;
         }
     } 
     


template <class T8>
 Searching<T8> :: Searching(T8 * Arr,int size)
   {
       this->Arr = Arr;
       this->size = size;
   }
  

template <class T8>  
int Searching<T8> :: LinearSearch(T8 No)
    {
       int i= 0;
       for(i=0;i<size;i++)
       {
           if(Arr[i] == No)
           {
               break;
           }
       }
       if(i==size)
       {
           return -1;
       }
       else
       {
          return i;
       }
    }


template <class T8>
int Searching<T8> :: BinarySearch( T8 No)
    {
        int start,mid,end;

        start = 0;
        end = size;
        mid = ((start + end)/2);

       if(Arr[start] > Arr[end])
       {
            while(start <= end )
        {
            if(Arr[mid] == No)
            {
                break;
            }
            else if(Arr[mid] > No)
            {
                start =mid+1;
            }
            else if(Arr[mid] < No)
            {
                end = mid-1;
            }
            mid = ((start + end)/2);

        }

        if(Arr[mid] == No)
        {
            return mid;
        }
        else
        {
            return -1;
        }
       }
       else
       {
         while(start <= end )
        {
            if(Arr[mid] == No)
            {
                break;
            }
            else if(Arr[mid] < No)
            {
                start =mid+1;
            }
            else if(Arr[mid] > No)
            {
                end = mid-1;
            }
            mid = ((start + end)/2);

        }

        if(Arr[mid] == No)
        {
            return mid;
        }
        else
        {
            return -1;
        }
       }
    }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                         
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{

   int Select=1;

   while(Select!=0)
   {
         cout<<"-----Select the Data Structure-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the Application\n";
         cout<<"1 : Singly Linear LinkedList\n";
         cout<<"2 : Singly Cicular LinkedList\n";  
         cout<<"3 : Doubly Linear LinkedList\n";
         cout<<"4 : Doubly Circular LinkedList\n";
         cout<<"5 : Stack\n";
         cout<<"6 : Queue\n";
         cout<<"7 : Binary Search Tree\n";
         cout<<"8 : Sorting And Searching in Array\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>Select;
         cout<<"\n-----------------------------------------------------\n";

      switch(Select)
      {
          case 0 :
                     {
                     cout<<"Thank You For Using Application\n";
                     }
                     break;

          case 1 :    
                     {
                          int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :  
                         {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;


            case 1 :
                       {
                             SinglyLL <char> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             char cvalue='\0';

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node1 at first position \n";
                                 cout<<"2 : Insert the node1 at last position \n";
                                 cout<<"3 : Insert the node1 at desired position \n";
                                 cout<<"4 : Delete the first node1\n";
                                 cout<<"5 : Delete the last node1\n";
                                 cout<<"6 : Delete the node1 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node1s int the linked list \n";
                                 cout<<"9 : First Occurance of given element\n";
                                 cout<<"10 : Last Occurance of given element\n";
                                 cout<<"11 : Largest element\n";
                                 cout<<"12 : Smallest element\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>cvalue;
                                              obj.InsertFirst(cvalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>cvalue;
                                              obj.InsertLast(cvalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node1\n";
                                             cin>>cvalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(cvalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node1s in Linkedlist : "<<iRet<<"\n";
                                             break;          

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchFirstOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchLastOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             cvalue = obj.Maximum();
                                             cout<<"Largest element are :"<<cvalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             cvalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<cvalue<<"\n"; 
                                             break;                    

                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;         


                case 2 :
                       {
                             SinglyLL <int> obj;
                             int iRet=0,ichoice=1,ipos=0,ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node1 at first position \n";
                                 cout<<"2 : Insert the node1 at last position \n";
                                 cout<<"3 : Insert the node1 at desired position \n";
                                 cout<<"4 : Delete the first node1\n";
                                 cout<<"5 : Delete the last node1\n";
                                 cout<<"6 : Delete the node1 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node1s int the linked list \n";
                                 cout<<"9 : First Occurance of given element\n";
                                 cout<<"10 : Last Occurance of given element\n";
                                 cout<<"11 : Largest element\n";
                                 cout<<"12 : Smallest element\n";
                                 cout<<"13 : Addition of all elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node1\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node1s in Linkedlist : "<<iRet<<"\n";
                                             break;

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n"; 
                                             break;                                             
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;                


                 case 3 :
                       {
                             SinglyLL <float> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             float ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node1 at first position \n";
                                 cout<<"2 : Insert the node1 at last position \n";
                                 cout<<"3 : Insert the node1 at desired position \n";
                                 cout<<"4 : Delete the first node1\n";
                                 cout<<"5 : Delete the last node1\n";
                                 cout<<"6 : Delete the node1 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node1s int the linked list \n";
                                 cout<<"9 : First Occurance of given element\n";
                                 cout<<"10 : Last Occurance of given element\n";
                                 cout<<"11 : Largest element\n";
                                 cout<<"12 : Smallest element\n";
                                 cout<<"13 : Addition of all elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node1\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node1s in Linkedlist : "<<iRet<<"\n";
                                             break;  

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n";  
                                             break;                             
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;


                  case 4 :
                       {
                             SinglyLL <double> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             double ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node1 at first position \n";
                                 cout<<"2 : Insert the node1 at last position \n";
                                 cout<<"3 : Insert the node1 at desired position \n";
                                 cout<<"4 : Delete the first node1\n";
                                 cout<<"5 : Delete the last node1\n";
                                 cout<<"6 : Delete the node1 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node1s int the linked list \n";
                                 cout<<"9 : First Occurance of given element\n";
                                 cout<<"10 : Last Occurance of given element\n";
                                 cout<<"11 : Largest element\n";
                                 cout<<"12 : Smallest element\n";
                                 cout<<"13 : Addition of all elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node1\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node1\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node1s in Linkedlist : "<<iRet<<"\n";
                                             break;

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                            if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n";   
                                             break;                              
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;   


                 default :
                           {
                          cout<<"Wrong choice";
                            } break;
                                                            
     
         }

    }    

                       
                     }break;


          case 2 :    
                     {
                          int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :  
                         {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;


            case 1 :
                       {
                             ScircularLL <char> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             char cvalue='\0';

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node2 at first position \n";
                                 cout<<"2 : Insert the node2 at last position \n";
                                 cout<<"3 : Insert the node2 at desired position \n";
                                 cout<<"4 : Delete the first node2\n";
                                 cout<<"5 : Delete the last node2\n";
                                 cout<<"6 : Delete the node2 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the nodes int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>cvalue;
                                              obj.InsertFirst(cvalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>cvalue;
                                              obj.InsertLast(cvalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node2\n";
                                             cin>>cvalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(cvalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node2s in Linkedlist : "<<iRet<<"\n";
                                             break;  

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchFirstOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchLastOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             cvalue = obj.Maximum();
                                             cout<<"Largest element are :"<<cvalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             cvalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<cvalue<<"\n"; 
                                             break;                               
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;         


                case 2 :
                       {
                             ScircularLL <int> obj;
                             int iRet=0,ichoice=1,ipos=0,ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node2 at first position \n";
                                 cout<<"2 : Insert the node2 at last position \n";
                                 cout<<"3 : Insert the node2 at desired position \n";
                                 cout<<"4 : Delete the first node2\n";
                                 cout<<"5 : Delete the last node2\n";
                                 cout<<"6 : Delete the node2 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node2s int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cout<<"13 : Addition of all Elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node2\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node2s in Linkedlist : "<<iRet<<"\n";
                                             break;   

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n";  
                                             break;                              
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;                


                 case 3 :
                       {
                             ScircularLL <float> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             float ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node2 at first position \n";
                                 cout<<"2 : Insert the node2 at last position \n";
                                 cout<<"3 : Insert the node2 at desired position \n";
                                 cout<<"4 : Delete the first node2\n";
                                 cout<<"5 : Delete the last node2\n";
                                 cout<<"6 : Delete the node2 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node2s int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cout<<"13 : Addition of all Elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node2\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node2s in Linkedlist : "<<iRet<<"\n";
                                             break;  

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n";  
                                             break;                               
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;


                  case 4 :
                       {
                             ScircularLL <double> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             double ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node2 at first position \n";
                                 cout<<"2 : Insert the node2 at last position \n";
                                 cout<<"3 : Insert the node2 at desired position \n";
                                 cout<<"4 : Delete the first node2\n";
                                 cout<<"5 : Delete the last node2\n";
                                 cout<<"6 : Delete the node2 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node2s int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cout<<"13 : Addition of all Elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node2\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node2\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node2s in Linkedlist : "<<iRet<<"\n";
                                             break;                     
                                 
                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n";  
                                             break;

                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;   


                 default :
                           {
                          cout<<"Wrong choice";
                            } break;
                                                            
     
         }

    }    

                       
                     }break;

          case 3 :    
                     {
                         int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :  
                         {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;


            case 1 :
                       {
                             DoublyLL <char> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             char cvalue='\0';

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the Node at first position \n";
                                 cout<<"2 : Insert the node at last position \n";
                                 cout<<"3 : Insert the node at desired position \n";
                                 cout<<"4 : Delete the first node\n";
                                 cout<<"5 : Delete the last node\n";
                                 cout<<"6 : Delete the node at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the nodes int the linked list \n";
                                 cout<<"9 : First Occurance of given element\n";
                                 cout<<"10 : Last Occurance of given element\n";
                                 cout<<"11 : Largest element\n";
                                 cout<<"12 : Smallest element\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>cvalue;
                                              obj.InsertFirst(cvalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>cvalue;
                                              obj.InsertLast(cvalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node\n";
                                             cin>>cvalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(cvalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of nodes in Linkedlist : "<<iRet<<"\n";
                                             break; 

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchFirstOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchLastOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             cvalue = obj.Maximum();
                                             cout<<"Largest element are :"<<cvalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             cvalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<cvalue<<"\n"; 
                                             break;                                 
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;         


                case 2 :
                       {
                             DoublyLL <int> obj;
                             int iRet=0,ichoice=1,ipos=0,ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the Node at first position \n";
                                 cout<<"2 : Insert the node at last position \n";
                                 cout<<"3 : Insert the node at desired position \n";
                                 cout<<"4 : Delete the first node\n";
                                 cout<<"5 : Delete the last node\n";
                                 cout<<"6 : Delete the node at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the nodes int the linked list \n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of nodes in Linkedlist : "<<iRet<<"\n";
                                             break;

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                            if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n"; 
                                             break;                                  
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;                


                 case 3 :
                       {
                             DoublyLL <float> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             float ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the Node at first position \n";
                                 cout<<"2 : Insert the node at last position \n";
                                 cout<<"3 : Insert the node at desired position \n";
                                 cout<<"4 : Delete the first node\n";
                                 cout<<"5 : Delete the last node\n";
                                 cout<<"6 : Delete the node at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the nodes int the linked list \n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of nodes in Linkedlist : "<<iRet<<"\n";
                                             break;

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                            if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n"; 
                                             break;                                  
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;


                  case 4 :
                       {
                             DoublyLL <double> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             double ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the Node at first position \n";
                                 cout<<"2 : Insert the node at last position \n";
                                 cout<<"3 : Insert the node at desired position \n";
                                 cout<<"4 : Delete the first node\n";
                                 cout<<"5 : Delete the last node\n";
                                 cout<<"6 : Delete the node at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the nodes int the linked list \n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of nodes in Linkedlist : "<<iRet<<"\n";
                                             break;  

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                            if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n"; 
                                             break;                               
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;   


                 default :
                           {
                          cout<<"Wrong choice";
                            } break;
                                                            
     
         }

    }    

                       
                     }break;

          case 4 :    
                     {

                          int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :  
                         {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;


            case 1 :
                       {
                             DcircularLL <char> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             char cvalue='\0';

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node4 at first position \n";
                                 cout<<"2 : Insert the node4 at last position \n";
                                 cout<<"3 : Insert the node4 at desired position \n";
                                 cout<<"4 : Delete the first node4\n";
                                 cout<<"5 : Delete the last node4\n";
                                 cout<<"6 : Delete the node4 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node4s int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>cvalue;
                                              obj.InsertFirst(cvalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>cvalue;
                                              obj.InsertLast(cvalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node4\n";
                                             cin>>cvalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(cvalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node4s in Linkedlist : "<<iRet<<"\n";
                                             break; 

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchFirstOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;                       

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>cvalue;
                                             iRet = obj.SearchLastOcc(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             cvalue = obj.Maximum();
                                             cout<<"Largest element are :"<<cvalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             cvalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<cvalue<<"\n"; 
                                             break;                                
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;         


                case 2 :
                       {
                             DcircularLL <int> obj;
                             int iRet=0,ichoice=1,ipos=0,ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node4 at first position \n";
                                 cout<<"2 : Insert the node4 at last position \n";
                                 cout<<"3 : Insert the node4 at desired position \n";
                                 cout<<"4 : Delete the first node4\n";
                                 cout<<"5 : Delete the last node4\n";
                                 cout<<"6 : Delete the node4 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node4s int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cout<<"13 : Addition of all Elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node4\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node4s in Linkedlist : "<<iRet<<"\n";
                                             break;

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;
                                                                    

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n";  
                                             break;                                
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;                


                 case 3 :
                       {
                             DcircularLL <float> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             float fvalue=0.00;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node4 at first position \n";
                                 cout<<"2 : Insert the node4 at last position \n";
                                 cout<<"3 : Insert the node4 at desired position \n";
                                 cout<<"4 : Delete the first node4\n";
                                 cout<<"5 : Delete the last node4\n";
                                 cout<<"6 : Delete the node4 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node4s int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cout<<"13 : Addition of all Elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>fvalue;
                                              obj.InsertFirst(fvalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>fvalue;
                                              obj.InsertLast(fvalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node4\n";
                                             cin>>fvalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(fvalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node4s in Linkedlist : "<<iRet<<"\n";
                                             break;  

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>fvalue;
                                             iRet = obj.SearchFirstOcc(fvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;
                                                                    

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>fvalue;
                                             iRet = obj.SearchLastOcc(fvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             fvalue = obj.Maximum();
                                             cout<<"Largest element are :"<<fvalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             fvalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<fvalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             fvalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<fvalue<<"\n";  
                                             break;                                 
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;


                  case 4 :
                       {
                             DcircularLL <double> obj;
                             int iRet=0,ichoice=1,ipos=0;
                             double ivalue=0;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node4 at first position \n";
                                 cout<<"2 : Insert the node4 at last position \n";
                                 cout<<"3 : Insert the node4 at desired position \n";
                                 cout<<"4 : Delete the first node4\n";
                                 cout<<"5 : Delete the last node4\n";
                                 cout<<"6 : Delete the node4 at desired position \n";
                                 cout<<"7 : Display the linkedlist \n";
                                 cout<<"8 : Count the node4s int the linked list \n";
                                 cout<<"9 : First Occurance of givaen element\n";
                                 cout<<"10 : Last Occurance of givaen element\n";
                                 cout<<"11 : Largest Element\n";
                                 cout<<"12 : Smallest Element\n";
                                 cout<<"13 : Addition of all Elements\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th linked list\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>ivalue;
                                              obj.InsertFirst(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to insert into the node4\n";
                                              cin>>ivalue;
                                              obj.InsertLast(ivalue);
                                              break;

                                  case 3 : 
                                             cout<<"enter data to insert into the node4\n";
                                             cin>>ivalue;
                                             cout<<"enter the poistion \n";
                                             cin>>ipos;
                                             obj.InsertAtPos(ivalue,ipos);
                                              break;                       

                                  case 4 : 
                                             obj.DeleteFirst();
                                             break;

                                  case 5 : 
                                             obj.DeleteLast();
                                              break;   

                                 case 6 : 
                                             cout<<"Insert the position \n";
                                             cin>>ipos;
                                             obj.DeleteAtPos(ipos);
                                             break;    

                                 case 7 : 
                                             obj.Display();
                                             break;     

                                 case 8 : 
                                             iRet = obj.Count();
                                             cout<<"Number of node4s in Linkedlist : "<<iRet<<"\n";
                                             break;  

                                 case 9 :    
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchFirstOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;
                                                                    

                                 case 10 :             
                                             cout<<"Enter the element to search\n";
                                             cin>>ivalue;
                                             iRet = obj.SearchLastOcc(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"Empty linked list\n";
                                             }
                                             else
                                             {
                                                 cout<<"Element found first at position : "<<iRet<<"\n";
                                             }
                                             break;

                                 case 11 : 
                                             ivalue = obj.Maximum();
                                             cout<<"Largest element are :"<<ivalue<<"\n"; 
                                             break;    

                                 case 12 : 
                                             ivalue = obj.Minimum();
                                             cout<<"Smallest element are :"<<ivalue<<"\n"; 
                                             break; 

                                 case 13 :   
                                             ivalue = obj.Addition();
                                             cout<<"Addition of all elemets are :"<<ivalue<<"\n";  
                                             break;                                 
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;   


                 default :
                           {
                          cout<<"Wrong choice";
                            } break;
                                                            
     
         }

    }    
                       
                     }break;



         case 5 :    
                     {

                          int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype of Stack-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :    {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;
                          

            case 1 :  
                        {        
                        Stack <char> cobj;
                        int cchoice=1,cRet=0;
                        char chRet='\0',cValue='\0';
                         while(cchoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Stack ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Stack \n";
                             cout<<"2 : Delete the element in Stack \n";
                             cout<<"3 : Display the all element in the Stack \n";
                             cout<<"4 : Count the all the Character present in the Stack\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>cchoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(cchoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Stack\n";
                             break;

                             case 1 : 
                                         cout<<"enter the character which are insert int the Stack\n";
                                         cin>>cValue;
                                         cobj.push(cValue);
                                         break;

                             case 2 : 
                                         chRet=cobj.pop();
                                         cout<<"Deleted element from Stack : "<<chRet<<"\n";
                                         break; 

                             case 3 : 
                                         cobj.Display(); 
                                         break;

            
                             case 4 :
                                         cRet = cobj.Count();
                                         cout<<"Number of elemets in the Stack : "<<cRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                        }break;

            case 2 :     
                     {     
                     Stack <int> iobj;
                     int ichoice=1,iValue=0,iRet=0;
                         while(ichoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Stack ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Stack \n";
                             cout<<"2 : Delete the element in Stack \n";
                             cout<<"3 : Display the all element in the Stack \n";
                             cout<<"4 : Count the all the element present in the Stack\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>ichoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(ichoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Stack\n";
                             break;

                             case 1 : 
                                         cout<<"enter the data which are insert int the Stack\n";
                                         cin>>iValue;
                                         iobj.push(iValue);
                                         break;

                             case 2 : 
                                         iRet=iobj.pop();
                                         cout<<"Deleted element from Stack : "<<iRet<<"\n";
                                         break; 

                             case 3 : 
                                         iobj.Display(); 
                                         break;

            
                             case 4 :
                                         iRet = iobj.Count();
                                         cout<<"Number of elemets in the Stack : "<<iRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                     }break;

            case 3 :  
                     {        
                     Stack <float> fobj;
                     int fchoice=1,fRet=0;
                     float fValue=0,flRet=0;
                         while(fchoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Stack ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Stack \n";
                             cout<<"2 : Delete the element in Stack \n";
                             cout<<"3 : Display the all element in the Stack \n";
                             cout<<"4 : Count the all the element present in the Stack\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>fchoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(fchoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Stack\n";
                             break;

                             case 1 : 
                                         cout<<"enter the data which are insert int the Stack\n";
                                         cin>>fValue;
                                         fobj.push(fValue);
                                         break;

                             case 2 : 
                                         flRet=fobj.pop();
                                         cout<<"Deleted element from Stack : "<<flRet<<"\n";
                                         break; 

                             case 3 : 
                                         fobj.Display(); 
                                         break;

            
                             case 4 :
                                         fRet = fobj.Count();
                                         cout<<"Number of elemets in the Stack : "<<fRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                     }break;


            case 4 :  
                     {         
                     Stack <double> dobj;
                     int dchoice=1,dRet=0;
                     double dValue=0,doRet=0;
                         while(dchoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Stack ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Stack \n";
                             cout<<"2 : Delete the element in Stack \n";
                             cout<<"3 : Display the all element in the Stack \n";
                             cout<<"4 : Count the all the element present in the Stack\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>dchoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(dchoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Stack\n";
                             break;

                             case 1 : 
                                         cout<<"enter the data which are insert int the Stack\n";
                                         cin>>dValue;
                                         dobj.push(dValue);
                                         break;

                             case 2 : 
                                         doRet=dobj.pop();
                                         cout<<"Deleted element from Stack : "<<doRet<<"\n";
                                         break; 

                             case 3 : 
                                         dobj.Display(); 
                                         break;

            
                             case 4 :
                                         dRet = dobj.Count();
                                         cout<<"Number of elemets in the Stack : "<<dRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                     }break;       

            default :
                     { 
                      cout<<"Wrong choice\n";
                     }
                      break;                             

         }
    }
   
                       
                     }break;


          case 6 :    
                     {

                          int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype of Queue-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :    {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;
                          

            case 1 :  
                        {        
                        Queue <char> cobj;
                        int cchoice=1,cRet=0;
                        char chRet='\0',cValue='\0';
                         while(cchoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Queue ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Queue \n";
                             cout<<"2 : Delete the element in Queue \n";
                             cout<<"3 : Display the all element in the Queue \n";
                             cout<<"4 : Count the all the Character present in the Queue\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>cchoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(cchoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Queue\n";
                             break;

                             case 1 : 
                                         cout<<"enter the character which are insert int the Queue\n";
                                         cin>>cValue;
                                         cobj.EnQueue(cValue);
                                         break;

                             case 2 : 
                                         chRet=cobj.Dqueue();
                                         cout<<"Deleted element from Queue : "<<chRet<<"\n";
                                         break; 

                             case 3 : 
                                         cobj.Display(); 
                                         break;

            
                             case 4 :
                                         cRet = cobj.Count();
                                         cout<<"Number of elemets in the Queue : "<<cRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                        }break;

            case 2 :     
                     {     
                     Queue <int> iobj;
                     int ichoice=1,iValue=0,iRet=0;
                         while(ichoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Queue ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Queue \n";
                             cout<<"2 : Delete the element in Queue \n";
                             cout<<"3 : Display the all element in the Queue \n";
                             cout<<"4 : Count the all the element present in the Queue\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>ichoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(ichoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Queue\n";
                             break;

                             case 1 : 
                                         cout<<"enter the data which are insert int the Queue\n";
                                         cin>>iValue;
                                         iobj.EnQueue(iValue);
                                         break;

                             case 2 : 
                                         iRet=iobj.Dqueue();
                                         cout<<"Deleted element from Queue : "<<iRet<<"\n";
                                         break; 

                             case 3 : 
                                         iobj.Display(); 
                                         break;

            
                             case 4 :
                                         iRet = iobj.Count();
                                         cout<<"Number of elemets in the Queue : "<<iRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                     }break;

            case 3 :  
                     {        
                     Queue <float> fobj;
                     int fchoice=1,fRet=0;
                     float fValue=0,flRet=0.00;
                         while(fchoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Queue ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Queue \n";
                             cout<<"2 : Delete the element in Queue \n";
                             cout<<"3 : Display the all element in the Queue \n";
                             cout<<"4 : Count the all the element present in the Queue\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>fchoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(fchoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Queue\n";
                             break;

                             case 1 : 
                                         cout<<"enter the data which are insert int the Queue\n";
                                         cin>>fValue;
                                         fobj.EnQueue(fValue);
                                         break;

                             case 2 : 
                                         flRet=fobj.Dqueue();
                                         cout<<"Deleted element from Queue : "<<flRet<<"\n";
                                         break; 

                             case 3 : 
                                         fobj.Display(); 
                                         break;

            
                             case 4 :
                                         fRet = fobj.Count();
                                         cout<<"Number of elemets in the Queue : "<<fRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                     }break;


            case 4 :  
                     {         
                     Queue <double> dobj;
                     int dchoice=1,dRet=0;
                     double dValue=0,doRet=0.000;
                         while(dchoice!=0)
                        {   
                             cout<<"---- Choose the operation perform of Queue ----\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cout<<"0 : Terminate the application\n";
                             cout<<"1 : Insert the element in Queue \n";
                             cout<<"2 : Delete the element in Queue \n";
                             cout<<"3 : Display the all element in the Queue \n";
                             cout<<"4 : Count the all the element present in the Queue\n";
                             cout<<"\n-----------------------------------------------------\n";
                             cin>>dchoice;
                             cout<<"\n-----------------------------------------------------\n";


                            switch(dchoice)
                           {
                             case 0 : 
                                         cout<<"Thank You For Using Queue\n";
                             break;

                             case 1 : 
                                         cout<<"enter the data which are insert int the Queue\n";
                                         cin>>dValue;
                                         dobj.EnQueue(dValue);
                                         break;

                             case 2 : 
                                         doRet=dobj.Dqueue();
                                         cout<<"Deleted element from Queue : "<<doRet<<"\n";
                                         break; 

                             case 3 : 
                                         dobj.Display(); 
                                         break;

            
                             case 4 :
                                         dRet = dobj.Count();
                                         cout<<"Number of elemets in the Queue : "<<dRet<<"\n";
                                         break;

                             default : 
                                         cout<<"Wrong choice\n";
                                         break;                

                            }
                        }
                     }break;       

            default :
                     { 
                      cout<<"Wrong choice\n";
                     }
                      break;                             

         }
    }
   
   
                       
                     }break;

          case 7 :    
                     {
                         int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :  
                         {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;


            case 1 :
                       {
                             BST <char> obj;
                             int iRet=0,ichoice=1;
                             bool bRet=false;
                             char cvalue='\0';

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node at tree \n";
                                 cout<<"2 : Search the element in the tree\n";
                                 cout<<"3 : Display PreOrder \n";
                                 cout<<"4 : Display InOrder\n";
                                 cout<<"5 : Display PostOrder\n";
                                 cout<<"6 : count the all elements \n";
                                 cout<<"7 : count the Parent Node\n";
                                 cout<<"8 : count the Leaf Node\n";
                                 cout<<"9 : count the frequency of given number\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th Binary Search Tree\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>cvalue;
                                              obj.Insert(cvalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to Search\n";
                                              cin>>cvalue;
                                              bRet = obj.Search(cvalue);
                                              if(bRet == true)
                                              {
                                                  cout<<"Number is Present";
                                              }
                                              else
                                              { 
                                                  cout<<"Number is Not Present";
                                              }
                                              break;

                                  case 3 : 
                                             obj.PreOrder();
                                              break;                       

                                  case 4 : 
                                             obj.InOrder();
                                             break;

                                  case 5 : 
                                             obj.PostOrder();
                                              break;   

                                 case 6 : 
                                             iRet = obj.Count();
                                             cout<<"Number of elements are :"<<iRet<<"\n";
                                             break; 

                                 case 7 :
                                             iRet = obj.CountParent();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Parent Nodes are :"<<iRet<<"\n";
                                             }      
                                             break;

                                 case 8 :
                                             iRet = obj.CountLeaf();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Leaf Nodes are :"<<iRet<<"\n";
                                             }     
                                             break;

                                 case 9 :
                                             cout<<"Enter the number to get frequency\n";
                                             cin>>cvalue;
                                             iRet = obj.GFfrequency(cvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Frequency of given elements are :"<<iRet<<"\n";
                                             }     
                                             break;                           
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;         


                case 2 :
                       {
                             BST <int> obj;
                             int iRet=0,ichoice=1,ipos=0,ivalue=0;
                             bool bRet=false;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node at tree \n";
                                 cout<<"2 : Search the element in the tree\n";
                                 cout<<"3 : Display PreOrder \n";
                                 cout<<"4 : Display InOrder\n";
                                 cout<<"5 : Display PostOrder\n";
                                 cout<<"6 : count the all elements \n";
                                 cout<<"7 : count the Parent Node\n";
                                 cout<<"8 : count the Leaf Node\n";
                                 cout<<"9 : count the frequency of given number\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th Binary Search Tree\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>ivalue;
                                              obj.Insert(ivalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to Search\n";
                                              cin>>ivalue;
                                              bRet = obj.Search(ivalue);
                                              if(bRet == true)
                                              {
                                                  cout<<"Number is Present";
                                              }
                                              else
                                              { 
                                                  cout<<"Number is Not Present";
                                              }

                                              break;

                                  case 3 : 
                                             obj.PreOrder();
                                              break;                       

                                  case 4 : 
                                             obj.InOrder();
                                             break;

                                  case 5 : 
                                             obj.PostOrder();
                                              break;   

                                 case 6 : 
                                             iRet = obj.Count();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }  
                                             else
                                             {
                                                 cout<<"Number of elements are :"<<iRet<<"\n";
                                             }

                                             break;  

                                 case 7 :
                                             iRet = obj.CountParent();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Parent Nodes are :"<<iRet<<"\n";
                                             }      
                                             break;

                                 case 8 :
                                             iRet = obj.CountLeaf();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Leaf Nodes are :"<<iRet<<"\n";
                                             }     
                                             break;

                                 case 9 :
                                             cout<<"Enter the number to get frequency\n";
                                             cin>>ivalue;
                                             iRet = obj.GFfrequency(ivalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Frequency of given elements are :"<<iRet<<"\n";
                                             }     
                                             break;                                       
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;                


                 case 3 :
                       {     BST <float> obj;
                             int iRet=0,ichoice=1;
                             bool bRet=false;
                             float fvalue=0.00;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node at tree \n";
                                 cout<<"2 : Search the element in the tree\n";
                                 cout<<"3 : Display PreOrder \n";
                                 cout<<"4 : Display InOrder\n";
                                 cout<<"5 : Display PostOrder\n";
                                 cout<<"6 : count the all elements \n";
                                 cout<<"7 : count the Parent Node\n";
                                 cout<<"8 : count the Leaf Node\n";
                                 cout<<"9 : count the frequency of given number\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th Binary Search Tree\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>fvalue;
                                              bRet = obj.Search(fvalue);
                                              if(bRet == true)
                                              {
                                                  cout<<"Number is Present";
                                              }
                                              else
                                              { 
                                                  cout<<"Number is Not Present";
                                              }
                                              break;

                                  case 2 : 
                                              cout<<"enter data to Search\n";
                                              cin>>fvalue;
                                              obj.Search(fvalue);
                                              break;

                                  case 3 : 
                                             obj.PreOrder();
                                              break;                       

                                  case 4 : 
                                             obj.InOrder();
                                             break;

                                  case 5 : 
                                             obj.PostOrder();
                                              break;   

                                 case 6 : 
                                             iRet = obj.Count();
                                             cout<<"Number of elements are :"<<iRet<<"\n";
                                             break; 

                                 case 7 :
                                             iRet = obj.CountParent();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Parent Nodes are :"<<iRet<<"\n";
                                             }      
                                             break;

                                 case 8 :
                                             iRet = obj.CountLeaf();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Leaf Nodes are :"<<iRet<<"\n";
                                             }     
                                             break;

                                 case 9 :
                                             cout<<"Enter the number to get frequency\n";
                                             cin>>fvalue;
                                             iRet = obj.GFfrequency(fvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Frequency of given elements are :"<<iRet<<"\n";
                                             }     
                                             break;                           
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;   


                 case 4 :
                       {     BST <double> obj;
                             int iRet=0,ichoice=1;
                             bool bRet=false;
                             double dvalue=0.00;

                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Insert the node at tree \n";
                                 cout<<"2 : Search the element in the tree\n";
                                 cout<<"3 : Display PreOrder \n";
                                 cout<<"4 : Display InOrder\n";
                                 cout<<"5 : Display PostOrder\n";
                                 cout<<"6 : count the all elements \n";
                                 cout<<"7 : count the Parent Node\n";
                                 cout<<"8 : count the Leaf Node\n";
                                 cout<<"9 : count the frequency of given number\n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using th Binary Search Tree\n";
                                              break;

                                  case 1 : 
                                              cout<<"enter data to insert into the node\n";
                                              cin>>dvalue;
                                              obj.Insert(dvalue);
                                              break;

                                  case 2 : 
                                              cout<<"enter data to Search\n";
                                              cin>>dvalue;
                                              bRet = obj.Search(dvalue);
                                              if(bRet == true)
                                              {
                                                  cout<<"Number is Present";
                                              }
                                              else
                                              { 
                                                  cout<<"Number is Not Present";
                                              }
                                              break;

                                  case 3 : 
                                             obj.PreOrder();
                                              break;                       

                                  case 4 : 
                                             obj.InOrder();
                                             break;

                                  case 5 : 
                                             obj.PostOrder();
                                              break;   

                                 case 6 : 
                                             iRet = obj.Count();
                                             cout<<"Number of elements are :"<<iRet<<"\n";
                                             break;  

                                 case 7 :
                                             iRet = obj.CountParent();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Parent Nodes are :"<<iRet<<"\n";
                                             }      
                                             break;

                                 case 8 :
                                             iRet = obj.CountLeaf();
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Number of Leaf Nodes are :"<<iRet<<"\n";
                                             }     
                                             break;

                                 case 9 :
                                             cout<<"Enter the number to get frequency\n";
                                             cin>>dvalue;
                                             iRet = obj.GFfrequency(dvalue);
                                             if(iRet==-1)
                                             {
                                                 cout<<"BST is empty\n";
                                             }
                                             else
                                             {
                                                 cout<<"Frequency of given elements are :"<<iRet<<"\n";
                                             }     
                                             break;                          
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;   



                 default :
                           {
                          cout<<"Wrong choice";
                            } break;
                                                            
     
         }

    }
                     }break;

           case 8 : 
                    {
                         int iSelect=1;


    while(iSelect!=0)
    {
         cout<<"-----Select the Datatype-------\n";
         cout<<"\n-----------------------------------------------------\n";
         cout<<"0 : Terminate the application\n";
         cout<<"1 : For char\n";
         cout<<"2 : For int\n";
         cout<<"3 : For float\n";
         cout<<"4 : For Double\n";
         cout<<"\n-----------------------------------------------------\n";
         cin>>iSelect;
         cout<<"\n-----------------------------------------------------\n";

         switch(iSelect)
         {
            case 0 :  
                         {
                         cout<<"Thank You for Using the application\n";
                         } 
                         break;


            case 1 :
                       {
                             int isize=0,ichoice=1,iRet=0;;
                             char cvalue='\0';
                             cout<<"Enter the size of array\n";
                             cin>>isize;
                             ArrayX <char> obj(isize);
                             obj.Accept();
                             Sorting <char>obj1(obj.Arr,isize);
                             Searching<char>obj2(obj.Arr,isize);
                           
                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Display All the Elements\n";
                                 cout<<"2 : Use BubbleSort for sorting \n";
                                 cout<<"3 : Use SelectionSort for sorting \n";
                                 cout<<"4 : Use InsertionSort for sorting\n";
                                 cout<<"5 : Use LinearSearch To Search\n";
                                 cout<<"6 : Use BinarySearch To Search \n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using Sorting And Searching\n";
                                              break;

                                  case 1 : 
                                              obj.Display();
                                              break;

                                  case 2 : 
                                              obj1.BubbleSort();
                                              break;

                                  case 3 : 
                                              obj1.SelectionSort();
                                              break;                       

                                  case 4 : 
                                             obj1.InsertionSort();
                                             break;

                                  case 5 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>cvalue;
                                             iRet = obj2.LinearSearch(cvalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;   

                                 case 6 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>cvalue;
                                             iRet = obj2.LinearSearch(cvalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;   

                                     

                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;         


                case 2 :
                       {
                              int isize=0,ichoice=1,iRet=0;;
                              int ivalue=0;
                             cout<<"Enter the size of array\n";
                             cin>>isize;
                             ArrayX <int> obj(isize);
                             obj.Accept();
                             Sorting <int>obj1(obj.Arr,isize);
                             Searching<int>obj2(obj.Arr,isize);
                           
                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Display All the Elements\n";
                                 cout<<"2 : Use BubbleSort for sorting \n";
                                 cout<<"3 : Use SelectionSort for sorting \n";
                                 cout<<"4 : Use InsertionSort for sorting\n";
                                 cout<<"5 : Use LinearSearch To Search\n";
                                 cout<<"6 : Use BinarySearch To Search \n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using Sorting And Searching\n";
                                              break;

                                  case 1 : 
                                              obj.Display();
                                              break;

                                  case 2 : 
                                              obj1.BubbleSort();
                                              obj.Display();
                                              break;

                                  case 3 : 
                                              obj1.SelectionSort();
                                              break;                       

                                  case 4 : 
                                             obj1.InsertionSort();
                                             break;

                                  case 5 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>ivalue;
                                             iRet = obj2.LinearSearch(ivalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;   

                                 case 6 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>ivalue;
                                             iRet = obj2.LinearSearch(ivalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;                                               
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;                


                 case 3 :
                       {
                             int isize=0,ichoice=1,iRet=0;;
                             float fvalue=0.0;
                             cout<<"Enter the size of array\n";
                             cin>>isize;
                             ArrayX <float> obj(isize);
                             obj.Accept();
                             Sorting <float>obj1(obj.Arr,isize);
                             Searching<float>obj2(obj.Arr,isize);
                           
                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Display All the Elements\n";
                                 cout<<"2 : Use BubbleSort for sorting \n";
                                 cout<<"3 : Use SelectionSort for sorting \n";
                                 cout<<"4 : Use InsertionSort for sorting\n";
                                 cout<<"5 : Use LinearSearch To Search\n";
                                 cout<<"6 : Use BinarySearch To Search \n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using Sorting And Searching\n";
                                              break;

                                  case 1 : 
                                              obj.Display();
                                              break;

                                  case 2 : 
                                              obj1.BubbleSort();
                                              break;

                                  case 3 : 
                                              obj1.SelectionSort();
                                              break;                       

                                  case 4 : 
                                             obj1.InsertionSort();
                                             break;

                                  case 5 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>fvalue;
                                             iRet = obj2.LinearSearch(fvalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;   

                                 case 6 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>fvalue;
                                             iRet = obj2.LinearSearch(fvalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;                            
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break;


                  case 4 :
                       {
                            int isize=0,ichoice=1,iRet=0;;
                             double dvalue=0.0;
                             cout<<"Enter the size of array\n";
                             cin>>isize;
                             ArrayX <double> obj(isize);
                             obj.Accept();
                             Sorting <double>obj1(obj.Arr,isize);
                             Searching<double>obj2(obj.Arr,isize);
                           
                             while(ichoice!=0)
                             {
                                 cout<<"\n********************************************\n";
                                 cout<<"0 : Terminate the application \n";
                                 cout<<"1 : Display All the Elements\n";
                                 cout<<"2 : Use BubbleSort for sorting \n";
                                 cout<<"3 : Use SelectionSort for sorting \n";
                                 cout<<"4 : Use InsertionSort for sorting\n";
                                 cout<<"5 : Use LinearSearch To Search\n";
                                 cout<<"6 : Use BinarySearch To Search \n";
                                 cin>>ichoice;
                                 cout<<"\n********************************************\n";


                              switch(ichoice)
                              {

                                  case 0 : 
                                             cout<<"Thank You for using Sorting And Searching\n";
                                              break;

                                  case 1 : 
                                              obj.Display();
                                              break;

                                  case 2 : 
                                              obj1.BubbleSort();
                                              break;

                                  case 3 : 
                                              obj1.SelectionSort();
                                              break;                       

                                  case 4 : 
                                             obj1.InsertionSort();
                                             break;

                                  case 5 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>dvalue;
                                             iRet = obj2.LinearSearch(dvalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;   

                                 case 6 : 
                                             cout<<"Enter the Element to search\n";
                                             cin>>dvalue;
                                             iRet = obj2.LinearSearch(dvalue);
                                             if(iRet == -1)
                                             {
                                                 cout<<"Element is not present\n"; 
                                             }
                                             else
                                             {
                                                 cout<<"Element is Present at "<<iRet<<" position\n";
                                             }
                                              break;                             
  
                                 default : 
                                             printf("wrong choice\n");
                                             break;     

                                }
                            }         
                        
                       }   break; 


                 default :
                           {
                          cout<<"Wrong choice";
                            } break;
                                                            
     
         }

    }        
                       


                    }         



          default : 
                    {
                        cout<<"Wrong choice\n";
                    }        
                    break;                                                            


                              
      }  
      
   }


    return 0;
}
