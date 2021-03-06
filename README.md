# AtmosFOAM-tools
[![DOI](https://zenodo.org/badge/64257768.svg)](https://zenodo.org/badge/latestdoi/64257768)
[![Build Status](https://travis-ci.org/AtmosFOAM/AtmosFOAM-tools.svg?branch=master)](https://travis-ci.org/AtmosFOAM/AtmosFOAM-tools)

AtmosFOAM-tools contains generic libraries and utilities that support atmospheric simulations with [OpenFOAM](https://openfoam.org/).  These generic tools can be combined with [AtmosFOAM](https://github.com/AtmosFOAM/AtmosFOAM) and [AMMM](https://github.com/AtmosFOAM/AMMM) repositories.

## Ubuntu 14.04 or 17.10 binary installation

A binary package is provided for amd64 processors.  To install

    sudo sh -c "wget -O - http://dl.openfoam.org/gpg.key | apt-key add -"
    sudo add-apt-repository http://dl.openfoam.org/ubuntu
    sudo add-apt-repository "http://dl.openfoam.org/ubuntu dev"
    sudo add-apt-repository "http://atmosfoam-apt.s3-website-eu-west-1.amazonaws.com dev"
    sudo apt-get update
    sudo apt-get install atmosfoam-tools

You will need to log out and log in again to use [`gmtFoam`](https://github.com/AtmosFOAM/AtmosFOAM/wiki/gmtFoam).

## Source installation
1. Install a recent version of [OpenFOAM 4 or openfoam-dev](http://www.openfoam.org/download/).
2. Export environment variables `ATMOSFOAM_TOOLS_SRC` and `GMTU` in your `~/.bashrc` file:

       export ATMOSFOAM_TOOLS_SRC=/path/to/AtmosFOAM-tools/src
       export GMTU=/path/to/AtmosFOAM-tools/gmtUser
      
3. Compile AtmosFOAM-tools using `./Allwmake`
