# aos_A1

q1:)
"#" : The task is to reverse the file content , so I am doing this by taking content from the file load it to buffer and reverse the content and write into another file.
"#" : When we give flag 0 then the file content is reversed, and the input format is shown below.

    Input: ./a.out A.txt 0 → “Hello, World!”
    Output: ‘Assignment1/0_A.txt’ → “!dlroW ,olleH”
    
"#" : when we give flag 1 then the specific data in the file is  reversed based on the given index range ,and input format is shown below.

    ./a.out A.txt 1 2 7
    ‘A.txt’ → “Hello, World!”
    Output: ‘Assignment1/1_A.txt’ → “eHllo, W!dlro”
    
q2:)
"#" : The task is to check the file content is reversed or not and also print the user , group and others permission for newfile,oldfile,directory.
the input format is shown below.

    /a.out <newfile_path> <oldfile_path> <directory_path>
        
    Directory is created: Yes
    Whether file contents are reversed in newfile: Yes
    Both Files Sizes are Same : Yes
    User has read permissions on newfile: Yes
    User has write permission on newfile: Yes
    User has execute permission on newfile: No
    Group has read permissions on newfile: No
    Group has write permission on newfile: No
    Group has execute permission on newfile: No
    Others has read permissions on newfile: No
    Others has write permission on newfile: No
    Others has execute permission on newfile: No
        
