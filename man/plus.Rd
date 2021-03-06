% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plus.R
\docType{methods}
\name{+}
\alias{+}
\alias{+,mapview,mapview-method}
\alias{+}
\alias{+,mapview,ANY-method}
\alias{+}
\alias{+,mapview,character-method}
\title{mapview + mapview adds data from the second map to the first}
\usage{
\S4method{+}{mapview,mapview}(e1, e2)

\S4method{+}{mapview,ANY}(e1, e2)

\S4method{+}{mapview,character}(e1, e2)
}
\arguments{
\item{e1}{a leaflet or mapview map to which e2 should be added.}

\item{e2}{a (spatial) object to be added or a mapview object from which
the objects should be added to e1.}
}
\description{
mapview + mapview adds data from the second map to the first

mapview + data adds spatial data (raster*, sf*, sp*) to a mapview map

[...]
}
\examples{
m1 <- mapView(franconia, col.regions = "red")
m2 <- mapView(breweries)

### add two mapview objects
m1 + m2
'+'(m2, m1)

### add layers to a mapview object
m1 + breweries + poppendorf[[4]]

}
