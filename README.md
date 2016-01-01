#Parkour

----------


##Parkour game base on cocos2d-x 3.9

I made some updates to make it work in cocos2d-x version 3.9.
right now works on:
 
* Android
* Windows [win32].*
* Windows 8.1 universal platform
* My custom gitignore to just click and make this projects work


For other platforms I don't know how to do this
But I'm pretty sure that they will work.

详情参考 [WIKI](https://github.com/jptiancai/Parkour/wiki)

##Demo
Maybe the will not look the same.
![alt tag](DemoPics/parkour2.gif)
![alt tag](DemoPics/parkour6.gif)

*http://discuss.cocos2d-x.org/t/error-c1083-cant-open-extensions-extensionmacros-h/11937
You need to do this to make it work in the win32 platform

Because of this:

* **error C1083: can’t open “extensions/ExtensionMacros.h”**

**Right click on your project in the property->configure property->C/C++->general->additional include directory
add "$(EngineRoot);" into the "additional include directory". Format just like the other directories.** Thanks to user Burnian form cocos2d-x forums

Oscar Leif