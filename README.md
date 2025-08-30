🧾 🎯 Project title: Arduino Uno energy consumption optimization  
📅 Project Timeline: March 2020 – June 2020  
🎥 YouTube Demo: To be added  
📦 GitHub Source Code: <https://github.com/IvanSicaja/Arduino-Uno-energy-consumption-optimization>

\----------------------------------------------------------------------------------------------------------------

🏷️ My Personal Profiles: ⬇︎  
🎥 Video Portfolio: To be added  
📦 GitHub Profile: <https://github.com/IvanSicaja>  
🔗 LinkedIn: <https://www.linkedin.com/in/ivan-si%C4%8Daja-832682222>  
🎥 YouTube: <https://www.youtube.com/@ivan_sicaja>

\----------------------------------------------------------------------------------------------------------------

📚🔍 Project description: ⬇︎⬇︎⬇︎

💡 **App Purpose**  
The goal of this project was to **optimize energy consumption** of the **Arduino Uno (ATmega328P)** microcontroller.  
Through hardware adjustments and code-level optimizations, the project demonstrated how power consumption can be drastically reduced from **58 mA down to only 0.01 mA**, achieving an energy efficiency improvement of up to **5800x**.  
Just one of my approximately **50 Arduino projects**.

🧠 **How It Works**  
Optimization was achieved through the following steps:

1. **Clock frequency prescaling** with divisors 2, 4, 8, and 16 to reduce active consumption.
2. Testing all **deep sleep modes** (ADC, PWR_SAVE, STANDBY, PWR_DOWN).
3. **Code optimization** by removing DigitalWrite() functions to save unnecessary overhead.
4. **Hardware optimization** by removing built-in LEDs from the Arduino Uno board, which further reduced idle consumption.

Final result: from **58 mA baseline consumption** down to **0.01 mA**, enabling a system that would normally last **1 day** on battery to theoretically last **10–16 years**.

⚠️ **Note**  
This project is based on experimental measurement and academic research during my studies. It showcases **low-power optimization techniques** for embedded systems.

🔧 **Tech Stack**  
Arduino Uno, **ATmega328P**, C/C++ (Arduino IDE), Low-Power Modes, Prescaler Configuration, Interrupts, Energy Measurement

📣 **Hashtags Section**  
# Arduino #EmbeddedSystems #EnergyOptimization #LowPower #Microcontrollers #ATmega328P #SleepModes #IoT #HardwareOptimization
