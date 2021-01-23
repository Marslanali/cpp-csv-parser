# .configure .sh

# shellcheck disable=SC2164
cd /tmp | exit
echo Get GTest Package .........
wget https://github.com/google/googletest/archive/release-1.10.0.tar.gz
tar -xf release-1.10.0.tar.gz
# shellcheck disable=SC2164
cd googletest-release-1.10.0

