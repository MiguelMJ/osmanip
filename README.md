# osmanip

## Table of contents
- [Introduction](#introduction)
- [Description of the repository](#description-of-the-repository)
- [Run the code](#run-the-code)
  * [Download](#download)
    * [Download the whole repository](#download-the-whole-repository)
    * [Download the latest release](#download-the-latest-release)
  * [Compile and run](#compile-and-run)
- [How does osmanip work](#how-does-osmanip-work)
  * [Include the library](#include-the-library)
  * [Classes, functions and variables](#classes-functions-and-variables)
- [List of features](#list-of-features)
  * [Colors and styles manipulation](colors-and-styles-manipulation)
  * [Progress bars](progress-bars)
- [List of future implementations](#list-of-future-implementations)

## Introduction

Here I want to present you *osmanip*: my personal C++ library containing useful output-stream tools to be used in your code. Probably there are already some similar libraries in the web that do the same job, but since I personally don't like them at all I preferred writing my own functiona and classes. With it you can manipulate the output stream of your program with colors, styles (ex: bold, italics, etc...) and helper tools like progress bars and CPU-usage monitor objects. Using this feaures may be very useful to better read error messages or special information you want to be sure other users see when they run your code, or to adorn your general output stream log.

> **NOTE**: all the manipulators of this library are compatible with [iomanip](https://github.com/gcc-mirror/gcc/blob/master/libstdc%2B%2B-v3/include/std/iomanip).

## Description of the repository

The repository contains the following directories / files:
- [*License*](https://github.com/JustWhit3/osmanip/blob/main/License): is the License file, please read it before using this library with your own public code.
- [*.gitignore*](https://github.com/JustWhit3/osmanip/blob/main/.gitignore): it ignores some temporary files you don't have to care about.
- [**.vscode**](https://github.com/JustWhit3/osmanip/blob/main/.vscode): it contains vs code settings in case you are using vs code as an editor.
- [**img**](https://github.com/JustWhit3/osmanip/tree/main/img): it contains media used for documentation.
- [**include**](https://github.com/JustWhit3/osmanip/tree/main/include): it contains the library header files:
  * [*osmanip.h*](https://github.com/JustWhit3/osmanip/blob/main/include/osmanip.h): which is the general header file with global functions, classes and variables declaration.
- [**src**](https://github.com/JustWhit3/osmanip/tree/main/src): it contains library implementation and main files:
  * [*osmanip.cpp*](https://github.com/JustWhit3/osmanip/blob/main/src/osmanip.cpp): which is the general library implementation code.
  * [*main.cpp*](https://github.com/JustWhit3/osmanip/blob/main/src/main.cpp): which shows you examples of the library utilities.
- [**test**](https://github.com/JustWhit3/osmanip/blob/main/test): it contains testing scripts:
  * [*tests.cpp*](https://github.com/JustWhit3/osmanip/blob/main/test/tests.cpp): which tests the main library functions and methods.
- [*makefile*](https://github.com/JustWhit3/osmanip/blob/main/makefile): for main and tests codes compilation.

## Run the code

### Download 

To download the library you can proceed in two independent ways.

#### Download the whole repository

First of all, you need to download the code: go to the [main page](https://github.com/JustWhit3/osmanip) of the repository and click on the upper right green button called `Code`. Than click on `Download ZIP` and wait the download to be completed.

Then open a fresh shell and move the downloaded zipped file to your home directory (or to any other place you prefer):
```shell
mv Downloads/osmanip-main.zip $HOME
```
Where ``Downloads`` have to be replaced with the right name (and maybe the right path) of your downloads directory.

Now you have to enter your home folder (unless you were already in it, in this case skip this passage), extract the folder from the zipped file and renaming itself with its right repository name. Therefore lets type this commands one after the other:
```shell
cd $HOME
unzip osmanip-main.zip
mv osmanip-main osmanip
```
And that's all. You can enter the folder by simply typing:
```shell
cd osmanip
```

#### Download the latest release

Alternatively you can download the latest version of the repository from the ``Releases`` button on the right of the repository main page by clicking on the source code link. In this case the procedure is similar:

Open a fresh shell and move the downloaded zipped file to your home directory (or to any other place you prefer):
```shell
mv Downloads/osmanip-x.y.z.zip $HOME
```
Where `x.y.z` is the release tag and ``Downloads`` have to be replaced with the right name (and maybe the right path) of your downloads directory.

Now you have to enter your home folder (unless you were already in it, in this case skip this passage), extract the folder from the zipped file and renaming itself with its right repository name. Therefore lets type this commands one after the other:
```shell
cd $HOME
unzip osmanip-x.y.z.zip
mv osmanip-x.y.z osmanip
```

> If you prefer to download the tar.gz format of the release you have to run the `gunzip` command followed by the `tar -xvf` command on the zipped release folder and than proceed with `mv`. 

And that's all. You can enter the folder by simply typing:
```shell
cd osmanip
```

### Compile and run

Now, let's supppose to continue from the previous step. For the compilation part I prepared a [makefile](https://github.com/JustWhit3/osmanip/blob/main/makefile), in order to simplify this procedure. So you can run it by simply typing:
```shell
make
```
This will compile both main and tests codes. An extra **obj** folder with object files and two executables, *main* and *tests*, are now created.
> To correctly compile and run the tests.cpp file you need the [doctest](https://github.com/onqtam/doctest) tool installed into your computer.

You have simply to run the former in order to run the entire example code:
```shell
./main
```
or the latter in order to test the correct functionalities of the library classes methods and functions:
```shell
./tests
```
If you want to compile only the main code you can simply enter:
```shell
make main
```
if instead you want to compile only the tests code you can use the following command:
```shell
make tests
```
There is also an option to go back to the pre-compilation state of the code, to do this simply type this command:
```shell
make clean
```

## How does osmanip work

### Include the library

Once you have added the library header and implementation files to one of your project, you may want to be able to use it freely. In order to let it works you have to include it at the beginning of a a code in this way:
```c++
#include "path/to/osmanip/osmanip.h"
```
Where `path/to/osmanip/` is the path to the directory in which you put the osmanip library. If you put the library in the same folder of the project you are working with, you have simply to do:
```c++
#include "osmanip.h"
```
In this latter case you can omit the full path.
> Remember to do this also in [*osmanip.cpp*](https://github.com/JustWhit3/osmanip/blob/main/src/osmanip.cpp)
> and in your makefile, or maybe set this latter in order to avoid this path dependence.

Now you are able to access al the functions and classes of the manipulator.
### Classes, functions and variables

List of the currently defined classes:
- `ProgressBar` which is used to create progress bars. 
  * Constructors / destructor:
    * `ProgressBar()`: default constructor which set to null values the main attributes.
    * `~ProgressBar()`: standard destructor. It doesn't do anything.
  * Setter methods: 
    * `void setMax( long long int max )`: to set max value of the bar.
    * `void setMin( long long int min )`: to set min value of the bar.
    * `void setStyle( std::string style )`: to set the bar style.
    * `void setMessage( std::string message )`: to set optional message of the bar.
    * `void setBegin()`: to set begin time for the CPU time counting.
    * `void setEnd()`: to set end time for the CPU time counting.
    * `void reset()`: to reset all the main attributes.
    * `void resetMax()`: to reset max value of the bar.
    * `void resetMin()`: to reset min value of the bar.
    * `void resetStyle()`: to reset the bar style.
    * `void resetMessage()`: to reset optional message of the bar.
    * `void resetTime()`: to reset CPU time count.
    > **NOTE**: progress bar class fully supports all the positive, negative and null *int* variables. *double* and *floats* are supported too even if they don't optimally work for the moment, in the sense that a few precision in lost when using them into loops.
  * Getter methods: 
    * `long long int getMax()`: to get max value of the bar.
    * `long long int getMin()`: to get min value of the bar.
    * `long long int getTime()`: to get time for the CPU counting of a process.
    * `long long int getIteratingVar()`: to get the iterating variable of the `update` method.
    * `std::string getStyle()`: to get the bar style.
    * `std::string getMessage()`: to get the optional bar message.
  * Other methods: 
    * `void update( long long int iterating_var )`: to update the bar after each loop cycle.
    > **NOTE**: `std::cout` object cannot be used inside a loop within the `update` method.
  * All the attributes are private and used in the above methods, therefore they don't need to be explained here.

List of the currently defined functions:
- `std::string feat ( std::map <std::string, std::string> & generic_map, std::string feat_string )`: which takes an `std::map` object as the first argument and an `std::string` object (map key) as the second argument and returns the interested color / style feature by returning the map value from the corresponding key.
- `std::string reset ( std::string reset_string )`: which takes a `std::string` object (`reset` map key) as argument and returns the interested color / style reset string by returning the map value from the corresponding key.

List of the currently defined std::map objects:
- `std::map <std::string, std::string> col`: which is used for the color output stream manipulation and currently supports the following list of colors (first `std::string`) with the corresponding ASCII code (second `std::string`) or string value in the case of the `error` feature: 
  * `error` / `Inserted color`
  * `black` / `\033[30m`
  * `red` / `\033[31m`
  * `green` / `\033[32m`
  * `orange` / `\033[33m`
  * `blue` / `\033[34m`
  * `purple` / `\033[35m`
  * `cyan` / `\033[36m`
  * `gray` / `\033[37m`
  * `dk gray` / `\033[90m`
  * `lt red` / `\033[91m`
  * `lt green` / `\033[92m`
  * `yellow` / `\033[93m`
  * `lt blue` / `\033[94m`
  * `lt purple` / `\033[95m`
  * `lt cyan` / `\033[96m`
  * `white` / `\033[97m`
  * `bg black` / `\033[40m`
  * `bg red` / `\033[41m`
  * `bg green` / `\033[42m`
  * `bg orange` / `\033[43m`
  * `bg cyan` / `\033[44m`
  * `bg purple` / `\033[45m`
  * `bg blue` / `\033[46m`
  * `bg gray` / `\033[47m`
  * `bg dk gray` / `\033[100m`
  * `bg lt red` / `\033[101m`
  * `bg lt green` / `\033[102m`
  * `bg yellow` / `\033[103m`
  * `bg lt blue` / `\033[104m`
  * `bg lt purple` / `\033[105m`
  * `bg ly cyan` / `\033[106m`
  * `bg white` / `\033[107m`
  * `bd black` / `\033[1;30m`
  * `bd red` / `\033[1;31m`
  * `bd green` / `\033[1;32m`
  * `bd orange` / `\033[1;33m`
  * `bd blue` / `\033[1;34m`
  * `bd purple` / `\033[1;35m`
  * `bd cyan` / `\033[1;36m`
  * `bd gray` / `\033[1;37m`

> **Note**
> "bg" is the prefix of the background color features and "bd" is the one of the bold color features.

- `std::map <std::string, std::string> sty`: which is used for the style output stream manipulation and currently supports the following list of styles (first `std::string`) with the corresponding ASCII code (second `std::string`) or string value in the case of the `error` feature: 
  * `error` / `Inserted color`
  * `bold` / `\033[1m`
  * `faint` / `\033[2m`
  * `italics` / `\033[3m`
  * `underlined` / `\033[4m`
  * `blink` / `\033[5m`
  * `inverse` / `\033[7m`
  * `invisible` / `\033[8m`
  * `crossed` / `\033[9m`
  * `d-underlined` / `\033[21m`
  
- `std::map <std::string, std::string> rst`: which is used to reset features and currently supports the following list of commands (first `std::string`) with the corresponding ASCII code (second `std::string`) or string value in the case of the `error` feature: 
  * `error` / `Inserted reset command`
  * `all` / `\033[0m`
  * `color` / `\033[39m`
  * `bg color` / `\033[49m`
  * `bd color` / `\033[22m + \033[39m`
  * `bd/ft` / `\033[22m`
  * `italics` / `\033[23m`
  * `underlined` / `\033[24m`
  * `blink` / `\033[25m`
  * `inverse` / `\033[27m`
  * `invisible` / `\033[28m`
  * `crossed` / `\033[29m`
  
- `std::map <std::string, std::string> crs`: which is used for the output stream cursor naviagation and currently supports the following list of commands (first `std::string`) with the corresponding ASCII code (second `std::string`) or string value in the case of the `error` feature:
  * `error` / `Inserted cursor command`
  * `up` / \ `u001b[A`
  * `down` / `\u001b[B`
  * `right` / `\u001b[C`
  * `left` / `\u001b[D`

## List of features

Here you can find info and media of the [*main.cpp*](https://github.com/JustWhit3/osmanip/blob/main/main.cpp) output stream which shows you all the features supported in the current version of the manipulator.
### Colors and styles manipulation

List of the supported color / style features:

<img src="https://github.com/JustWhit3/osmanip/blob/main/img/output.png">

Blink string feature:

<img src="https://github.com/JustWhit3/osmanip/blob/main/img/blink.gif" width="250" height="27">

If you want to change for example the output stream color into red you have to call the `feat` function and give it the `col` map as a first argument and the color name as the second one. See the following example:
```c++
cout << feat( col, "red" ) << "This stream is red!" << reset( "color" );
```
This will color the output stream in red until the `reset( "color" )` function is met again, in ordert to reset the output stream color.

You can also print mixed color and style strings:
```c++
cout << feat( sty, "underlined" ) << feat( col, "red" ) << "This is an underlined red string." << reset( "all" );
```
This will underline and color the output stream in red until the `reset( "all" )` function is met again, in ordert to reset all the output stream color / style.

### Progress bars

From release [2.0.0](https://github.com/JustWhit3/osmanip/releases/tag/v2.0.0) of the library, also progress bars have been introduced. Here you can find some examples about how to use them into your code.

Initialize and use a percentage progress bar:
```c++
ProgressBar percentage_bar;
percentage_bar.setMin( 1 );
percentage_bar.setMax ( 100 );
percentage_bar.setStyle( "%" );

cout << "This is a normal percentage bar: " << endl;
 for ( int i = percentage_bar.getMin(); i < percentage_bar.getMax(); i++ )
  {
   sleep_for( milliseconds( 100 ) );
   percentage_bar.update( i );
   //Do some operations...
  }
```
> **NOTE**: `sleep_for( milliseconds( 100 ) )` has been inserted to delay the loop in order to better visualize the progress bar into this .gif file. You don't need to use it in your code.

<img src="https://github.com/JustWhit3/osmanip/blob/main/img/normal_percentage.gif" width="300" height="50">

Add a message to a percentage bar:
```c++
ProgressBar percentage_bar;
percentage_bar.setMin( 1 );
percentage_bar.setMax ( 100 );
percentage_bar.setStyle( "%" );
percentage_bar.setMessage( " processing..." );

cout << "This is a percentage bar with message: " << endl;
 for ( int i = percentage_bar.getMin(); i < percentage_bar.getMax(); i++ )
  {
   sleep_for( milliseconds( 100 ) );
   percentage_bar.update( i );
   //Do some operations...
  }
```

<img src="https://github.com/JustWhit3/osmanip/blob/main/img/message_percentage.gif" width="350" height="50">

Add CPU time consuming info when using a progress bar in loops:
```c++
ProgressBar percentage_bar;
percentage_bar.setMin( 1 );
percentage_bar.setMax ( 100 );
percentage_bar.setStyle( "%" );

cout << "This is a percentage bar with time consuming info: " << endl;
 for ( int i = percentage_bar.getMin(); i < percentage_bar.getMax(); i++ )
  {
   percentage_bar.setBegin();
   sleep_for( milliseconds( 100 ) );
   percentage_bar.update( i );
   //Do some operations...
   percentage_bar.setEnd();
  }
cout << endl << "Time needed to complete the previous cycle: " << percentage_bar.getTime() << " ms." << endl;
```

<img src="https://github.com/JustWhit3/osmanip/blob/main/img/time_percentage.gif" width="475" height="85">

## List of future implementations

Here a list of implementations I planned for future developments:

- Repository installer script.
- Color palette.
- Implement ANSII escape sequences manipulation.
- Implement other progress bar styles (es: loading bar).
- Use template class and methods for the ProgressBar features, in order to better deal with also double and float variables (already supported, but not optimally working).
- Possibility to use multiple loading bars simultaneously using threads.
