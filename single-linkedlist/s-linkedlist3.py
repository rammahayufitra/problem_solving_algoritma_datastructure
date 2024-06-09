#program to search a specific item in a singly linked list and return true if the item is found otherwise return false.

class Node:
    def __init__(self, data): 
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

    def search(self, data):
        for item in self.iteration():
            if data == item:
                return True, data
            return False 

if __name__ == "__main__": 
    SL = SingleLinkedList() 
    SL.append("ramma")
    SL.append("fitra")

    print(SL.search("ramma"))


