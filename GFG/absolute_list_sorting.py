class Node:
    def __init__(self, d):
        self.data = d
        self.next = None
 
class SortList:
    def __init__(self):
        self.head = None
         
    # To sort a linked list by actual values.
    # The list is assumed to be sorted by
    # absolute values.
    def sortedList(self, head):
         
        # Initialize previous and
        # current nodes
        prev = self.head
        curr = self.head.next
         
        # Traverse list
        while(curr != None):
             
            # If curr is smaller than prev,
            # then it must be moved to head
            if(curr.data < prev.data):
                 
                # Detach curr from linked list
                prev.next = curr.next
                 
                # Move current node to beginning
                curr.next = self.head
                self.head = curr
                 
                # Update current
                curr = prev
             
            # Nothing to do if current element
            # is at right place
            else:
                prev = curr
         
            # Move current
            curr = curr.next
        return self.head
     
    # Inserts a new Node at front of the list
    def push(self, new_data):
         
        # 1 & 2: Allocate the Node &
        #        Put in the data
        new_node = Node(new_data)
     
        # 3. Make next of new Node as head
        new_node.next = self.head
     
        # 4. Move the head to point to new Node
        self.head = new_node
     
    # Function to print linked list
    def printList(self, head):
        temp = head
        while (temp != None):
            print(temp.data, end = " ")
            temp = temp.next
        print()
     
# Driver Code
llist = SortList()
 
# Constructed Linked List is 
# 1->2->3->4->5->6->7->8->8->9->null
llist.push(-5)
llist.push(5)
llist.push(4)
llist.push(3)
llist.push(-2)
llist.push(1)
llist.push(0)
         
print("Original List :")
llist.printList(llist.head)
         
start = llist.sortedList(llist.head)
 
print("Sorted list :")
llist.printList(start)