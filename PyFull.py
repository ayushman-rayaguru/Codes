#    -------------------------------  PYTHON TUTORIAL  -------------------------------------


"""  """ # this is used as multiline comment anything between this is commented

##program 1 Play with strings
#-hi = "hello"                         
#-name = "ayush"
#-concat = hi + name
#-print(concat)

 ##program 2 take input and multiply within print
#-num = int(input("TYPE A NUMBER"))    
#-print(100 * num)

##program 3 while loop
#-i=6                                  
#-n=1
#-while n <= 20 :
#-    print(n * i)
#-    n=n+1

##program 4 for loop ,range(start,stop,step_size)
#-for i in range(0,101,25) :            
#-    print(i)

##program 5 looping in list
#-newfolder = [{"apple"},{"mango"},"banana",19,{20},
#               {"pumpkin"},{"pineapple"},{"papaya"}]       
#-for name in newfolder:
#-    print(name)

#-a = float(2)                  ##progarm 6 Type Casting
#-print(a)
#b = int(1.1)
#print(b)
#ch = '1'
#print(int(ch))
#print(str(4.5))
#print(int(True))
#print(int(False))
#print(bool(1))
#print(bool(0))

                                 ##progarm 7 playing with string and commands
"""
name = "Ayushman"               
print(name[0])
print(name[0:5])                    #strings slicing
print(name[5:8])
print(name[0:8:2])                  #strings stride
print(name[2::2])                   # syntax -> starting index :: gap length
print(len(name))
print(3 * name)                     #Tuples of multiple strings
print("Ayushman is \nCoder")
print("Ayushman is \tCoding")       #Escape sequence '\n' newline & '\t' tab
print("\\Ayushman is Enjoying\\")   #Print \ 
print(name.upper())                 #using str_var.upper()
name_replace = name.replace('Ayush','Super') #replace a string or sub-string
print(name_replace)
print(name_replace.find("a"))       #find a element str_var.find("element")
"""


#program 8 List and Tuples
#Tuples are ordered sequence,Written Inside parenthesis,comma seprated,they can be nested
"""


Ratings = (1,3,5,7,9)
print(Ratings[2])

Tuple = ("IBM",1,"Google",2,"Microsoft",3,"Apple",4,"Amazon",5)
Tuple_num = Tuple[1::2]        #initalizing empty tuple with Tuple num
Tuple_str = Tuple[0::2]        #initalizing empty tuple with Tuple str
print(Tuple[1] )               #Single Tuple element printing
print(Tuple[1::2])             #Tuple Slicing starting index::skip value
print(Tuple[0::2])
print(len(Tuple))                 #Length of Tuple
print(sorted(Tuple_num))
print(sorted(Tuple_str))
Tuple1=(5,9,11,53,6)
print(sorted(Tuple1))
#Note : After Tuple "( )" sorted output is returned in list " [ ] " ,otherwise it is returned in Tuple format.

"""

"""
#8.1 Tuples Nesting
Nested_Tuples = (1,2,("Ayushman","Rayaguru"),(3,4),("Studying",6))
print(Nested_Tuples[2][0])
print(Nested_Tuples[4][0])

#8.2 Lists
#List are orderd sequences,It is represented by square brackets,they are mutable
#List can contain strings ,float,integers,nested list,tuples

Tuple_lis = (0,["Ayush",6,"Happy",53,"Awakened",(41,42,"Nature","Life"),"Experience"],1)
print(Tuple_lis[1][5][3])               #(0,1,2) -> index mapping
print(Tuple_lis[-2][-1])                #(-3,-2,-1) -> index mapping

#8.2.1 Concatination of list
L1 = ["Ayushman is Studying in"]
L2 =["College"] 
#Using List_var.extend(some list)   , note : list will extend to itself
L1.extend([L2])
print(L1)

#Converting String into List by splitting
A = "Ayushman Rayaguru".split()
print(A)

#Using Delimiter (", ")
Delim = "a,b,c,d".split(",")
print(Delim)
#Finally the split(",") add single inverted commas (' ' , ' ' , ' ', ' ') to List

"""

#program 9 Dictionaries

#Dictionaries are denoted with curly Brackets { }.
#The keys must be immutable and unique.
#The values can be immutable and duplicates
#Each key and value pair is seprated by comma.

DICT = {'Ayushman' : 19 ,'Akash' : 22 , 'Anishka' : 4 ,'Shibani' : 13 }
a = DICT.keys()
b = DICT.values()
print(a)
print(b)

print(DICT['Ayushman'])    # To print value , DICT['key']
del(DICT['Ayushman'])
c = DICT.keys()
d = DICT.values()
print(c)
print(d)