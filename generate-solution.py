import os
import sys

# Check if the correct number of command-line arguments is provided
if len(sys.argv) != 2:
    print("Usage: python modify_cpp.py <input_file_path>")
    sys.exit(1)

input_file = sys.argv[1]
template_file = "solution-template.hpp"

input_dir = os.path.dirname(input_file)

output_file = os.path.join(input_dir, "solution.cpp")

with open(input_file, 'r') as f:
    input_lines = f.readlines()
    input_code = ''.join(input_lines[1:])

with open(template_file, 'r') as f:
    template_lines = f.readlines()

if len(template_lines) >= 8:
    template_lines[6:8] = ["#include<bits/stdc++.h>\n"]

modified_code = ''.join(template_lines) + input_code

with open(output_file, 'w') as f:
    f.write(modified_code)
