the code is derived from [ANTLR4](https://github.com/antlr/antlr4) and [Mustache](https://github.com/kainjow/Mustache)
## installation
1. Install Java (version 1.7 or higher)
2. Download antlr-4.10.1-complete.jar (or whatever version) from [https://www.antlr.org/download.html](https://www.antlr.org/download.html).Save to your directory for 3rd party Java libraries, say `C:/Javalib`
3. Add `antlr-4.10.1-complete.jar` to CLASSPATH
4. Create short convenient commands for the ANTLR Tool
> Copy `_dep/antlr4.bat` and `_dep/grun.bat` to a folder, such as `C:/Javalib`, then add the path `C:/Javalib` to PATH
5. Testing the installation
   >java org.antlr.v4.Tool
   java -jar C:/Javalib/antlr-4.10.1-complete.jar

## usage
In a temporary directory, put the following grammar inside file Hello.g4:
```
// Define a grammar called Hello
grammar Hello;
r  : 'hello' ID ;         // match keyword hello followed by an identifier
ID : [a-z]+ ;             // match lower-case identifiers
WS : [ \t\r\n]+ -> skip ; // skip spaces, tabs, newlines
```
Then run ANTLR the tool on it:
```
cd Test/Hello
antlr4 Hello.g4
javac Hello*.java
```
Now test it:
```
$ grun Hello r -tree
(Now enter something like the string below)
hello parrt
(now,do:)
^Z
(The output:)
(r hello parrt)
(That ^D means EOF on unix; it's ^Z in Windows.) The -tree option prints the parse tree in LISP notation.
It's nicer to look at parse trees visually.
$ grun Hello r -gui
hello parrt
^Z
```
## tips
- some useful arguments
```
antlr /*-visitor -Dlanguage=Cpp */ *.g4 
antlr {{the fliename}} {{the grammar name}} -gui
```
- There is an antlr plugin on vscode, which is easier to use.
- But sometimes an error will occur when using the VS terminal to enter commands directly. At this time, you can directly open cmd and try
### Test
**Window,Vs2022**