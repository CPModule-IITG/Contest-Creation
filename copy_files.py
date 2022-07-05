#The code copies all the input and output files in respective folders

import os
import shutil

# The current directory in which you are working 
path = "C:/Users/amanb/Desktop/cp/contest creation/testcases"     

input_directory = path + "/input"
if os.path.isdir(input_directory) :
    shutil.rmtree(input_directory)
os.mkdir(input_directory)

output_directory = path + "/output"
if os.path.isdir(output_directory) :
    shutil.rmtree(output_directory)
os.mkdir(output_directory)

n=int(input()) #The number of files 
for i in range(n) :
    st=str(i)
    if(i<10) :
        st="0"+st
    shutil.copy(path+"/input"+st+".txt", input_directory)
    shutil.copy(path+"/output"+st+".txt", output_directory)
