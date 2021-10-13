
class Node:
   def __init__(self,data):
      self.data = data
      self.next = None


class QueueList:

   def __init__(self):
      self.head = None
      

   def enqueue(self,data):
      if not self.head:
         self.head = Node(data)
         return data

      current_node = self.head
      while current_node.next:
         current_node = current_node.next
      current_node.next = Node(data)
      return data

   def dequeue(self):
      if self.head:
         data = self.head.data
         self.head = self.head.next
         return data
      raise Exception('Queue is Empty')


   def peek(self):
      if not self.head:
         raise Exception("Stack is Empty")
      return self.head.data


   def is_empty(self):
      return self.head == None


   def __iter__(self):
      self._iter = self.head
      return self

   def __next__(self):
      if not self._iter:
         raise StopIteration
      data = self._iter.data
      self._iter = self._iter.next
      return data

         
   def view(self):
      current_node = self.head
      while current_node:
         print(current_node.data,end=" -> ")
         current_node = current_node.next
      print(None)



odd_numbers = QueueList()
print(odd_numbers.is_empty())
odd_numbers.enqueue(1)
odd_numbers.enqueue(3)
odd_numbers.enqueue(5)
odd_numbers.view()
odd_numbers.dequeue()
odd_numbers.view()
print(odd_numbers.peek())
print(odd_numbers.is_empty())