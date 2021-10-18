#include <iostream>

#include <opencv2/highgui/highgui.hpp>



using namespace std;
using namespace cv;

int main() {
    //打开视频文件：其实就是建立一个VideoCapture结构
    VideoCapture cap("rtsp://admin:xike123456@fanmaoyang.kmdns.net:58084/stream1");
    //定义一个用来控制读取视频循环结束的变量
    bool stop = false;
    //承载每一帧的图像
    Mat frame;
    //显示每一帧的窗口
    namedWindow("Extracted frame");
    while (!stop) {
        //读取下一帧
        if (!cap.read(frame)) {
            cout << "读取视频失败" << endl;
            return -1;
        }
        cap.read(frame); //  或cap>>frame;
        imshow("Video",frame);
        if(waitKey(30)==27) //Esc键退出
        {
            stop = true;
        }

    }
    //关闭视频文件
    cap.release();
    return 0;

}