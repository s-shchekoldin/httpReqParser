
TARGET = httpReqParser

FLAGS = -g -O3 -march=native -Wall -Wextra -Werror -Werror=pedantic

all:
	g++ $(FLAGS) -I./ httpReq.cc main.cc -o $(TARGET) -DDEBUG_MODE2

rust-r:
	rustc -C debuginfo=0 -C opt-level=3 main.rs -o $(TARGET)

rust-d:
	rustc main.rs -o $(TARGET)

clean:
	rm -f $(TARGET)

