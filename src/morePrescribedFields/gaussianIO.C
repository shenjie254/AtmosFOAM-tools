/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2015 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"
#include "gaussian.H"
#include "IOstreams.H"

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::gaussian::gaussian
(
    Istream& is,
    const point& periodMin__,
    const point& periodMax__
)
:
    centre_(is),
    radius_(is),
    max_(is),
    periodMin_(periodMin__),
    periodMax_(periodMax__)
{
    // Check state of Istream
    is.check("Foam::gaussian::gaussian(Foam::Istream&)");
}


// * * * * * * * * * * * * * * * IOstream Operators  * * * * * * * * * * * * //

Foam::Istream& Foam::operator>>(Istream& is, gaussian& g)
{
    is >> g.centre_ >> g.radius_ >> g.max_ >> g.periodMin_ >> g.periodMax_;
    // Check state of Istream
    is.check
    (
        "Foam::Istream& Foam::operator>>(Foam::Istream&, Foam::gaussian&)"
    );

    return is;
}


Foam::Ostream& Foam::operator<<(Ostream& os, const gaussian& g)
{
    os << g.centre_ << nl << g.radius_ << nl << g.max_ << nl << g.periodMin_
       << nl << g.periodMax_;
    // Check state of Ostream
    os.check
    (
        "Foam::Ostream& Foam::operator<<(Foam::Ostream&, "
        "const Foam::gaussian&)"
    );

    return os;
}


// ************************************************************************* //
