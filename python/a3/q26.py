class Student:
    def __init__(self, name, subjects, marks):
        self.name = name
        self.subjects = subjects
        self.marks = marks
        if len(subjects) != len(marks):
            raise ValueError("subjects and marks must match")
    
    def __str__(self):
        result = f"the studnet {self.name} scores:\n"
        for i in range(len(self.subjects)):
            result += f"{self.subjects[i]}: {self.marks[i]}\n"
        return result
    
    def average(self):
        if not self.marks:
            return 0
        return sum(self.marks) / len(self.marks)

class classAverage:
    def __init__(self, students):
        self.students = students
    
    def __call__(self):
        subs = {}
        
        for s in self.students:
            for i in range(len(s.subjects)):
                subj = s.subjects[i]
                mark = s.marks[i]
                
                if subj not in subs:
                    subs[subj] = []
                subs[subj].append(mark)
        
        result = []
        for subj in sorted(subs.keys()):
            avg = round(sum(subs[subj]) / len(subs[subj]))
            result.append(f"{subj}:{avg}")
        
        return result