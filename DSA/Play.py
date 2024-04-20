from queue import Queue

class Stack:
    def __init__(self) -> None:
        self.q1 = []
        self.q2 = []

    def push(self, val):
        q1 = self.q1
        q2 = self.q2
        if(len(q1) == 0):
            q1.append(val)
        else:
            while(not len(q1) == 0):
                q2.append(q1.pop(0))
            q1.append(val)
            while(not len(q2) == 0):
                q1.append(q2.pop(0))

    def pop(self):
        return self.q1.pop(0)

    def isEmpty(self):
        return len(self.q1) == 0

st = Stack()
st.push(1)
st.push(2)
st.push(3)
st.push(4)
# st.pop()
# st.pop()
print(st.q1)
