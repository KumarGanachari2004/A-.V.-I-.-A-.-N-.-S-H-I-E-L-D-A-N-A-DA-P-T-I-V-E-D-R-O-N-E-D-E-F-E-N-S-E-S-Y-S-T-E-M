{
  "version": 1,
  "author": "Your Name",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-esp32-devkit-v1", "id": "esp", "top": 0, "left": 0 },
    {
      "type": "wokwi-led",
      "id": "laser1",
      "top": -80,
      "left": 150,
      "attrs": { "color": "green", "label": "Laser 1" }
    },
    {
      "type": "wokwi-led",
      "id": "laser2",
      "top": -50,
      "left": 150,
      "attrs": { "color": "green", "label": "Laser 2" }
    },
    {
      "type": "wokwi-led",
      "id": "strobe1",
      "top": -20,
      "left": 150,
      "attrs": { "color": "white", "label": "Strobe" }
    },
    {
      "type": "wokwi-buzzer",
      "id": "buzzer1",
      "top": 20,
      "left": 150,
      "attrs": { "label": "Alarm" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn1",
      "top": 120,
      "left": -50,
      "attrs": { "color": "yellow", "label": "Threat Lvl 1" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn2",
      "top": 120,
      "left": 20,
      "attrs": { "color": "orange", "label": "Threat Lvl 2" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn3",
      "top": 120,
      "left": 90,
      "attrs": { "color": "red", "label": "Threat Lvl 3" }
    }
  ],
  "connections": [
    [ "esp:TX", "$serialMonitor:RX", "", [] ],
    [ "esp:RX", "$serialMonitor:TX", "", [] ],
    [ "laser1:A", "esp:D12", "green", [ "v0" ] ],
    [ "laser1:C", "esp:GND", "black", [ "v0" ] ],
    [ "laser2:A", "esp:D13", "green", [ "v0" ] ],
    [ "laser2:C", "esp:GND", "black", [ "v0" ] ],
    [ "strobe1:A", "esp:D14", "white", [ "v0" ] ],
    [ "strobe1:C", "esp:GND", "black", [ "v0" ] ],
    [ "buzzer1:1", "esp:D2", "red", [ "v0" ] ],
    [ "buzzer1:2", "esp:GND", "black", [ "v0" ] ],
    [ "btn1:1", "esp:GND", "black", [ "v0" ] ],
    [ "btn1:2", "esp:D25", "green", [ "v0" ] ],
    [ "btn2:1", "esp:GND", "black", [ "v0" ] ],
    [ "btn2:2", "esp:D26", "green", [ "v0" ] ],
    [ "btn3:1", "esp:GND", "black", [ "v0" ] ],
    [ "btn3:2", "esp:D27", "green", [ "v0" ] ]
  ]
}
