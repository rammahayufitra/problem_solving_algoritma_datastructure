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
    
    def __getitem__(self, index): 
        if index > self.count - 1:
            return "Index Out of Range"
        current = self.head 
        for _ in range(index):
            current = current.next 
        return current.data 

    def __setitem__(self, index, value):
        if index > self.count -1: 
            return "Index Out of Range"
        current = self.head 
        for _ in range(index):
            current = current.next 
        current.data = value 


item = SingleLinkedList()
item.append(1)
item.append(2)
item.append(3)

item[1] = 10


for i in item.iteration():
    print(i)

