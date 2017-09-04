#include <opencv2/highgui/highgui.hpp>

namespace cv {
  bool imencode(const char *, InputArray img, vector<uchar>& buf, const vector<int>& params=vector<int>());
  bool imencode(const string& ext, InputArray img, vector<uchar>& buf, const vector<int>& params) {
    return imencode(ext.c_str(), img, buf, params);
  }
}
