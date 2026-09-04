#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <fstream>
#ifndef _WIN32
#error "This Project was only ment for windows please switch to windows and try again."
#endif
int main()
{
	std::string fileList = "System_Files:\n - system.sys\n - doors_browser.config\n\nUser_Files:\n";
	std::string FilesV;
	std::string Files;
    std::string Doorsnet;
    std::string Ui;
    std::cout<<"Welcome to Doors OS C++\n";
    std::cout<<"Type help to get started\n";
    std::string searchs = "doors os , hi , c++ , doors net";
    std::string command = "help , version , date , doors net , shutdown";
    std::string guess;
    std::string print;
	std::cout<<">Doors OS C++ v1\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
	while (true) {
        std::cout<<">Doors ";
        std::getline(std::cin, Ui);
        
        if (Ui == "help") {
            std::cout<<"The commands / applications are: shutdown , help , version , date , doors net , guessing game, files , dir , type(your input)\n";
        } 
        
        if (Ui == "version") {
            std::cout<<"Doors OS C++ version: v1 public realese";
        }
        
        if (Ui == "date") {
            std::time_t currentTime = std::time(nullptr);
			
			std::cout<<">current date and time: " << std::ctime(&currentTime);
        }
        if (Ui == "guessing game") {
        	std::cout<<"guess the number 1-10 \n";
			std::getline(std::cin,guess);
        	if (guess == "4") {
        		std::cout<<"You guessed right :D !!! \n";
        }
        	else if (guess != "4") {
        		std::cout<<"try again you didnt guess right good guess!! \n";
			}
			}
		if (Ui == "files") {
			std::cout<< "enter file name";
			std::getline(std::cin, Files);
			fileList = fileList + "-" + Files + "\n";
			std::cout<< "added file:"<< Files << "\n";
			std::cout<< "would you like to save this as a .txt file? yes, no\n";
			std::getline(std::cin, Files);
			if (Files == "yes") {
				std::getline(std::cin, Files);
				std::ofstream myFile(Files + ".txt");
				std::cout<<"saved file\n";
			}
			
		}
		if (Ui == "dir") {
			std::cout<<"Files";
			std::cout<< fileList << "\n";
		}
		
        if (Ui == "type") {
        	std::cout<<">What to print ";
        	std::getline(std::cin,print);
        	std::cout<< print << "\n";
		}
        
		if (Ui == "doors net") {
            std::cout<<">Doors net ";
			std::getline(std::cin,searchs);
            if (searchs == "doors os") {
                std::cout<<"Doors OS is an os that is based on scratch popular versions are: v24 , v29 ,\n";
            }
            if (searchs == "hi") {
                std::cout<<"Hi is a phrase use to greet people\n";
            }
                
            if (searchs == "c++") {
                std::cout<<"C++ is a programing language used to code oses\n ";
                }

            if (searchs == "doors net") {
                std::cout<<"Doors Net is a web browser made by Doors OS.co \n";
            
            }
            
            if (searchs == "google") {
            	std::cout<<"google is one of the worlds biggest and most used search engines \n";
			}
			else if (searchs != "doors os" && searchs != "hi" && searchs != "c++" && searchs != "doors net" && searchs != "google") {
				std::cout<<"search not found, sorry.\n";
			}
            
            
            }
		if (Ui == "shutdown") {
        	std::cout<<"Powered off...\n";
        	return(0);
        	}
        
        	else if (Ui != "help" && Ui != "version" && Ui != "date" && Ui != "doors net" && Ui != "shutdown" && Ui != "files" && Ui != "dir" && Ui != "type") {
				std::cout<<"command not found did you mean help?\n";
        	}
    }
        return 0;	 
    }
       
 
    
    
    
