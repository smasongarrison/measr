## Release summary

This is a minor release to add some additional functionality.

## Test environments

* local R installation macOS 13.3.1 (a), R 4.2.3
* local R installation macOS 13.3.1 (a), R 4.3.0
* macOS 12.6.5 (on github actions), R 4.3.0
* windows server 2022 x64 (on github actions), R 4.3.0
* ubuntu 22.04.2 (on github actions), R-devel
* ubuntu 22.04.2 (on github actions), R 4.3.0
* ubuntu 22.04.2 (on github actions), R 4.2.3
* win-builder (devel)

## R CMD check results

0 errors | 0 warnings | 3 notes

* cmdstanr is a suggested package not on CRAN. Its availability is indicated in the Additional_repositories field in the DESCRIPTION. The cmdstanr package is completely optional, and is an alternative to rstan (also imported) for estimating models. The default behavior is to use rstan, but cmdstanr functionality is provided for users who may prefer that interface to the 'Stan' language.

* RcppParallel and rstantools are declared imports are not used directly by this package, but are need for the configuration (e.g., `configure` and `configure.win`) and compiling the 'Stan' models.

* GNU make is a system requirement for compiling the 'Stan' models.

## revdepcheck results

We checked 0 reverse dependencies, comparing R CMD check results across CRAN and dev versions of this package.

 * We saw 0 new problems
 * We failed to check 0 packages
