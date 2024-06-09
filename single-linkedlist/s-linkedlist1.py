#program to create a singly linked list, append some items and iterate through the list. 
class Node:
    def __init__(self, data):
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
        current = self.head  # Use a different variable to traverse the list
        while current:
            value = current.data
            current = current.next
            yield value



if __name__ == '__main__':
    SL = LinkedList()
    SL.append("ramma")
    SL.append("hayu")
    SL.append("fitra")
    SL.append("kirana dan Ranum")

    for value in SL.iteration():
        print(value)

    if SL.head:
        print(SL.head.data)
    
    if SL.tail:
        print(SL.tail.data)