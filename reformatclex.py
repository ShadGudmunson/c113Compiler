character = ""
statement = ""
with open("clex.l", "r") as infile:
    for line in infile:
        if " {" in line:
            character = line.split(" ")[0].strip().replace("\"", "")
            statement = ""
        elif "return" in line:
            statement = line.split(" ")[1].strip().replace(";", "")
        
        if character != "" and statement != "":
            print(f'''"{character}" {{
    return alctoken({statement});
}}''')
            character = ""
            statement = ""

