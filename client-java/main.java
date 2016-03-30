public class main {
	public static int intZeromq = 54361; // CHANGE THIS - OPTIONAL
	public static String strName = "YOUR NAME"; // CHANGE THIS - REQUIRED
	
	public static void main(String[] args) {
		{
			assert main.intZeromq > 1024;
			assert main.intZeromq < 65535;
			
			assert main.strName.length() > 2;
			assert main.strName.length() < 16;
			assert main.strName.indexOf(" ") == -1;
		}
		
		{
			zeromq.start();
		}
	}
}