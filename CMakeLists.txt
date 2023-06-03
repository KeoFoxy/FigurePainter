cmake_minimum_required(VERSION 3.20)
project(FigurePainter VERSION 0.1 LANGUAGES CXX C)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS
#        ${CMAKE_CURRENT_LIST_DIR}/UI
        )


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

set(PROJECT_SOURCES
        # Figures
        Figures/abstractfigure.h
        Figures/abstractfigure.cpp
        Figures/figures.h
        Figures/figures.cpp

        # Painter
        Painter/mypainter.h
        Painter/mypainter.cpp

        #View
        View/mainwindow.h
        View/mainwindow.cpp
        View/mainwindow.ui
        )

add_executable(FigurePainter
        ${PROJECT_SOURCES}
        main.cpp)


target_link_libraries(FigurePainter
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

target_include_directories(FigurePainter PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/Figures
        ${CMAKE_CURRENT_LIST_DIR}/Painter
        ${CMAKE_CURRENT_LIST_DIR}/View
        )