struct CThostFtdcWechatUserSystemInfoField {
  ///���͹�˾����
  TThostFtdcBrokerIDType BrokerID;
  ///�û�����
  TThostFtdcUserIDType UserID;
  ///΢��С������û���ϵͳ�ڲ���Ϣ����
  TThostFtdcSystemInfoLenType WechatCltSysInfoLen;
  ///΢��С������û���ϵͳ�ڲ���Ϣ
  TThostFtdcClientSystemInfoType WechatCltSysInfo;
  ///�ն�IP�˿�
  TThostFtdcIPPortType ClientIPPort;
  ///��¼�ɹ�ʱ��
  TThostFtdcTimeType ClientLoginTime;
  /// App����
  TThostFtdcAppIDType ClientAppID;
  ///�û�����IP
  TThostFtdcIPAddressType ClientPublicIP;
  ///�ͻ���¼��ע2
  TThostFtdcClientLoginRemarkType ClientLoginRemark;
};

///ǰ����Ϣ
struct CThostFtdcFrontInfoField {
  ///ǰ�õ�ַ
  TThostFtdcAddressType FrontAddr;
  ///��ѯ����
  TThostFtdcQueryFreqType QryFreq;
  /// FTD����
  TThostFtdcQueryFreqType FTDPkgFreq;
};
