public class Thread1 implements Runnable {
    int angka;
    String namaThread;

    public Thread1(String nama) {
        angka = 0;
        namaThread = nama;
    }
    
    public void run() {
        try {
            do {
                Thread.sleep(1000);
                System.out.println("di "+namaThread+", angka ke-"+angka);
                angka++;
            }

            while (angka<10);
        }

        catch (InterruptedException e) {
            System.out.println("error!");
        }
    }
}
