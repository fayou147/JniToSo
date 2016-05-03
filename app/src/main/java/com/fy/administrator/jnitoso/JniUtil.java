package com.fy.administrator.jnitoso;

/**
 * Created by Administrator on 2016/2/23.
 */
public class JniUtil {
    static {
        System.loadLibrary("JNIDemo");
    }

    public native boolean init();
    public native int add(int x, int y);
    public native void destory();
}
