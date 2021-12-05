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
