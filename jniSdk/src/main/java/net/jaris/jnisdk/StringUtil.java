package net.jaris.jnisdk;

public class StringUtil {

    public static String ndkString(){
        return getStringNDK();
    }

    private static native String getStringNDK();

    static {
        System.loadLibrary("native-lib");
    }

}
