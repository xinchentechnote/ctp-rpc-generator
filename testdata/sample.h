class CThostFtdcTraderApi {
public:

  static CThostFtdcTraderApi *CreateFtdcTraderApi(const char *pszFlowPath = "");
  virtual void Release(int data);

  virtual void Init();


protected:
  ~CThostFtdcTraderApi(){};
};