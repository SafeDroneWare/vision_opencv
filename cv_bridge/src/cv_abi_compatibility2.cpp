#if _GLIBCXX_USE_CXX11_ABI

#define _GLIBCXX_USE_CXX11_ABI 0
#include <opencv2/highgui/highgui.hpp>

namespace cv {
  bool imencode(const char *ext_data, InputArray img, vector<uchar>& buf, const vector<int>& params) {
    std::string ext(ext_data);
    return imencode(ext, img, buf, params);
  }
}

#endif // _GLIBCXX_USE_CXX11_ABI
