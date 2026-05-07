// Class: IShareDriver


/* IShareDriver::IShareDriver() */

void __thiscall IShareDriver::IShareDriver(IShareDriver *this)

{
  *(undefined **)this = &DAT_06615b60;
  return;
}


/* IShareDriver::CreateShareDriver() */

AndroidShareDriverMgr * IShareDriver::CreateShareDriver(void)

{
  AndroidShareDriverMgr *this;
  
  this = ::operator_new(0x18);
  AndroidShareDriverMgr::AndroidShareDriverMgr(this);
  return this;
}

