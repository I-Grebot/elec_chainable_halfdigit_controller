using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
This script is used to read all the data coming from the device. For instance,
If arduino send ->
								{"1",
								"2",
								"3",}
readQueue() will return ->
								"1", for the first call
								"2", for the second call
								"3", for the thirst call

This is the perfect script for integration that need to avoid data loose.
If you need speed and low latency take a look to wrmhlReadLatest.
*/

public class wrmhlRead : MonoBehaviour {

	wrmhl myDevice = new wrmhl(); // wrmhl is the bridge beetwen your computer and hardware.

	[Tooltip("SerialPort of your device.")]
	public string portName = "COM8";

	[Tooltip("Baudrate")]
	public int baudRate = 250000;


	[Tooltip("Timeout")]
	public int ReadTimeout = 20;

	[Tooltip("QueueLenght")]
	public int QueueLenght = 1;

    public GameObject firstPixel;

    private List<PixelEntry> pixels;

	void Start () {
        Application.runInBackground = true;
        pixels = new List<PixelEntry>();

		myDevice.set (portName, baudRate, ReadTimeout, QueueLenght); // This method set the communication with the following vars;
		//                              Serial Port, Baud Rates, Read Timeout and QueueLenght.
		myDevice.connect (); // This method open the Serial communication with the vars previously given.
	}

    void ParseData(string newData)
    {
        if (newData.StartsWith("show") == true)
        {
            string result = string.Empty;
            foreach (var pix in pixels)
            {
                result += "(" + pix.r + "," + pix.g + "," + pix.b + ") - ";
            }
            //print(result);
            firstPixel.GetComponent<pixel>().ProcessTrames(pixels);
            pixels.Clear();
        }
        else if (newData.StartsWith("0") == true)
        {
            var arrayData = newData.Split(',');
            string rString = arrayData[1];
            string gString = arrayData[2];
            string bString = arrayData[3];

            float r;
            float g;
            float b;

            float.TryParse(rString, out r);
            float.TryParse(gString, out g);
            float.TryParse(bString, out b);

            pixels.Add(new PixelEntry(r, g, b));
        }
        else
        {
            print(newData);
        }
    }

	// Update is called once per frame
	void Update ()
    {
        bool canContinue = true;
        while(canContinue)
        {
            string newData = myDevice.readQueue();
            if (newData == null)
            {
                canContinue = false;
            }
            else
            {
                ParseData(newData);
                //print(newData);
            }
            /*
            if (newData.StartsWith("show") == true)
            {
                string result = string.Empty;
                foreach(var pix in pixels)
                {
                    result += "(" + pix.r + "," + pix.g + "," + pix.b + ") - ";
                }
                //print(result);
                firstPixel.GetComponent<pixel>().ProcessTrames(pixels);
                print("pixel length before clear = " + pixels.Count);
                pixels.Clear();
            }
            else if(newData.StartsWith("0") == true)
            {
                var arrayData = newData.Split(',');
                string rString = arrayData[1];
                string gString = arrayData[2];
                string bString = arrayData[3];

                float r;
                float g;
                float b;

                float.TryParse(rString, out r);
                float.TryParse(gString, out g);
                float.TryParse(bString, out b);


                print("received = " + arrayData.Length);

                pixels.Add(new PixelEntry(r, g, b));
            } else
            {
                print(newData);
            }
            //*/
            //print (newData); // myDevice.read() return the data coming from the device using thread.
        }
    }

	void OnApplicationQuit() { // close the Thread and Serial Port
		myDevice.close();
	}
}
