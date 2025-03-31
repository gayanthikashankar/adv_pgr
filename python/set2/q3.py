class TermMarks:
    def __init__(self, m1=0, m2=0, m3=0):
        self.marks = [max(0, m1), max(0, m2), max(0, m3)]

    def __str__(self):
        return f"Marks are\nTerm 1: {self.marks[0]}\nTerm 2: {self.marks[1]}\nTerm 3: {self.marks[2]}"

    def update(self, m1=None, m2=None, m3=None):
        if m1 is not None:
            self.marks[0] = max(0, m1)
        if m2 is not None:
            self.marks[1] = max(0, m2)
        if m3 is not None:
            self.marks[2] = max(0, m3)

    def results(self, threshold):
        return "passed" if sum(self.marks) / 3 >= threshold else "failed"

# Test Case
def test_TermMarks():
    t = TermMarks(10, 20, 30)
    print(t)
    print("result (threhsold 30):", t.results(30))
    print("Result (threshold 10):", t.results(10))
    
    t.update(m1=40)
    print(t)
    print("result (threshold 30):", t.results(30))

test_TermMarks()
