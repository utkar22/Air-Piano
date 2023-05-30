# Air Piano

## Prototyping Interactive Systems (DES206) - Final Endsem Project

Team Members:
- Aryaman Raina - 2020034
- Ashwin Nair - 2020037
- Utkarsh Arora - 2020143
- Lakshya Karwasara - 2020216

The Air Piano is a physical model of a piano that utilizes Arduino for its functionality. This project is targeted towards children between the ages of 5 and 8, as they possess the necessary skills and abilities to interact with the Air Piano effectively.

### Chosen Age Group

The Air Piano is designed for children aged 5-8 years. This age group possesses the required gross-motor and fine-motor skills, coordination, hand-eye coordination, and the ability to count up to four, which are necessary for playing the Air Piano. Additionally, older children may find the Air Piano less engaging compared to a real piano, hence it is primarily geared towards younger kids.

### The Concept

The Air Piano resembles a regular piano, but with a unique twist. Instead of pressing keys, users simply need to place their hand on the keys to play them. The piano uses sensors to detect the distance between the user's hand and the keys. Based on this distance, a speaker plays a specific frequency corresponding to the note. Furthermore, the Air Piano also includes pre-recorded songs that can be played by pressing the corresponding buttons on the device.

### Components of the Air Piano

#### Base Cardboard

We used a piece of cardboard as the base for the Air Piano. The cardboard was wrapped with sheets of paper and embedded with 8 LED lights. A sheet with drawn notes was pasted on the cardboard, and pictures were added to make it visually appealing to children.

#### The Box

The box houses the backend components of the project. It was assembled using laser-cut pieces and accommodates the Arduino Uno, breadboard, wiring, sensors, and speakers.

#### The Mallet

The mallet is used to play the Air Piano. Users hold the mallet and place it over the desired note to trigger the sound. The mallet was crafted using Epoxy Clay.

### Processes to Create the Air Piano

- Laser Cutting: The cardboard was cut into pieces using a laser cutting machine in the DI Lab.
- Cardboard Assembly: The laser-cut pieces were glued together to form the box that holds the Arduino and the backend components.
- Clay Modelling: We used Fevicryl Mouldit Epoxy Compound to mold the mallet, following a similar process to Assignment 2.
- Painting and Sketching: The mallet was painted using paints, and the piano notes were created using sketchpens.
- Pasting: Sheets and cardboard were pasted together using glue.
- Embedding LEDs: 8 LED lights were embedded into the base cardboard, corresponding to the 8 notes.
- Wire Connection: Wires were connected between the Arduino, breadboard, battery, sensor, and speaker, ensuring the correct polarity.
- Soldering: Wires were soldered onto the buttons and the buzzer using a soldering machine and soldering wire.
- Arduino Logic: An ultrasonic sensor was used to measure the distance between the sensor and the mallet. This distance was used by the Arduino to determine which note to play. The Arduino Uno was also connected to the LED lights, which illuminate when the corresponding note is played. The Air Piano includes buttons associated with pre-recorded songs that trigger the Arduino to play the corresponding song through the speaker.

## Thank You!

We hope you enjoy playing the Air Piano!
