#Python program to access a specific item in a singly linked list using index value.

class Node:
    def __init__(self,data):
        self.data = data 
        self.next = None 

class SingleLinkedList: 
    def __init__(self):
        self.head = None 
        self.tail = None
      

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
        
    def value_based_index(self, index): 
        count = 0 
        for value in self.iteration():
            if count == index: 
                return value 
            count += 1
            

if __name__ == "__main__": 
    
    SL = SingleLinkedList() 
    SL.append(1)
    SL.append(2)
    SL.append(3)

    print(SL.value_based_index(2))