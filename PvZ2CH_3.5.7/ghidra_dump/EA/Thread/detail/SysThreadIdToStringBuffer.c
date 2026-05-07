// Class: EA::Thread::detail::SysThreadIdToStringBuffer


/* EA::Thread::detail::SysThreadIdToStringBuffer::SysThreadIdToStringBuffer(long) */

int __thiscall
EA::Thread::detail::SysThreadIdToStringBuffer::SysThreadIdToStringBuffer
          (SysThreadIdToStringBuffer *this,long param_1)

{
  int iVar1;
  
  iVar1 = sprintf((char *)this,"%d",param_1);
  return iVar1;
}

