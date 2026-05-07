// Class: DSingleton<UserInfo>


/* DSingleton<UserInfo>::getInstance() */

UserInfo * DSingleton<UserInfo>::getInstance(void)

{
  UserInfo *this;
  
  if (s_pInstance != (UserInfo *)0x0) {
    return s_pInstance;
  }
  this = ::operator_new(0x28);
  UserInfo::UserInfo(this);
  s_pInstance = this;
  return this;
}


/* DSingleton<DNetwork>::getInstance() */

DNetwork * DSingleton<DNetwork>::getInstance(void)

{
  DNetwork *this;
  
  if (s_pInstance != (DNetwork *)0x0) {
    return s_pInstance;
  }
  this = ::operator_new(0x38);
  DNetwork::DNetwork(this);
  s_pInstance = this;
  return this;
}


/* DSingleton<HeadshotConfig>::getInstance() */

HeadshotConfig * DSingleton<HeadshotConfig>::getInstance(void)

{
  HeadshotConfig *this;
  
  if (s_pInstance != (HeadshotConfig *)0x0) {
    return s_pInstance;
  }
  this = ::operator_new(0x48);
  HeadshotConfig::HeadshotConfig(this);
  s_pInstance = this;
  return this;
}


/* DSingleton<GachaDetailCacheMgr>::getInstance() */

GachaDetailCacheMgr * DSingleton<GachaDetailCacheMgr>::getInstance(void)

{
  GachaDetailCacheMgr *this;
  
  if (s_pInstance != (GachaDetailCacheMgr *)0x0) {
    return s_pInstance;
  }
  this = ::operator_new(0x250);
  GachaDetailCacheMgr::GachaDetailCacheMgr(this);
  s_pInstance = this;
  return this;
}


/* DSingleton<DNodeLoader>::getInstance() */

DNodeLoader * DSingleton<DNodeLoader>::getInstance(void)

{
  DNodeLoader *this;
  
  if (s_pInstance != (DNodeLoader *)0x0) {
    return s_pInstance;
  }
  this = ::operator_new(0x100);
  DNodeLoader::DNodeLoader(this);
  s_pInstance = this;
  return this;
}

