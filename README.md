# BSQ  [![Build Status](https://travis-ci.com/ColColty/BSQ.svg?token=vNottg7mygv8HBs1pF24&branch=master)](https://travis-ci.com/ColColty/BSQ)

This project consist in find the biggest square in a map.
The map is passed as first argument to the program:

`./bsq <map>`

The result of the Automatic tests from the school:
All tests are at 100% except the maps for 187x187 that are empty (Not applicable with the solve method I've used) and for the Error handling: 50%.


## Installation

To run the program you just need to clone the repo and when you are in the folder `BSQ` you run the following command:
`make`
It would create an executable file named _bsq_.

Once you have your map and your executable you can run the program with:

`./bsq <map file>`

To clean the project and remove the files created by it you need to run:
`make fclean`

## The map

The map need to be in a file and the first line of the file it would contain the height of the map.

The map will only contain `.` for fillable places and `o` for obstacles.

The map need to look like:
> `.....o` <br />
`.....o` <br />
`....o.` <br />
`.....o` <br />
`o...o.`

The result would be:
> `xxxx.o` <br />
`xxxx.o` <br />
`xxxxo.` <br />
`xxxx.o` <br />
`o...o.`

_Printed on the stdout._

> By the way in the folder `mouli_maps` you have empty examples maps.
And on the other folder `mouli_maps_solved` you have the same maps solved to compare the program.

## Unit tests

There are unit tests that would test if the file is good and other ones that would tests the output.

**Coverage: 97.8% | Branch coverage: 92.2%**
