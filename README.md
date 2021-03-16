<h1>Wii Remote extention Arduino library.</h1>
<p>Based on https://eleccelerator.com/wiimote-extension-code/</p>
<h2>API</h2>
<h3>WME.init(handler)</h3>
<p>Library initialization. Takes a pointer to a handler.</p>
<h3>WME.getReg(unsigned char addr)</h3>
<p>Returns the value of the TWI register.</p>
<h3>WME.newAction(unsigned char * report)</h3>
<p>Writes to the buffer the state of the buttons. See https://wiibrew.org/wiki/Wiimote/Extension_Controllers/Classic_Controller#Data_Format</p>