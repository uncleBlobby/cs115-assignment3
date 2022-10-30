echo "compiling section1..."
time (
g++ -c OrderedPair.cpp
g++ -c section1.cpp
g++ OrderedPair.o section1.o -o section1
)

echo "compiling section2..."
time (
g++ -c section2.cpp
g++ OrderedPair.o section2.o -o section2
)