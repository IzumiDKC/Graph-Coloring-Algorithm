# Graph-Coloring-Algorithm

## This is a C++ program to color the vertices of an undirected graph

Function DoThi:
This function is responsible for reading the graph matrix from a file and storing it in array a.

f=fopen("MATRAN.inp","r");: Open the file "MATRAN.inp" in read mode.

if(!f) {printf("\nLoi mo file"); getch(); return 0;}: If the file cannot be opened, print an error message, stop the program, and return 0.

fscanf(f,"%d",&n);: Read the number of vertices of the graph from the file.

Use two nested loops to read the values in the graph matrix and store them in array a.

Function Bac: Function to calculate the degree of vertices in the graph, allocate an array d to store the degree of each vertex. Use two loops to calculate the sum of elements on each row of matrix a and store it in array d.

Function swap: This function simply swaps the values of two integer variables.

Function Arr: This function sorts the vertices in decreasing order of degree. Use the id array to remember the initial positions of the vertices. Use the bubble sort algorithm to sort the array d (degree) along with swapping elements in the id array.

Function tomau: This function performs the graph coloring algorithm, allocates array m to store the coloring result for each vertex. Call the Bac function to calculate the degrees of vertices and the Arr function to sort the vertices by decreasing degree.
Use array m to assign colors to each vertex so that adjacent vertices do not have the same color, print the result of the number of colors needed, and classify vertices by color.

Function main: The main function of the program.
Declare variables for the number of vertices n and the graph matrix a.
Call the DoThi function to read data from the file into n and a.
Call the tomau function to color the graph.

*In summary, this program reads the graph matrix from a file, calculates the degrees of vertices, sorts vertices by decreasing degree, and performs a graph coloring algorithm to ensure that adjacent vertices do not have the same color. The result is to print out the number of colors needed and classify vertices by color.*
