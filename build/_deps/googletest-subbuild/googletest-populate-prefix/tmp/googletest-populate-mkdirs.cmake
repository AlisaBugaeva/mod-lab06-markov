# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/uni/mod-lab06-markov/build/_deps/googletest-src"
  "D:/uni/mod-lab06-markov/build/_deps/googletest-build"
  "D:/uni/mod-lab06-markov/build/_deps/googletest-subbuild/googletest-populate-prefix"
  "D:/uni/mod-lab06-markov/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "D:/uni/mod-lab06-markov/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "D:/uni/mod-lab06-markov/build/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "D:/uni/mod-lab06-markov/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/uni/mod-lab06-markov/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
