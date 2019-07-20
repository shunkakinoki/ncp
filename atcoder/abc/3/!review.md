http://www.cplusplus.com/forum/articles/14631/
https://stackoverflow.com/questions/18840422/do-negative-numbers-return-false-in-c-c

All non-zero values will be converted to true, and zero values to false. With negative numbers being non-zero, they are converted to true.

The basic syntax of using the ternary operator is thus:
(condition) ? (if_true) : (if_false)