# Algoritmos y Estructuras de Datos

This repository contains the source code for assignments, labs and projects due to the course Algorithms and Data Structures, a `C++` based course, for Bioinformatics degree at University of Talca, spring semester 2020.

## Getting Started

The instructions below will help you to get a copy of this repository for running in your local machine for testing and whatever you want.

### Prerequisites

The C++ standard used in this repo is the `c++11`, so you'll need a compiler that supports `c++11` standard. Since one of the requirements of this course is that the programs should be written under GNU/Linux systems, is highly probable that you already have a C++ compiler installed. If you aren't sure, open a terminal and enter `which gcc`. If the output is something similar to `/usr/bin/g++`, then you have the GNU Compiler Collection installed in your system. If your case is the opposite, and if you use a Debian/Ubuntu based distro, execute `sudo apt-get install build-essential` in your terminal. This will install the GNU Compiler Collection and `make` (useful, because compilation is managed by Makefiles), among other stuffs. If you use an Arch-based distro, you already have `gcc` because it form part of the base install, but if for some crazy reason it isn't present in your system, you can run `sudo pacman -S base-devel` and you will have the GNU Compiler Collection and other marvelous and useful stuff, like `make` and `makepkg` (this will help you to manage AUR packages).

Of course, you'll need `git`.

## Installing

Clone the repo

```
git clone https://github.com/pelafustan/aed-guias.git
```

Each folder contains the different assignments, projects and labs. To run one, only browse to the folder and run `make` and then execute the binary, e.g.,

```
cd guia0
make
./program
```

Beside the sources and the Makefile you also find a README file (in spanish) with the aim of the assignemt, project or lab.

## Authors

* **[Patricio Parada](https://github.com/pelafustan)**

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgment

* [Stack Overflow](https://stackoverflow.com)
* Back coffee
* My rubber ducky
