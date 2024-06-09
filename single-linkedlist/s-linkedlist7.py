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
        self.count += 1  

    def iteration(self):
        current = self.head 
        while current: 
            value = current.data 
            current = current.next 
            yield value 

    def delete(self, data):
        current = self.head
        prev = None

        while current:
            if current.data == data:
                if current == self.head:
                    self.head = current.next
                    if current == self.tail:  # If head is also the tail
                        self.tail = None
                else:
                    prev.next = current.next
                    if current == self.tail:
                        self.tail = prev
                self.count -= 1
                return  # Return after deleting the first occurrence
            prev = current
            current = current.next


SL = SingleLinkedList()
SL.append(1)
SL.append(2)
SL.append(3)

SL.delete(3)

for i in SL.iteration():
    print(i) 
