
if [[ $1 == 'docker' ]]; then
    docker build -t test:latest .
    docker run -it test:latest
else
    make all IN_FILE=main.cpp
fi