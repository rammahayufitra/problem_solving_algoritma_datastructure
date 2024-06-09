#program to find the size of a singly linked list.
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 

class LinkedList:
    def __init__(self):
        self.head = None 
        self.tail = None
        self.count = 0 

    def append(self, data): 
        if self.tail == None:
            self.head = Node(data)
            self.tail = self.head 
        else: 
            self.tail.next = Node(data)
            self.tail = self.tail.next
        self.count += 1 

    def iteration(self): 
        item = self.head 
        while item: 
            value = item.data 
            item  = item.next 
            yield value 

if __name__ == '__main__':
    SL = LinkedList()
    SL.append(1)
    SL.append(2)

print("length single LinkedList :", SL.count)

