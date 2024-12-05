import os
import sys
import fileinput

# ======================  edit by yourself  ======================
#sources = [
          #'https://github.com/nuance-internal/ent-rd-digital-ndep_sdk-ios.git',
          #]

#project_name = 'Frameworks'
podspec_file_name = 'NuanceMessagingSDK.podspec'


# ==================================================================



new_tag = ""
cwd = format(os.getcwd())
spec_file_path = cwd + "/" + podspec_file_name
find_version_flag = False

def updateVersion():
    f = open(spec_file_path, 'r+')
    infos = f.readlines()
    f.seek(0, 0)
    file_data = ""
    new_line = ""
    
    global find_version_flag

    for line in infos:
        
        if line.find(".readme") != -1:
            if find_version_flag == False:
                # find s.version = "xxxx"
                print("line version " + line)

                arr2 = line.split('"')
                arr3 = line.split("'")
                
                # complete new_tag
                new_tag = sys.argv[1]
                if len(arr2) > 2:
                    line = arr2[0] + '"' + new_tag + '"' + '\n'

                if len(arr3) > 2:
                    line = arr3[0] + "'" + new_tag + "'" + "\n"
        
                # complete new_line
                print("this is new tag  " + new_tag)
                find_version_flag = True

        file_data += line


    with open(spec_file_path, 'w', ) as f1:
        f1.write(file_data)

    f.close()

    print("--------- auto update version -------- ")


# run commands


updateVersion()


