cmake_minimum_required(VERSION 3.5)
project (nome_do_projeto VERSION 1.0.0 LANGUAGES CXX )

#--------------------------------
# This is for old cmake versions
#set (CMAKE_CXX_STANDARD 11)
#--------------------------------

#=== SETTING VARIABLES ===#
# Compiling flags
set( GCC_COMPILE_FLAGS "-Wall" )

# Include dir
include_directories( "src" "lib" )

#=== Test target ===

add_executable(prog "src/main.cpp"
                    "src/Song.cpp"
                    "src/List.cpp"
                    "src/Playlist.cpp"
                    "src/SistemSong.cpp"
                    "src/ListOfPlaylist.cpp"
                    "src/SistemPlaylist.cpp"
                    )

target_compile_features( prog PUBLIC cxx_std_11 )
