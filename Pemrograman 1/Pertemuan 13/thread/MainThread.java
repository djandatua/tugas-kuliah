public class MainThread {
	public static void main (String args[]) {
		Thread1 TM = new Thread1("Thread M CHANDRA NUGRAHA");
        Thread2 TM2 = new Thread2 ("Thread WILLY CHRISTIANTO, S.kom., M.Kom");
        Thread thread1 = new Thread(TM);
        Thread thread2 = new Thread(TM2);
        thread1.start(); thread2.start();
    }
}
