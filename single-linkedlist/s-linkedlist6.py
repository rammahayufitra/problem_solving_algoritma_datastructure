# program to delete the first item from a singly linked list.

class Node:
    def __init__(self, data):
        self.data = data 
        self.next = None 

class SingleLinkedList: 
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

    def iteration(self):
        current = self.head 
        while current: 
            value = current.data 
            current = current.next 
            yield value 

    def delete(self, data):
        current = self.head 
        prev = self.head 

        while current: 
            if current.data == data: 
                if current == self.head:
                    self.head = current.next 
                else: 
                    prev.next = current.next

            current = current.next 
            prev    = current 


item = SingleLinkedList() 
item.append(1)
item.append(2)
item.append(3)

item.delete(3)

for i in item.iteration():
    print(i)