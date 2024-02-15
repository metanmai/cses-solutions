<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
  <h1>CSES Solutions</h1>
  <p>This repository contains my solutions to various problems from the <a href="https://cses.fi/problemset/">CSES problem set</a>, all implemented in C++.</p>
  
  <h2>Problem Categories</h2>
  <ol>
    <li>Introductory Problems</li>
    <li>Sorting and Searching</li>
    <li>Dynamic Programming</li>
    <li>Graph Algorithms</li>
    <li>Range Queries</li>
    <li>Tree Algorithms</li>
    <li>Mathematics</li>
    <li>String Algorithms</li>
    <li>Geometry</li>
    <li>Advanced Techniques</li>
    <li>Additional Problems</li>
  </ol>

  <h2>Folder Structure</h2>
  <pre>
    CSES Solutions/
    ├── Introductory Problems/
    │   ├── problem1.cpp
    │   ├── problem2.cpp
    │   └── ...
    ├── Sorting and Searching/
    │   ├── problem1.cpp
    │   ├── problem2.cpp
    │   └── ...
    ├── Dynamic Programming/
    │   ├── problem1.cpp
    │   ├── problem2.cpp
    │   └── ...
    ├── runfile.sh
    └── ...
  </pre>

  <h2>runfile.sh</h2>
  <p>The runfile.sh script is used to generate the final solution.cpp file by replacing the #include "solution-template.hpp" line with the solution template itself, containing macros and all necessary libraries. It takes in the path of the .cpp file as the argument and generates the required solution.cpp file for the input file.</p>
  <h3>Usage:</h3>
  <pre>./runfile.sh path/to/your/file.cpp</pre>

  <h2>Contributing</h2>
  <p>Contributions are welcome! If you have a better solution or want to add a solution to an unsolved problem, feel free to open a pull request.</p>

  <h2>About CSES</h2>
  <p>CSES is a collection of competitive programming tasks maintained by the University of Helsinki. It's an excellent resource for practicing algorithms and data structures. Visit the <a href="https://cses.fi/problemset/">CSES problem set</a> for more information.</p>
</body>
</html>
