using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pixel : MonoBehaviour {
    public GameObject nextPixel;

    private float r = 0;
    private float g = 0;
    private float b = 0;

    private Material mat;

    public void ProcessTrame(float r, float g, float b)
    {
        this.r = r;
        this.g = g;
        this.b = b;

    }

    public void ProcessTrames(List<PixelEntry> pixels)
    {
        if(pixels.Count > 0)
        {
            this.ProcessTrame(pixels[0].r, pixels[0].g, pixels[0].b);

            if (nextPixel != null)
            {
                pixels.RemoveAt(0);

                nextPixel.GetComponent<pixel>().ProcessTrames(pixels);
            }
        }
    }

	// Use this for initialization
	void Start () {
        this.mat = new Material(Shader.Find("Standard"));
        Renderer rend = GetComponent<Renderer>();
        rend.material = mat;
    }
	
	// Update is called once per frame
	void Update ()
    {
        //Material mat = new Material(Shader.Find("Standard"));
        mat.color = new Color(this.r / 255f, this.g / 255f, this.b / 255f);
        mat.SetColor("_EmissionColor", new Color(this.r / 255f, this.g / 255f, this.b / 255f));
        //Renderer rend = GetComponent<Renderer>();
        //rend.material = mat;

        //print("(" + this.r + "," + this.g + "," + this.b + ") - ");
    }
}
