BUILD_PATH = build
GAME_PATH = $(BUILD_PATH)/game
PROJECT = $(notdir $(shell pwd))
GAME_EXE = $(GAME_PATH)/$(PROJECT)

clean:
	rm -rf $(BUILD_PATH)

build-game:
	if ! [ -d $(BUILD_PATH) ]; then mkdir $(BUILD_PATH); fi
	if [ -d $(GAME_PATH) ]; then rm -rf $(GAME_PATH); fi
	mkdir $(GAME_PATH)
	g++ -Wall src/*.cpp -o $(GAME_EXE)
	
clean-game:
	rm -rf $(GAME_PATH)

run-game:
	if ! [ -f $(GAME_EXE) ]; then make build-game; fi
ifeq ($(OS),Windows_NT)
	$(GAME_EXE).exe
else
	./ $(GAME_EXE)
endif