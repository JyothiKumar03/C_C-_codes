class Student:
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no
        self.year = roll_no[:2]
        self.clg = roll_no[2:4]
        self.entry = roll_no[4:5]
        self.course = roll_no[5:6]
        self.branch = roll_no[6:8]

    details={
        1 : {18: 'in year 2018',
             19: 'in year 2019',
             20: 'in year 2020',
             21: 'in year 2021',
             22: 'in year 2022'},

        2 : {'BD': 'KMIT', 'VD': 'JNTUH', 'TH': 'PRIT', '07': 'VNRVJIT', 'JD': 'CBIT'},

        3 : {'1': 'Normal Entry', '5': 'Lateral Entry'},

        4 : {'A': 'Btech', 'D': 'Mtech', 'E': 'MBA', 'R': 'BPharma'},

        5 : {'05': 'CSE', '12': 'IT', '01': 'CIVIL BRANCH', '19': 'ECE', '21': 'AERONAUTICAL'}
    }

    def __repr__(self):
        return "Student {0} joined {1} branch the college {2} in the year {3}. {0} entry was {4} ".format(self.name,
                                                                                                          self.details[self.[5][self.branch]],
                                                                                                          self.details[self.[2][self.clg]],
                                                                                                          self.details[self.[1][self.year]],
                                                                                                          self.details[self.[3][self.entry]]
                                                                                                         )


print("enter name and roll no of the student")
s1 = Student(input(), input().split())
print(s1)
