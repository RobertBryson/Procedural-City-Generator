Robert Bryson - 2202279

Set Up:
	For this project, you will need Unreal Engine 5.7.3

	1. Extract this .zip folder, to the desired location

	2. Launch the .uproject file (PCG_BP_TEST)

	3. When prompted to rebuild, select "Yes"

	4. Once rebuild has completed, the project will open in the UE editor

	5. Open the editor utility widget, "EUW_PCG-Control", located in the "Content" folder

	6. Press "Run Utility Widget"

	7. Set the controls to your desired values



How To Use The City Generator:
	1. Open the editor utility widget, "EUW_PCG-Control", located in the "Content" folder

	2. Press "Run Utility Widget"

	3. Press "Clean Up" to remove the existing city, then "Flush Cache" to help reduce memory

	4. To create a new outer city spline, set desired values and press "Spline"

	5. Set desired values
	
	6. Press "Generate" to generate the city

	7. Play the level, to explore the city in first person


WARNING:

This project uses high amounts of memory, especially where the outer spline is large, buildings are tall or multiple cities are generated within a small time frame.
Please, do not max out the values, before testing performance on smaller values.
If the editors memory usage becomes too high after generation, please restart the editor before continuing to generate new cities.
