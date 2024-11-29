### What are arrays in C++? Explain the difference between single-dimensional and multi dimensional arrays.

<b>What Is C++ Array?</b>

-  An array can be defined as a group or collection of similar kinds of elements or data items that are stored together in contiguous memory spaces. 

<b>Explain the difference between single-dimensional and multi dimensional arrays :</b>

|Aspect|Single-Dimensional Array	 |Multi-Dimensional Array|
| -------- | -------- | -------|
|Definition|Store a single list of the element of a similar data type.|Store a ‘list of lists’ of the element of a similar data type.|
|Representation|Represent multiple data items as a list.|Represent multiple data items as a table consisting of rows and columns.|
|Declaration|The declaration varies for different programming language:For C++,  datatypevariable_name[row]For Java,  datatype [] variable_name= new datatype[row]|The declaration varies for different programming language:For C++, datatype variable_name[row][column]For Java,  datatype [][] variable_name= new datatype[row][column]|
|Dimension|One|Two|
|Size(bytes)	|size of(datatype of the variable of the array) * size of the array|size of(datatype of the variable of the array)* the number of rows* the number of columns.|