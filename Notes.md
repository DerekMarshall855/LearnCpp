## Description

Some short notes for my own benefit, jotting them down as I go

## Notes

- Best practice is brace initialization, eg: int a { 0 }; // if using value OR: int a {}; // if not using value
- Dont make unused vars (obviously), but can use [[maybe_unused]] before a variable to remove unused warning
- Should always use explicit namespace id when available, eg use std::cout instead of just cout. Avoid 'using namespace `${namespace}`'
- Macro is a rule that defines how input text is converted into replacement output text
- Preprocessor replaces identifier with substitution text (#define identifier substitution_text) -> not that useful
- You can exclude the substitution text and preprocessor will replace identifier with nothing (learn more later, apparently useful)
- Use #ifdef identifier with #endif to only compile code inside the block if the identifier has been previously defined
  - eg: #ifdef MY_NAME std::cout << "Derek"; #endif will only compile IF the #define MY_NAME exists
- Can use #ifndef (if not defined) to do the same thing
- Can use #ifdef 0 to skip a block in compiler
- This still works with substitution, text only subs in normal code, it is ignored for other directives
- Directives are compiled from top to bottom of the file, do not affect other files (even after linked), ignores function scope
- Make sure .cpp files include their matching .h file if one exists, catches errors like invalid return types or functions defs
- Use double quotes for custom headers, angle brackets <> for built in, os, or third party
- Dont manually direct to other folders for including .h files, tell compiler or ide where to look for other files
- g++ or vscode use "-I/source/includes", option
- Dont rely on transitive inclusion, each file should manually include any other file it requires to compile
- Best practice: Include paired header, then others from project, third party, then standard library
- Header guard uses ifndef then a define to prevent a headerfile from being compiled twice and avoids duplicate definitions after preprocessing
- To avoid files with duplicate names in different directories using the same guard name follow one of these name schemes for guards
  - PROJECT_PATH_FILE_H
  - RANDOM LARGE NUMBER_H (I don't like this one)
  - FILE_CREATION DATE_H (Also not a fan)
- The files can still be declared once per .cpp file where they're included though, so it's best practice to only define matching file functions (add.cpp + add.h) withing the .cpp, then include the .h and use it wherever needed
- Modern cpp has #pragma, but it shouldn't be used as header guards offer maximum portability
  - eg use: #pragma once
  - This does the same thing as a guard in a much simpler format, but again isn't great for portability
