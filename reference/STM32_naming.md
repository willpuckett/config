## Understanding STM32 Naming Conventions

## 5/20/2020 | By [Maker.io Staff](https://www.digikey.com/en/maker/profiles/aeb8ce012a0e494a97c054c40c8b3f1e)

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/Understanding-STM32-Naming-Conventions.jpg?la=en-US&ts=638cd51f-e2bd-4a16-b2d0-97db568cb2a0 "Understanding STM32 Naming Conventions")

The [STM32](https://www.digikey.com/en/products/filter/embedded-microcontrollers/685?s=N4IgTCBcDaIKIFsBGBTAJm9ACAtFgsgJYDGATgPbHkB2ALhQDYMqkDOIANCAMoAq%2BAZjAAZAAwgAugF8gA) is a 32-bit family of microcontrollers produced by STM based on popular 32-bit ARM RISC processing cores. Many of these MCUs come with numerous features, and it’s often quite hard to make sense of the name that’s printed on the IC’s case. However, these descriptors aren’t chosen at random. They follow a clever naming convention, and in this blog, we’ll discuss what each part of that identifier means so that you can quickly decipher the cryptic model numbers in the future!

### Dissecting the Model Identifier for STM32

This article will use the STM32L151R8T6 to explain what each part of its name means.

The name of every STM32 MCU starts with STM32, which denotes the MCU family. That is then followed by a single uppercase letter, which describes the type. The number that follows tells you which ARM Core was used. The next two numbers describe the line of the MCU. The line describes the features of this particular device, for example, the peripherals, and the speed. The following letter denotes the number of pins. After that comes either a number or a letter that denotes the MCU’s flash-memory size. This is followed by the package descriptor. The last number informs you about the device’s operating temperature range:

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/model_A.jpg?la=en&ts=ade1a469-05fb-4495-ab91-5f99f81ad324 "Understanding STM32 Naming Conventions")

### Understanding the different values

The following tables will help you understand what each value within every field mentioned above means.

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/Table_1.jpg?la=en&ts=a261c593-8694-49ce-9c75-0203b511b4b3 "Understanding STM32 Naming Conventions")

It’s interesting to note that the names largely follow a scheme, however, they evolve with the products, and some names fall out of the scheme. For example, the STM32 F2 series, which is a high-performance MCU. Next, the core:

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/Table_2.jpg?la=en&ts=cc625d6c-d4ba-4398-8e27-12c843a468f4 "Understanding STM32 Naming Conventions")

Note that some numbers might refer to the same core, for example, one and two. For the line of the MCU, refer to the STM product page, as this is not universal among the devices.

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/Table_3.jpg?la=en&ts=75dd5f39-9d54-44c6-b4bf-d0b5c25d7f9e "Understanding STM32 Naming Conventions")

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/Table_4.jpg?la=en&ts=900b3625-e38e-4a29-8c2e-1cf696fc9316 "Understanding STM32 Naming Conventions")

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/Table_5.jpg?la=en&ts=60d5382b-8a3a-4832-a2d4-aa1d012fe7c8 "Understanding STM32 Naming Conventions")

And last, but not least, the temperature range:

![Understanding STM32 Naming Conventions](https://www.digikey.com/-/media/MakerIO/Images/blogs/2020/Understanding%20STM32%20Naming%20Conventions/Table_6.jpg?la=en&ts=d44f1a2f-1990-48e8-9a63-063bf9d24821 "Understanding STM32 Naming Conventions")

The beginning of this article featured the STM32L151R8T6 as an example. With the tables presented to you in this article, you should quickly be able to decipher that name. If you do so, you'll see that this is a low-power Cortex M3 MCU with 64 KByte of flash memory that comes in a 64-pin LQFP package that'll operate in a temperature range between -40°C and 85°C.

### Using STM32 Naming Conventions to Your Advantage

Almost all models of the STM32 family of MCUs will follow these naming conventions. However, in some rare cases, there might be inconsistencies. To decode the identifier of an MCU, break up its name in the described parts and use the tables to decipher the values.

### Recommended Reading

[Getting Started with STM32 and Nucleo Part 1: Introduction to STM32CubeIDE and Blinky – Maker.io Tutorial | DigiKey](https://www.digikey.com/en/videos/s/stmicroelectronics/getting-started-with-stm32-and-nucleo-part-1-introduction-to-stm32cubeide-and-blinky--makerio-tutori)

[![TechForum](https://www.digikey.com/-/media/Images/Footer/TechForum2.png?la=en&ts=9efa75a7-28fd-48d1-bcf2-3300f3edfa4e)](https://forum.digikey.com/)

Have questions or comments? Continue the conversation on [TechForum](https://forum.digikey.com/), DigiKey's online community and technical resource.

[Visit TechForum](https://forum.digikey.com/)