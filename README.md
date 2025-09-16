# Leo Pagano - CSE 3150 Homework #3
This repo contains all code to be submitted for CSE 3150 homework assignment #3.

### Explanation
This project makes thorough use of pointers, `const`, references, casting, exceptions, and control flow.

- Pointers: We use these to pass C-strings by reference, and to modify GPA values in place (in `updateGPA()`).

- `const`: We use this to define some function parameters locally as constants within the scope of a function, to allow `main()` to modify the parameters (beforehand) while not allowing the called function to do the same.

- References: The `addStudent()` function passes `size` by reference (rather than by value or as a pointer). This allows us to increment `size` without having to read and write to it in memory manually (i.e. we can just do `size++`).

- Type Casting: We use `static_cast<int>` to convert a `double` (the average GPA) to a rounded `int` during case 4.

- Exceptions: When dealing with a full list (when we are trying to add to it), or an empty list (when computing the average), we throw exceptions as strings. These are caught by `main()` and do not cause the program to stop.

- Control Flow: Our main menu loop is managed by a `switch`/`case` statement which allows the user to numerically select between our five options.


### Testing
Install deps:
```
python3 -m venv ./venv
source venv/bin/activate
pip install -r requirements.txt
```

Then, build and run test cases:
```
c++ solution.cpp -o solution.out -std=c++17
pytest
```

### IMPORTANT DISCLAIMER
The reason for this repository being published is so that it may serve as a) personal reference, and b) proof that I understand the concepts taught in the course. <u>As such, I do not condone plagarism or academic misconduct in any way</u>. Do not clone, reproduce, or steal the code in this repository, as that is plagarism.

> Per the University of Connecticut's [academic integrity policy](https://community.uconn.edu/the-student-code/the-student-code-appendix-a/), "Academic misconduct is dishonest or unethical academic behavior that includes, but is not limited to, misrepresenting mastery in an academic area (e.g., cheating), failing to properly credit information, research, or ideas to their rightful originators or representing such information, research, or ideas as your own (e.g., plagiarism)."
