#include "config.hpp"
#include "graph_spliter.hpp"

int
main(int argc, char* argv[])
    {
    cv::Mat src = cv::imread(argv[1]);
    GraphSpliter graphSpliter;

    graphSpliter.setImage(src);

    cv::imshow("src", src);
    cv::imshow("data", graphSpliter.getDataImage());
    cv::imshow("x axis", graphSpliter.getXAxisImage());
    cv::imshow("y axis", graphSpliter.getYAxisImage());

    cv::waitKey(0);

    return 0;
    }
