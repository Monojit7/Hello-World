/**
 * generated by Voice CodeGen Version: R1_v1.3.0
 * generated on: Fri Jun 23 13:08:17 IST 2017
 */

#include <thread>

#include <CommonAPI/CommonAPI.hpp>
#include "provides/v1/commonapi/examples/E04PhoneBookStubImpl.hpp"
#include <unistd.h>

std::shared_ptr<E04PhoneBookStubImpl> svc;// = std::make_shared<E04PhoneBookStubImpl>();
int main(int argc, char **argv) {
	CommonAPI::Runtime::setProperty("LogContext", "E04PhoneBookServer");
	CommonAPI::Runtime::setProperty("LibraryBase", "E04PhoneBookServer");

	/*
	 * create the runtime
	 */
	std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();
	if(!runtime)
	{
		// Error: could not load runtime
		return 1;
	}
	
	std::string domain = "local";
	std::string connection = "E04PhoneBookServer";

	{
		std::string instance = "E04PhoneBookServer.E04PhoneBookServerInstance";
		 svc = std::make_shared<E04PhoneBookStubImpl>();
		runtime->registerService(domain, instance, svc, connection);
	}


for ( int i = 15; i <=100; i++)
{
    std::cout << "setting the phoneBook Attribute" << std::endl;
    svc->setPhoneBookAttribute(svc->createTestPhoneBook(i));
   sleep(2);
}
	
    
    while (true) {
        std::cout << "Waiting for calls... (Abort with CTRL+C)" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(60));
    }
    return 0;
}
