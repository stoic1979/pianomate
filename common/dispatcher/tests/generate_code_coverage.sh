echo "g++ -o dispatcher_test -I.. -fprofile-arcs -ftest-coverage dispatcher_test.cpp ../dispatcher.cpp -lgtest -pthread"
g++ -o dispatcher_test -I.. -fprofile-arcs -ftest-coverage dispatcher_test.cpp ../*.cpp -lgtest -pthread

./dispatcher_test

echo "Generating code coverage"
gcov dispatcher_test.cpp

echo "Generating line coverage"
lcov -c --directory . --output-file dispatcher_test_coverage.info

echo "Generating HTML"
genhtml dispatcher_test_coverage.info --output-directory out
