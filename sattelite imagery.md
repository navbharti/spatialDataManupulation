# Satellite Imagery Learning Materials
Identifying correct Satellite Imagery data, reading and downloading through [Google Colab](https://colab.research.google.com/github/tensorflow/examples/blob/master/courses/udacity_intro_to_tensorflow_for_deep_learning/l01c01_introduction_to_colab_and_python.ipynb).

**TYPES OF SATELLITE IMAGERY**

1. **VISIBLE IMAGERY**: Visible satellite pictures can only be viewed during the day time, since clouds reflect the light from the sun. On these images, clouds show up as **white**, the ground is normally **grey**, and water is **dark**. In winter, **snow-covered** ground will be **white**, which can make distinguishing clouds more difficult. To help differentiate between clouds and snow, l**ooping pictures** can be helpful; **clouds will move while the snow won't**. Snow-covered ground can also be identified by looking for **terrain features**, such as **rivers** or **lakes**. Rivers will remain dark in the imagery as long as they are not frozen. If the rivers are not visible, they are probably covered with clouds. Visible imagery is also very useful for seeing **thunderstorm clouds building**. Satellite will see the developing thunderstorms in their earliest stages, before they are detected on **radar**.

2. **INFRARED IMAGERY**: Infrared satellite pictures show clouds in both **day and night**. Instead of using sunlight to reflect off of clouds, the clouds are identified by satellite sensors that **measure heat radiating** off of them. The sensors also measure heat radiating off the surface of the earth. Clouds will be colder than land and water, so they are easily identified. Infrared imagery is useful for determining **thunderstorm intensity**. Strong to severe thunderstorms will normally have very cold tops. Infrared imagery can also be used for identifying **fog and low clouds**. The fog product combines two different **infrared channels** to see fog and low clouds at night, which show up as dark areas on the imagery.

3. **WATER VAPOR IMAGERY**: Water vapor satellite pictures indicate how much **moisture** is present in the **upper atmosphere** (approximately from 15,000 ft to 30,000 ft). The **highest humidities** will be the **whitest** areas while **dry regions** will be **dark**. Water vapor imagery is useful for indicating where **heavy rain** is possible. Thunderstorms can also erupt under the high moisture plumes.

If you are struggling to get Satellite Image Data then this is the right place for you. Here I am giving resources that will help to get correct Satellite Imagery and filter as per your requirement. First you will learning how to identify accurate and correct Satellite Imagery Data from [USGS](https://earthexplorer.usgs.gov/) Earth Explorer. So, first you have to select the region of your interest, and apply filter with different parameter. For selecting different paramentere you can learn from [here](https://towardsdatascience.com/access-satellite-imagery-with-aws-and-google-colab-4660178444f5). Once data ther filtered data is ready you will get Satellite image data id which you have to use latter in Google Colab for downloading. 
Know more about Landsat-8 [YouTube video](https://www.youtube.com/watch?v=A6WzAc1FTeA). 

Once the Satellite Image is downloaded you can visualize the image data using diferent bands . Landsat-8 has from band 1 to band 11. If you want to explore more about Landsat-8 bands in more detials click [here](https://blog.mapbox.com/putting-landsat-8s-bands-to-work-631c4029e9d1).
# Landsat-8 and its Bands
A ***band*** is any range of frequencies along the electromagnetic spectrum — a color, although not necessarily a color visible to the human eye. Of its 11 bands, only those in the very shortest wavelengths (bands 1–4 and 8) sense visible light — all the others are in parts of the spectrum that we can’t see.
 
1. **Band 1** senses deep blues and violets. 
2. **Bands 2, 3, and 4** we’ve seen: they’re visible blue, green, and red.
1. **Band 5** measures the near infrared, or NIR
1. **Bands 6 and 7** cover different slices of the shortwave infrared, or SWIR
1. **Band 8 **is the panchromatic — or just pan — band
1. **Band 9** shows the least, yet it’s one of the most interesting features of Landsat 8. It covers a very thin slice of wavelengths: only 1370 ± 10 nanometers.
1. **Bands 10 and 11** are in the thermal infrared, or TIR — they see heat.

Two important things are to give focus on, file name  and Metadata of Satellite Image. File name has its of [convension](https://www.usgs.gov/faqs/what-naming-convention-landsat-collections-level-1-scenes?qt-news_science_products=0#qt-news_science_products) which tell you when, how and what sensors are used to collect data. Metadata tells you how the data were processed, where the data are from and how they are stuctured. 

## Landsat 8 Bands

| Band |	Wavelength range (nanometers)	| Spatial Resolution (m) |	Spectral Width (nm) |	Units |	Data Type	| Fill Value (no data) |	Range |	Valid Range	| Scale Factor |
|----------|---------|-----------|----------|---------|------|-----|------|--------|-------|
| Band 1 - Coastal aerosol |	430 - 450	| 30 |	2.0	 | Reflectance	| 16-bit signed integer (int16)	| -9999	| -2000 to 16000	| 0 to 10000 |	0.0001 |
| Band 2 - Blue	| 450 - 510	| 30	| 6.0 |	Reflectance	| 16-bit signed integer (int16) |	-9999 |	-2000 to 16000 |	0 to 10000 |	0.0001 |
| Band 3 - Green	| 530 - 590	| 30	| 6.0 |	Reflectance	| 16-bit signed integer (int16) |	-9999	| -2000 to 16000	| 0 to 10000	| 0.0001 |
| Band 4 - Red	| 640 - 670	| 30	| 0.03 |	Reflectance	| 16-bit signed integer (int16) |	-9999	| -2000 to 16000	| 0 to 10000	| 0.0001 |
| Band 5 - Near Infrared (NIR)	| 850 - 880 |	30	| 3.0	| Reflectance	| 16-bit signed integer (int16) |	-9999	| -2000 to 16000 |	0 to 10000 |	0.0001 |
| Band 6 - SWIR 1	| 1570 - 1650	| 30	| 8.0 |	Reflectance	| 16-bit signed integer (int16) |	-9999	| -2000 to 16000	| 0 to 10000	| 0.0001 |
| Band 7 - SWIR 2	| 2110 - 2290	| 30	| 18 |	Reflectance	| 16-bit signed integer (int16) |	-9999 |	-2000 to 16000 |	0 to 10000 |	0.0001 |
