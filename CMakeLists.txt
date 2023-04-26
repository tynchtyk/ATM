cmake_minimum_required(VERSION 3.14)
project(ATM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-g -O3 -DNDEBUG -fPIC")

include_directories(atm)
include_directories(accounts)
include_directories(cards)
include_directories(states)
include_directories(forward_declarations)



# Source files
set(SOURCES
    main.cpp
    atm/atm.cc
    cards/card.cc
    accounts/account.cc
    states/no_card_state.cc
    states/card_inserted_state.cc
    states/pin_entered_state.cc
    states/account_selected_state.cc
)

# Header files
set(HEADERS
  atm/atm.h
  cards/card.h
  accounts/account.h
  states/atm_state.h
  states/no_card_state.h
  states/card_inserted_state.h
  states/pin_entered_state.h
  states/account_selected_state.h
  forward_declarations/forward_declarations.h
)

add_executable(main ${SOURCES} ${HEADERS})

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link libraries
target_link_libraries(main)