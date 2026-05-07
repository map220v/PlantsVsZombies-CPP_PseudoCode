// Class: ICloudWrapperFactory


/* ICloudWrapperFactory::CreateInstance() */

undefined1 * ICloudWrapperFactory::CreateInstance(void)

{
  int iVar1;
  
  if (((CreateInstance()::iCloudWrapper & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CreateInstance()::iCloudWrapper), iVar1 != 0)) {
    ICloudWrapper::ICloudWrapper((ICloudWrapper *)CreateInstance()::iCloudWrapper);
    __cxa_guard_release(&CreateInstance()::iCloudWrapper);
    __cxa_atexit(nop,CreateInstance()::iCloudWrapper,&DAT_06a88000);
    return CreateInstance()::iCloudWrapper;
  }
  return CreateInstance()::iCloudWrapper;
}

