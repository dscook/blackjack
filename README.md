# C++ Implementation of Blackjack

## Acknowledgements

This project was created from the cmake-project-template provided by https://github.com/kigster/cmake-project-template.

## Usage

### Prerequisites

You will need:

 * A modern C/C++ compiler (C++11 at a minimum)
 * CMake 3.1+ installed (on a Mac, run `brew install cmake`)

### Building The Project

#### Git Clone

First we need to check out the git repo:

```bash
$ cd ${insert your workspace folder here}
$ git clone https://github.com/dscook/blackjack blackjack
$ cd blackjack
```

Now we should be in the project's top level folder. 

#### Project Structure

There are three empty folders: `lib`, `bin`, and `include`. Those are populated by `make install`.

The rest should be obvious: `src` is the sources.

Now we can build this project, and below we show two separate ways to do so.

#### Building Manually

```bash
$ rm -rf build/manual && mkdir build/manual
$ cd build/manual
$ cmake ../..
$ make && make install
$ cd ../..
```

#### Building in CLion (JetBrains IDE)

Copy file `.idea/workspace.xml.example` into `.idea/workspace.xml` **before starting CLion**. It will provide a good starting point for your project's workspace.

Start CLion, and open the project's top level folder. CLion should automatically detect the top level `CMakeLists.txt` file and provide you with the full set of build targets.

Select menu option **Build ➜ Build All in 'Debug'**, and then **Build ➜ Install**.

### Running

To play an interactive game of blackjack, from the base of the repository after building:

```
$ ./bin/blackjack
```