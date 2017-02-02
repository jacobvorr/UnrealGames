BUILD_PATH = build
APP_PATH = $(BUILD_PATH)/app

build-app: 
	if ! [ -d "$(BUILD_PATH)" ]; then mkdir $(BUILD_PATH); fi
	if [ -d "$(APP_PATH)" ]; then rm -rf $(APP_PATH); fi
	mkdir $(APP_PATH)
	g++ -Wall src/*.cpp -o $(APP_PATH)/BullsAndCows

clean:
	rm -rf $(BUILD_PATH)

clean-app:
	rm -rf $(APP_PATH)

run-app:
	if ! [ -f "./$(APP_PATH)/BullsAndCows" ]; then make build-app; fi
	./$(APP_PATH)/BullsAndCows
